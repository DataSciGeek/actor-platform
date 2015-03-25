package im.actor.messenger.app.fragment.chat;

import android.app.Activity;
import android.content.Context;
import android.os.Bundle;
import android.support.annotation.Nullable;
import android.support.v7.app.ActionBarActivity;
import android.support.v7.view.ActionMode;
import android.support.v7.widget.LinearLayoutManager;
import android.support.v7.widget.RecyclerView;
import android.view.LayoutInflater;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Toast;

import java.io.IOException;

import im.actor.messenger.R;
import im.actor.messenger.app.fragment.DisplayListFragment;
import im.actor.messenger.app.fragment.chat.adapter.MessageHolder;
import im.actor.messenger.util.Screen;
import im.actor.model.android.view.BindedListAdapter;
import im.actor.model.entity.Message;
import im.actor.model.entity.Peer;
import im.actor.model.entity.content.TextContent;
import im.actor.model.mvvm.BindedDisplayList;
import im.actor.model.viewmodel.ConversationVM;
import im.actor.model.viewmodel.ConversationVMCallback;

import static im.actor.messenger.app.Core.messenger;

/**
 * Created by ex3ndr on 25.03.15.
 */
public abstract class BaseMessagesFragment extends DisplayListFragment<Message, MessageHolder> {

    private Peer peer;
    private LinearLayoutManager linearLayoutManager;
    private MessagesAdapter messagesAdapter;
    private ConversationVM conversationVM;
    private ActionMode actionMode;

    protected BaseMessagesFragment(Peer peer) {
        this.peer = peer;
        Bundle bundle = new Bundle();
        bundle.putByteArray("EXTRA_PEER", peer.toByteArray());
        setArguments(bundle);
    }

    protected BaseMessagesFragment() {

    }

    public Peer getPeer() {
        return peer;
    }

    @Override
    public View onCreateView(LayoutInflater inflater, @Nullable ViewGroup container, @Nullable Bundle savedInstanceState) {
        try {
            peer = Peer.fromBytes(getArguments().getByteArray("EXTRA_PEER"));
        } catch (IOException e) {
            throw new RuntimeException(e);
        }

        View res = inflate(inflater, container, R.layout.fragment_messages, messenger().getMessagesGlobalList(peer));

        View footer = new View(getActivity());
        footer.setLayoutParams(new RecyclerView.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, Screen.dp(8)));
        // Add Footer as Header because of reverse layout
        addHeaderView(footer);

        View header = new View(getActivity());
        header.setLayoutParams(new RecyclerView.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, Screen.dp(64)));
        // Add Header as Footer because of reverse layout
        addFooterView(header);

        conversationVM = messenger().buildConversationVM(peer, new ConversationVMCallback() {
            @Override
            public void onLoaded(long unreadId, final int index) {
                if (messagesAdapter != null) {
                    messagesAdapter.setFirstUnread(unreadId);
                }

                if (linearLayoutManager != null) {
                    if (index > 0) {
                        linearLayoutManager.scrollToPosition(index + 1);
                    } else {
                        linearLayoutManager.scrollToPosition(0);
                    }
                }
            }
        });

        return res;
    }

    @Override
    protected BindedListAdapter<Message, MessageHolder> onCreateAdapter(BindedDisplayList<Message> displayList, Activity activity) {
        messagesAdapter = new MessagesAdapter(displayList, this, activity);
        return messagesAdapter;
    }

    @Override
    protected void configureRecyclerView(RecyclerView recyclerView) {
        recyclerView.setHasFixedSize(true);
        linearLayoutManager = new LinearLayoutManager(getActivity(), LinearLayoutManager.VERTICAL, true);
        linearLayoutManager.setStackFromEnd(true);
        recyclerView.setLayoutManager(linearLayoutManager);
    }

    @Override
    public void onResume() {
        super.onResume();
        messenger().onConversationOpen(peer);
    }


    public boolean onClick(Message message) {
        if (actionMode != null) {
            if (messagesAdapter.isSelected(message)) {
                messagesAdapter.setSelected(message, false);
                if (messagesAdapter.getSelectedCount() == 0) {
                    actionMode.finish();
                    actionMode = null;
                } else {
                    actionMode.invalidate();
                }
            } else {
                messagesAdapter.setSelected(message, true);
                actionMode.invalidate();
            }
            return true;
        }

        return false;
    }

    public boolean onLongClick(Message message) {
        if (actionMode == null) {
            messagesAdapter.clearSelection();
            messagesAdapter.setSelected(message, true);
            actionMode = ((ActionBarActivity) getActivity()).startSupportActionMode(new ActionMode.Callback() {
                @Override
                public boolean onCreateActionMode(ActionMode actionMode, Menu menu) {
                    getActivity().getMenuInflater().inflate(R.menu.messages_context, menu);
                    return true;
                }

                @Override
                public boolean onPrepareActionMode(ActionMode actionMode, Menu menu) {
                    Message[] selected = messagesAdapter.getSelected();
                    if (selected.length > 0) {
                        actionMode.setTitle("" + selected.length);
                    }

                    boolean isAllText = true;

                    for (Message k : selected) {
                        if (!(k.getContent() instanceof TextContent)) {
                            isAllText = false;
                            break;
                        }
                    }

                    menu.findItem(R.id.copy).setVisible(isAllText);
                    return false;
                }

                @Override
                public boolean onActionItemClicked(ActionMode actionMode, MenuItem menuItem) {
                    if (menuItem.getItemId() == R.id.delete) {
                        // TODO: Implement
                        actionMode.finish();
                        return true;
                    } else if (menuItem.getItemId() == R.id.copy) {
                        String text = messenger().getFormatter().formatMessages(messagesAdapter.getSelected());
                        android.content.ClipboardManager clipboard = (android.content.ClipboardManager) getActivity().getSystemService(Context.CLIPBOARD_SERVICE);
                        android.content.ClipData clip = android.content.ClipData.newPlainText("Messages", text);
                        clipboard.setPrimaryClip(clip);
                        Toast.makeText(getActivity(), R.string.toast_messages_copied, Toast.LENGTH_SHORT).show();
                        actionMode.finish();
                        return true;
                    }
                    return false;
                }

                @Override
                public void onDestroyActionMode(ActionMode actionMode) {
                    BaseMessagesFragment.this.actionMode = null;
                    messagesAdapter.clearSelection();
                }
            });
        } else {
            if (messagesAdapter.isSelected(message)) {
                messagesAdapter.setSelected(message, false);
                if (messagesAdapter.getSelectedCount() == 0) {
                    actionMode.finish();
                    actionMode = null;
                } else {
                    actionMode.invalidate();
                }
            } else {
                messagesAdapter.setSelected(message, true);
                actionMode.invalidate();
            }
        }
        return true;
    }

    @Override
    public void onPause() {
        super.onPause();
        messenger().onConversationClosed(peer);
    }

    @Override
    public void onDestroyView() {
        super.onDestroyView();
        if (conversationVM != null) {
            conversationVM.release();
            conversationVM = null;
        }
        messagesAdapter = null;
        linearLayoutManager = null;
        linearLayoutManager = null;
    }
}