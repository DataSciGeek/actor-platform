//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/im/actor/model/i18n/I18nEngine.java
//

#ifndef _AMI18nEngine_H_
#define _AMI18nEngine_H_

@class AMContentTypeEnum;
@class AMMessage;
@class AMServiceContent;
@class AMSexEnum;
@class AMUser;
@class AMUserPresence;
@class IOSObjectArray;
@class ImActorModelModulesModules;
@class JavaUtilHashMap;
@protocol AMLocaleProvider;

#include "J2ObjC_header.h"
#include "java/util/Comparator.h"

@interface AMI18nEngine : NSObject {
}

- (instancetype)initWithAMLocaleProvider:(id<AMLocaleProvider>)provider
          withImActorModelModulesModules:(ImActorModelModulesModules *)modules;

- (NSString *)formatShortDateWithLong:(jlong)date;

- (NSString *)formatTyping;

- (NSString *)formatTypingWithNSString:(NSString *)name;

- (NSString *)formatTypingWithInt:(jint)count;

- (NSString *)formatFileSizeWithInt:(jint)bytes;

- (NSString *)formatTimeWithLong:(jlong)date;

- (NSString *)formatDateWithLong:(jlong)date;

- (NSString *)formatPresenceWithAMUserPresence:(AMUserPresence *)value
                                 withAMSexEnum:(AMSexEnum *)sex;

- (NSString *)formatDurationWithInt:(jint)duration;

- (NSString *)formatGroupMembersWithInt:(jint)count;

- (NSString *)formatGroupOnlineWithInt:(jint)count;

- (NSString *)formatContentDialogTextWithInt:(jint)senderId
                       withAMContentTypeEnum:(AMContentTypeEnum *)contentType
                                withNSString:(NSString *)text
                                     withInt:(jint)relatedUid;

- (jboolean)isLargeDialogMessageWithAMContentTypeEnum:(AMContentTypeEnum *)contentType;

- (NSString *)formatFullServiceMessageWithInt:(jint)senderId
                         withAMServiceContent:(AMServiceContent *)content;

- (NSString *)formatPerformerNameWithInt:(jint)uid;

- (NSString *)getSubjectNameWithInt:(jint)uid;

- (NSString *)formatMessagesWithAMMessageArray:(IOSObjectArray *)messages;

@end

J2OBJC_EMPTY_STATIC_INIT(AMI18nEngine)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

typedef AMI18nEngine ImActorModelI18nI18nEngine;

J2OBJC_TYPE_LITERAL_HEADER(AMI18nEngine)

@interface AMI18nEngine_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithLong:(jlong)lhs
               withLong:(jlong)rhs;

- (jint)compareWithId:(AMMessage *)lhs
               withId:(AMMessage *)rhs;

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(AMI18nEngine_$1)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(AMI18nEngine_$1)

#endif // _AMI18nEngine_H_