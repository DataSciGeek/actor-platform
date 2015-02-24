//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/modules/messages/OwnReadActor.java
//

#ifndef _ImActorModelModulesMessagesOwnReadActor_H_
#define _ImActorModelModulesMessagesOwnReadActor_H_

@class AMPeer;
@class ImActorModelModulesMessagesEntityUnreadMessagesStorage;
@class ImActorModelModulesModules;

#include "J2ObjC_header.h"
#include "im/actor/model/modules/utils/ModuleActor.h"

@interface ImActorModelModulesMessagesOwnReadActor : ImActorModelModulesUtilsModuleActor {
}

- (instancetype)initWithImActorModelModulesModules:(ImActorModelModulesModules *)messenger;

- (void)preStart;

- (void)onNewOutMessageWithAMPeer:(AMPeer *)peer
                         withLong:(jlong)rid
                         withLong:(jlong)sortingDate
                      withBoolean:(jboolean)isEncrypted;

- (void)onNewInMessageWithAMPeer:(AMPeer *)peer
                        withLong:(jlong)rid
                        withLong:(jlong)sortingDate
                     withBoolean:(jboolean)isEncrypted;

- (void)onMessageReadWithAMPeer:(AMPeer *)peer
                       withLong:(jlong)rid
                       withLong:(jlong)sortingDate
                    withBoolean:(jboolean)isEncrypted;

- (void)onMessageReadByMeWithAMPeer:(AMPeer *)peer
                           withLong:(jlong)sortingDate;

- (void)onMessageReadByMeEncryptedWithAMPeer:(AMPeer *)peer
                                    withLong:(jlong)rid;

- (void)onReceiveWithId:(id)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesMessagesOwnReadActor)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesMessagesOwnReadActor)

@interface ImActorModelModulesMessagesOwnReadActor_MessageReadByMeEncrypted : NSObject {
 @public
  AMPeer *peer_;
  jlong rid_;
}

- (instancetype)initWithAMPeer:(AMPeer *)peer
                      withLong:(jlong)rid;

- (AMPeer *)getPeer;

- (jlong)getRid;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesMessagesOwnReadActor_MessageReadByMeEncrypted)

J2OBJC_FIELD_SETTER(ImActorModelModulesMessagesOwnReadActor_MessageReadByMeEncrypted, peer_, AMPeer *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesMessagesOwnReadActor_MessageReadByMeEncrypted)

@interface ImActorModelModulesMessagesOwnReadActor_MessageReadByMe : NSObject {
 @public
  AMPeer *peer_;
  jlong sortDate_;
}

- (instancetype)initWithAMPeer:(AMPeer *)peer
                      withLong:(jlong)sortDate;

- (AMPeer *)getPeer;

- (jlong)getSortDate;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesMessagesOwnReadActor_MessageReadByMe)

J2OBJC_FIELD_SETTER(ImActorModelModulesMessagesOwnReadActor_MessageReadByMe, peer_, AMPeer *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesMessagesOwnReadActor_MessageReadByMe)

@interface ImActorModelModulesMessagesOwnReadActor_MessageRead : NSObject {
 @public
  AMPeer *peer_;
  jlong rid_;
  jlong sortingDate_;
  jboolean isEncrypted__;
}

- (instancetype)initWithAMPeer:(AMPeer *)peer
                      withLong:(jlong)rid
                      withLong:(jlong)sortingDate
                   withBoolean:(jboolean)isEncrypted;

- (AMPeer *)getPeer;

- (jlong)getRid;

- (jlong)getSortingDate;

- (jboolean)isEncrypted;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesMessagesOwnReadActor_MessageRead)

J2OBJC_FIELD_SETTER(ImActorModelModulesMessagesOwnReadActor_MessageRead, peer_, AMPeer *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesMessagesOwnReadActor_MessageRead)

@interface ImActorModelModulesMessagesOwnReadActor_NewOutMessage : NSObject {
 @public
  AMPeer *peer_;
  jlong rid_;
  jlong sortingDate_;
  jboolean isEncrypted__;
}

- (instancetype)initWithAMPeer:(AMPeer *)peer
                      withLong:(jlong)rid
                      withLong:(jlong)sortingDate
                   withBoolean:(jboolean)isEncrypted;

- (AMPeer *)getPeer;

- (jlong)getRid;

- (jlong)getSortingDate;

- (jboolean)isEncrypted;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesMessagesOwnReadActor_NewOutMessage)

J2OBJC_FIELD_SETTER(ImActorModelModulesMessagesOwnReadActor_NewOutMessage, peer_, AMPeer *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesMessagesOwnReadActor_NewOutMessage)

@interface ImActorModelModulesMessagesOwnReadActor_NewMessage : NSObject {
 @public
  AMPeer *peer_;
  jlong rid_;
  jlong sortingDate_;
  jboolean isEncrypted__;
}

- (instancetype)initWithAMPeer:(AMPeer *)peer
                      withLong:(jlong)rid
                      withLong:(jlong)sortingDate
                   withBoolean:(jboolean)isEncrypted;

- (AMPeer *)getPeer;

- (jlong)getRid;

- (jlong)getSortingDate;

- (jboolean)isEncrypted;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesMessagesOwnReadActor_NewMessage)

J2OBJC_FIELD_SETTER(ImActorModelModulesMessagesOwnReadActor_NewMessage, peer_, AMPeer *)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesMessagesOwnReadActor_NewMessage)

#endif // _ImActorModelModulesMessagesOwnReadActor_H_
