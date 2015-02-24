//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/viewmodel/UserPresence.java
//

#ifndef _ImActorModelViewmodelUserPresence_H_
#define _ImActorModelViewmodelUserPresence_H_

@class ImActorModelViewmodelUserPresence_StateEnum;

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

@interface ImActorModelViewmodelUserPresence : NSObject {
}

- (instancetype)initWithImActorModelViewmodelUserPresence_StateEnum:(ImActorModelViewmodelUserPresence_StateEnum *)state;

- (instancetype)initWithImActorModelViewmodelUserPresence_StateEnum:(ImActorModelViewmodelUserPresence_StateEnum *)state
                                                           withLong:(jlong)lastSeen;

- (ImActorModelViewmodelUserPresence_StateEnum *)getState;

- (jlong)getLastSeen;

@end

J2OBJC_EMPTY_STATIC_INIT(ImActorModelViewmodelUserPresence)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelViewmodelUserPresence)

typedef NS_ENUM(NSUInteger, ImActorModelViewmodelUserPresence_State) {
  ImActorModelViewmodelUserPresence_State_UNKNOWN = 0,
  ImActorModelViewmodelUserPresence_State_ONLINE = 1,
  ImActorModelViewmodelUserPresence_State_OFFLINE = 2,
};

@interface ImActorModelViewmodelUserPresence_StateEnum : JavaLangEnum < NSCopying > {
}

- (instancetype)initWithNSString:(NSString *)__name
                         withInt:(jint)__ordinal;

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ImActorModelViewmodelUserPresence_StateEnum_values();

+ (ImActorModelViewmodelUserPresence_StateEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ImActorModelViewmodelUserPresence_StateEnum *ImActorModelViewmodelUserPresence_StateEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

FOUNDATION_EXPORT BOOL ImActorModelViewmodelUserPresence_StateEnum_initialized;
J2OBJC_STATIC_INIT(ImActorModelViewmodelUserPresence_StateEnum)

FOUNDATION_EXPORT ImActorModelViewmodelUserPresence_StateEnum *ImActorModelViewmodelUserPresence_StateEnum_values_[];

#define ImActorModelViewmodelUserPresence_StateEnum_UNKNOWN ImActorModelViewmodelUserPresence_StateEnum_values_[ImActorModelViewmodelUserPresence_State_UNKNOWN]
J2OBJC_ENUM_CONSTANT_GETTER(ImActorModelViewmodelUserPresence_StateEnum, UNKNOWN)

#define ImActorModelViewmodelUserPresence_StateEnum_ONLINE ImActorModelViewmodelUserPresence_StateEnum_values_[ImActorModelViewmodelUserPresence_State_ONLINE]
J2OBJC_ENUM_CONSTANT_GETTER(ImActorModelViewmodelUserPresence_StateEnum, ONLINE)

#define ImActorModelViewmodelUserPresence_StateEnum_OFFLINE ImActorModelViewmodelUserPresence_StateEnum_values_[ImActorModelViewmodelUserPresence_State_OFFLINE]
J2OBJC_ENUM_CONSTANT_GETTER(ImActorModelViewmodelUserPresence_StateEnum, OFFLINE)

J2OBJC_TYPE_LITERAL_HEADER(ImActorModelViewmodelUserPresence_StateEnum)

#endif // _ImActorModelViewmodelUserPresence_H_
