//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/entity/ReadState.java
//

#ifndef _AMReadState_H_
#define _AMReadState_H_

@class AMPeer;
@class BSBserValues;
@class BSBserWriter;
@class IOSByteArray;

#include "J2ObjC_header.h"
#include "im/actor/model/droidkit/bser/BserObject.h"
#include "im/actor/model/storage/KeyValueItem.h"

@interface AMReadState : BSBserObject < AMKeyValueItem > {
}

+ (AMReadState *)fromBytesWithByteArray:(IOSByteArray *)data;

- (instancetype)initWithAMPeer:(AMPeer *)peer
                      withLong:(jlong)lastReadSortingDate;

- (AMPeer *)getPeer;

- (jlong)getLastReadSortingDate;

- (void)parseWithBSBserValues:(BSBserValues *)values;

- (void)serializeWithBSBserWriter:(BSBserWriter *)writer;

- (jlong)getEngineId;

@end

J2OBJC_EMPTY_STATIC_INIT(AMReadState)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT AMReadState *AMReadState_fromBytesWithByteArray_(IOSByteArray *data);
CF_EXTERN_C_END

typedef AMReadState ImActorModelEntityReadState;

J2OBJC_TYPE_LITERAL_HEADER(AMReadState)

#endif // _AMReadState_H_
