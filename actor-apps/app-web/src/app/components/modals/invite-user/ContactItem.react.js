import React from 'react';
//import ReactMixin from 'react-mixin';
//import addons from 'react/addons';
import classnames from 'classnames';

import InviteUserStore from 'stores/InviteUserStore';

import { ChangeState } from 'constants/ActorAppConstants';

import AvatarItem from 'components/common/AvatarItem.react';

//const {addons: { PureRenderMixin }} = addons;

const getStateFromStore = (props) => {
  const { contact } = props;
  const group = InviteUserStore.getGroup();

  return {
    changingState: InviteUserStore.getChangeState(group.id, contact.uid)
  }
};

//@ReactMixin.decorate(PureRenderMixin)
class ContactItem extends React.Component {
  static propTypes = {
    contact: React.PropTypes.object,
    onSelect: React.PropTypes.func,
    member: React.PropTypes.bool
  };

  constructor(props) {
    super(props);

    this.state = getStateFromStore(props);
  }

  componentWillUnmount() {
    const { contact } = this.props;
    const group = InviteUserStore.getGroup();
    InviteUserStore.resetChangeState(group.id, contact.uid);
  }

  onSelect = () => {
    this.props.onSelect(this.props.contact);
    InviteUserStore.addChangeListener(this.onChange);
  };

  onChange = () => {
    this.setState(getStateFromStore(this.props));

    const { changingState } = this.state;

    if (changingState === ChangeState.SUCCESS && changingState === ChangeState.FAILURE) {
      InviteUserStore.removeChangeListener(this.onChange);
    }
  };

  render() {
    const { contact, member } = this.props;
    const { changingState } = this.state;

    let controls;
    switch (changingState) {
      case ChangeState.SUCCESS:
      case ChangeState.INIT:
        controls = !member
          ? <a className="material-icons" onClick={this.onSelect}>person_add</a>
          : <i className="material-icons">check</i>;
        break;
      case ChangeState.IN_PROCESS:
        controls = <i className="material-icons">refresh</i>;
        break;
      case ChangeState.FAILURE:
        controls = <i className="material-icons">warning</i>;
        break;
    }

    const contactClassName = classnames('contacts__list__item row', {
      'contacts__list__item--member': member
    });

    return (
      <li className={contactClassName}>
        <AvatarItem image={contact.avatar}
                    placeholder={contact.placeholder}
                    size="small"
                    title={contact.name}/>

        <div className="col-xs">
            <span className="title">
              {contact.name}
            </span>
        </div>

        <div className="controls">
          {controls}
        </div>
      </li>
    );
  }
}

export default ContactItem;
