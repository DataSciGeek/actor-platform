//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/modules/messages/entity/UnreadMessagesStorage.java
//

#ifndef _ImActorModelModulesMessagesEntityUnreadMessagesStorage_H_
#define _ImActorModelModulesMessagesEntityUnreadMessagesStorage_H_

@class AMPeer;
@class BSBserValues;
@class BSBserWriter;
@class IOSByteArray;
@class JavaUtilHashMap;
@class JavaUtilHashSet;

#include "J2ObjC_header.h"
#include "im/actor/model/droidkit/bser/BserObject.h"

@interface ImActorModelModulesMessagesEntityUnreadMessagesStorage : BSBserObject {
}

+ (ImActorModelModulesMessagesEntityUnreadMessagesStorage *)fromBytesWithByteArray:(IOSByteArray *)data;

- (JavaUtilHashSet *)getUnreadWithAMPeer:(AMPeer *)peer;

- (void)parseWithBSBserValues:(BSBserValues *)values;

- (void)serializeWithBSBserWriter:(BSBserWriter *)writer;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelModulesMessagesEntityUnreadMessagesStorage)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT ImActorModelModulesMessagesEntityUnreadMessagesStorage *ImActorModelModulesMessagesEntityUnreadMessagesStorage_fromBytesWithByteArray_(IOSByteArray *data);
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelModulesMessagesEntityUnreadMessagesStorage)

#endif // _ImActorModelModulesMessagesEntityUnreadMessagesStorage_H_
