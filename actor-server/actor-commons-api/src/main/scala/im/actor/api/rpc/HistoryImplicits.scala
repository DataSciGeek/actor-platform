package im.actor.api.rpc

import com.google.protobuf.CodedInputStream
import im.actor.api.rpc.messaging.{ HistoryMessage, Message, MessageState }
import im.actor.server.models
import org.joda.time.DateTime

trait HistoryImplicits {

  implicit class ExtHistoryMessageModel(model: models.HistoryMessage) {
    def ofUser(userId: Int) = {
      model.copy(userId = userId)
    }

    def asStruct(lastReceivedAt: DateTime, lastReadAt: DateTime) = {
      val in = CodedInputStream.newInstance(model.messageContentData)
      try {
        Message.parseFrom(in) match {
          case Right(messageContent) ⇒
            val state = if (model.userId == model.senderUserId) {
              if (model.date.getMillis <= lastReadAt.getMillis) {
                Some(MessageState.Read)
              } else if (model.date.getMillis <= lastReceivedAt.getMillis) {
                Some(MessageState.Received)
              } else {
                Some(MessageState.Sent)
              }
            } else {
              None // for incoming
            }

            HistoryMessage(senderUserId = model.senderUserId, randomId = model.randomId, date = model.date.getMillis, message = messageContent, state = state)
          case Left(e) ⇒ throw new Exception(s"Failed to parse message content $e")
        }
      } catch {
        case e: Throwable ⇒
          throw e
      }
    }
  }

}
