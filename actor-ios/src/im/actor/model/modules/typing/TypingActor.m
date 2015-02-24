//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/actor-ios/build/java/im/actor/model/modules/typing/TypingActor.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "im/actor/model/droidkit/actors/Actor.h"
#include "im/actor/model/droidkit/actors/ActorRef.h"
#include "im/actor/model/droidkit/actors/ActorSystem.h"
#include "im/actor/model/droidkit/actors/Props.h"
#include "im/actor/model/droidkit/actors/mailbox/Envelope.h"
#include "im/actor/model/droidkit/actors/mailbox/Mailbox.h"
#include "im/actor/model/droidkit/actors/mailbox/MailboxesQueue.h"
#include "im/actor/model/entity/User.h"
#include "im/actor/model/modules/Modules.h"
#include "im/actor/model/modules/Typing.h"
#include "im/actor/model/modules/typing/TypingActor.h"
#include "im/actor/model/modules/utils/ModuleActor.h"
#include "im/actor/model/mvvm/ValueModel.h"
#include "im/actor/model/viewmodel/GroupTypingVM.h"
#include "im/actor/model/viewmodel/UserTypingVM.h"
#include "java/lang/Boolean.h"
#include "java/lang/Integer.h"
#include "java/util/HashMap.h"
#include "java/util/HashSet.h"

__attribute__((unused)) static void ImActorModelModulesTypingTypingActor_privateTypingWithInt_withInt_(ImActorModelModulesTypingTypingActor *self, jint uid, jint type);
__attribute__((unused)) static void ImActorModelModulesTypingTypingActor_stopPrivateTypingWithInt_(ImActorModelModulesTypingTypingActor *self, jint uid);
__attribute__((unused)) static void ImActorModelModulesTypingTypingActor_groupTypingWithInt_withInt_withInt_(ImActorModelModulesTypingTypingActor *self, jint gid, jint uid, jint type);
__attribute__((unused)) static void ImActorModelModulesTypingTypingActor_stopGroupTypingWithInt_withInt_(ImActorModelModulesTypingTypingActor *self, jint gid, jint uid);

@interface ImActorModelModulesTypingTypingActor () {
 @public
  JavaUtilHashSet *typings_;
  JavaUtilHashMap *groupTypings_;
}

- (void)privateTypingWithInt:(jint)uid
                     withInt:(jint)type;

- (void)stopPrivateTypingWithInt:(jint)uid;

- (void)groupTypingWithInt:(jint)gid
                   withInt:(jint)uid
                   withInt:(jint)type;

- (void)stopGroupTypingWithInt:(jint)gid
                       withInt:(jint)uid;
@end

J2OBJC_FIELD_SETTER(ImActorModelModulesTypingTypingActor, typings_, JavaUtilHashSet *)
J2OBJC_FIELD_SETTER(ImActorModelModulesTypingTypingActor, groupTypings_, JavaUtilHashMap *)

@interface ImActorModelModulesTypingTypingActor_StopTyping () {
 @public
  jint uid_;
}
@end

@interface ImActorModelModulesTypingTypingActor_StopGroupTyping () {
 @public
  jint gid_;
  jint uid_;
}
@end

@interface ImActorModelModulesTypingTypingActor_PrivateTyping () {
 @public
  jint uid_;
  jint type_;
}
@end

@interface ImActorModelModulesTypingTypingActor_GroupTyping () {
 @public
  jint gid_;
  jint uid_;
  jint type_;
}
@end

@interface ImActorModelModulesTypingTypingActor_$1 () {
 @public
  ImActorModelModulesModules *val$messenger_;
}
@end

J2OBJC_FIELD_SETTER(ImActorModelModulesTypingTypingActor_$1, val$messenger_, ImActorModelModulesModules *)

@implementation ImActorModelModulesTypingTypingActor

+ (DKActorRef *)getWithImActorModelModulesModules:(ImActorModelModulesModules *)messenger {
  return ImActorModelModulesTypingTypingActor_getWithImActorModelModulesModules_(messenger);
}

- (instancetype)initWithImActorModelModulesModules:(ImActorModelModulesModules *)messenger {
  if (self = [super initWithImActorModelModulesModules:messenger]) {
    typings_ = [[JavaUtilHashSet alloc] init];
    groupTypings_ = [[JavaUtilHashMap alloc] init];
  }
  return self;
}

- (void)privateTypingWithInt:(jint)uid
                     withInt:(jint)type {
  ImActorModelModulesTypingTypingActor_privateTypingWithInt_withInt_(self, uid, type);
}

- (void)stopPrivateTypingWithInt:(jint)uid {
  ImActorModelModulesTypingTypingActor_stopPrivateTypingWithInt_(self, uid);
}

- (void)groupTypingWithInt:(jint)gid
                   withInt:(jint)uid
                   withInt:(jint)type {
  ImActorModelModulesTypingTypingActor_groupTypingWithInt_withInt_withInt_(self, gid, uid, type);
}

- (void)stopGroupTypingWithInt:(jint)gid
                       withInt:(jint)uid {
  ImActorModelModulesTypingTypingActor_stopGroupTypingWithInt_withInt_(self, gid, uid);
}

- (void)onReceiveWithId:(id)message {
  if ([message isKindOfClass:[ImActorModelModulesTypingTypingActor_PrivateTyping class]]) {
    ImActorModelModulesTypingTypingActor_PrivateTyping *typing = (ImActorModelModulesTypingTypingActor_PrivateTyping *) check_class_cast(message, [ImActorModelModulesTypingTypingActor_PrivateTyping class]);
    ImActorModelModulesTypingTypingActor_privateTypingWithInt_withInt_(self, [((ImActorModelModulesTypingTypingActor_PrivateTyping *) nil_chk(typing)) getUid], [typing getType]);
  }
  else if ([message isKindOfClass:[ImActorModelModulesTypingTypingActor_GroupTyping class]]) {
    ImActorModelModulesTypingTypingActor_GroupTyping *typing = (ImActorModelModulesTypingTypingActor_GroupTyping *) check_class_cast(message, [ImActorModelModulesTypingTypingActor_GroupTyping class]);
    ImActorModelModulesTypingTypingActor_groupTypingWithInt_withInt_withInt_(self, [((ImActorModelModulesTypingTypingActor_GroupTyping *) nil_chk(typing)) getGid], [typing getUid], [typing getType]);
  }
  else if ([message isKindOfClass:[ImActorModelModulesTypingTypingActor_StopTyping class]]) {
    ImActorModelModulesTypingTypingActor_StopTyping *typing = (ImActorModelModulesTypingTypingActor_StopTyping *) check_class_cast(message, [ImActorModelModulesTypingTypingActor_StopTyping class]);
    ImActorModelModulesTypingTypingActor_stopPrivateTypingWithInt_(self, [((ImActorModelModulesTypingTypingActor_StopTyping *) nil_chk(typing)) getUid]);
  }
  else if ([message isKindOfClass:[ImActorModelModulesTypingTypingActor_StopGroupTyping class]]) {
    ImActorModelModulesTypingTypingActor_StopGroupTyping *typing = (ImActorModelModulesTypingTypingActor_StopGroupTyping *) check_class_cast(message, [ImActorModelModulesTypingTypingActor_StopGroupTyping class]);
    ImActorModelModulesTypingTypingActor_stopGroupTypingWithInt_withInt_(self, [((ImActorModelModulesTypingTypingActor_StopGroupTyping *) nil_chk(typing)) getGid], [typing getUid]);
  }
  else {
    [self dropWithId:message];
  }
}

- (void)copyAllFieldsTo:(ImActorModelModulesTypingTypingActor *)other {
  [super copyAllFieldsTo:other];
  other->typings_ = typings_;
  other->groupTypings_ = groupTypings_;
}

@end

DKActorRef *ImActorModelModulesTypingTypingActor_getWithImActorModelModulesModules_(ImActorModelModulesModules *messenger) {
  ImActorModelModulesTypingTypingActor_init();
  return [((DKActorSystem *) nil_chk(DKActorSystem_system())) actorOfWithDKProps:DKProps_createWithIOSClass_withDKActorCreator_withDKMailboxCreator_(ImActorModelModulesTypingTypingActor_class_(), [[ImActorModelModulesTypingTypingActor_$1 alloc] initWithImActorModelModulesModules:messenger], [[ImActorModelModulesTypingTypingActor_$2 alloc] init]) withNSString:@"actor/typing"];
}

void ImActorModelModulesTypingTypingActor_privateTypingWithInt_withInt_(ImActorModelModulesTypingTypingActor *self, jint uid, jint type) {
  if (type != 0) {
    return;
  }
  if ([self getUserWithInt:uid] == nil) {
    return;
  }
  if (![((JavaUtilHashSet *) nil_chk(self->typings_)) containsWithId:JavaLangInteger_valueOfWithInt_(uid)]) {
    [self->typings_ addWithId:JavaLangInteger_valueOfWithInt_(uid)];
    [((AMValueModel *) nil_chk([((ImActorModelViewmodelUserTypingVM *) nil_chk([((ImActorModelModulesTyping *) nil_chk([((ImActorModelModulesModules *) nil_chk([self modules])) getTypingModule])) getTypingWithInt:uid])) getTyping])) changeWithId:JavaLangBoolean_valueOfWithBoolean_(YES)];
  }
  [((DKActorRef *) nil_chk([self self__])) sendOnceWithId:[[ImActorModelModulesTypingTypingActor_StopTyping alloc] initWithInt:uid] withLong:ImActorModelModulesTypingTypingActor_TYPING_TEXT_TIMEOUT];
}

void ImActorModelModulesTypingTypingActor_stopPrivateTypingWithInt_(ImActorModelModulesTypingTypingActor *self, jint uid) {
  if ([((JavaUtilHashSet *) nil_chk(self->typings_)) containsWithId:JavaLangInteger_valueOfWithInt_(uid)]) {
    [self->typings_ removeWithId:JavaLangInteger_valueOfWithInt_(uid)];
    [((AMValueModel *) nil_chk([((ImActorModelViewmodelUserTypingVM *) nil_chk([((ImActorModelModulesTyping *) nil_chk([((ImActorModelModulesModules *) nil_chk([self modules])) getTypingModule])) getTypingWithInt:uid])) getTyping])) changeWithId:JavaLangBoolean_valueOfWithBoolean_(NO)];
  }
}

void ImActorModelModulesTypingTypingActor_groupTypingWithInt_withInt_withInt_(ImActorModelModulesTypingTypingActor *self, jint gid, jint uid, jint type) {
  if (type != 0) {
    return;
  }
  if ([self getUserWithInt:uid] == nil) {
    return;
  }
  if (![((JavaUtilHashMap *) nil_chk(self->groupTypings_)) containsKeyWithId:JavaLangInteger_valueOfWithInt_(gid)]) {
    JavaUtilHashSet *set = [[JavaUtilHashSet alloc] init];
    [set addWithId:JavaLangInteger_valueOfWithInt_(uid)];
    (void) [self->groupTypings_ putWithId:JavaLangInteger_valueOfWithInt_(gid) withId:set];
    [((AMValueModel *) nil_chk([((ImActorModelViewmodelGroupTypingVM *) nil_chk([((ImActorModelModulesTyping *) nil_chk([((ImActorModelModulesModules *) nil_chk([self modules])) getTypingModule])) getGroupTypingWithInt:gid])) getActive])) changeWithId:[IOSIntArray newArrayWithInts:(jint[]){ uid } count:1]];
  }
  else {
    JavaUtilHashSet *src = [self->groupTypings_ getWithId:JavaLangInteger_valueOfWithInt_(gid)];
    if (![((JavaUtilHashSet *) nil_chk(src)) containsWithId:JavaLangInteger_valueOfWithInt_(uid)]) {
      [src addWithId:JavaLangInteger_valueOfWithInt_(uid)];
      IOSObjectArray *ids = [src toArrayWithNSObjectArray:[IOSObjectArray newArrayWithLength:[src size] type:JavaLangInteger_class_()]];
      IOSIntArray *ids2 = [IOSIntArray newArrayWithLength:((IOSObjectArray *) nil_chk(ids))->size_];
      for (jint i = 0; i < ids->size_; i++) {
        *IOSIntArray_GetRef(ids2, i) = [((JavaLangInteger *) nil_chk(IOSObjectArray_Get(ids, i))) intValue];
      }
      [((AMValueModel *) nil_chk([((ImActorModelViewmodelGroupTypingVM *) nil_chk([((ImActorModelModulesTyping *) nil_chk([((ImActorModelModulesModules *) nil_chk([self modules])) getTypingModule])) getGroupTypingWithInt:gid])) getActive])) changeWithId:ids2];
    }
  }
  [((DKActorRef *) nil_chk([self self__])) sendOnceWithId:[[ImActorModelModulesTypingTypingActor_StopGroupTyping alloc] initWithInt:gid withInt:uid] withLong:ImActorModelModulesTypingTypingActor_TYPING_TEXT_TIMEOUT];
}

void ImActorModelModulesTypingTypingActor_stopGroupTypingWithInt_withInt_(ImActorModelModulesTypingTypingActor *self, jint gid, jint uid) {
  if (![((JavaUtilHashMap *) nil_chk(self->groupTypings_)) containsKeyWithId:JavaLangInteger_valueOfWithInt_(gid)]) {
    return;
  }
  JavaUtilHashSet *set = [self->groupTypings_ getWithId:JavaLangInteger_valueOfWithInt_(gid)];
  if ([((JavaUtilHashSet *) nil_chk(set)) containsWithId:JavaLangInteger_valueOfWithInt_(uid)]) {
    [set removeWithId:JavaLangInteger_valueOfWithInt_(uid)];
    IOSObjectArray *ids = [set toArrayWithNSObjectArray:[IOSObjectArray newArrayWithLength:[set size] type:JavaLangInteger_class_()]];
    IOSIntArray *ids2 = [IOSIntArray newArrayWithLength:((IOSObjectArray *) nil_chk(ids))->size_];
    for (jint i = 0; i < ids->size_; i++) {
      *IOSIntArray_GetRef(ids2, i) = [((JavaLangInteger *) nil_chk(IOSObjectArray_Get(ids, i))) intValue];
    }
    [((AMValueModel *) nil_chk([((ImActorModelViewmodelGroupTypingVM *) nil_chk([((ImActorModelModulesTyping *) nil_chk([((ImActorModelModulesModules *) nil_chk([self modules])) getTypingModule])) getGroupTypingWithInt:gid])) getActive])) changeWithId:ids2];
  }
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor)

@implementation ImActorModelModulesTypingTypingActor_StopTyping

- (instancetype)initWithInt:(jint)uid {
  if (self = [super init]) {
    self->uid_ = uid;
  }
  return self;
}

- (jint)getUid {
  return uid_;
}

- (jboolean)isEqual:(id)o {
  if (self == o) return YES;
  if (o == nil || [self getClass] != [o getClass]) return NO;
  ImActorModelModulesTypingTypingActor_StopTyping *that = (ImActorModelModulesTypingTypingActor_StopTyping *) check_class_cast(o, [ImActorModelModulesTypingTypingActor_StopTyping class]);
  if (uid_ != ((ImActorModelModulesTypingTypingActor_StopTyping *) nil_chk(that))->uid_) return NO;
  return YES;
}

- (NSUInteger)hash {
  return uid_;
}

- (void)copyAllFieldsTo:(ImActorModelModulesTypingTypingActor_StopTyping *)other {
  [super copyAllFieldsTo:other];
  other->uid_ = uid_;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor_StopTyping)

@implementation ImActorModelModulesTypingTypingActor_StopGroupTyping

- (instancetype)initWithInt:(jint)gid
                    withInt:(jint)uid {
  if (self = [super init]) {
    self->gid_ = gid;
    self->uid_ = uid;
  }
  return self;
}

- (jint)getGid {
  return gid_;
}

- (jint)getUid {
  return uid_;
}

- (jboolean)isEqual:(id)o {
  if (self == o) return YES;
  if (o == nil || [self getClass] != [o getClass]) return NO;
  ImActorModelModulesTypingTypingActor_StopGroupTyping *that = (ImActorModelModulesTypingTypingActor_StopGroupTyping *) check_class_cast(o, [ImActorModelModulesTypingTypingActor_StopGroupTyping class]);
  if (gid_ != ((ImActorModelModulesTypingTypingActor_StopGroupTyping *) nil_chk(that))->gid_) return NO;
  if (uid_ != that->uid_) return NO;
  return YES;
}

- (NSUInteger)hash {
  jint result = gid_;
  result = 31 * result + uid_;
  return result;
}

- (void)copyAllFieldsTo:(ImActorModelModulesTypingTypingActor_StopGroupTyping *)other {
  [super copyAllFieldsTo:other];
  other->gid_ = gid_;
  other->uid_ = uid_;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor_StopGroupTyping)

@implementation ImActorModelModulesTypingTypingActor_PrivateTyping

- (instancetype)initWithInt:(jint)uid
                    withInt:(jint)type {
  if (self = [super init]) {
    self->uid_ = uid;
    self->type_ = type;
  }
  return self;
}

- (jint)getUid {
  return uid_;
}

- (jint)getType {
  return type_;
}

- (jboolean)isEqual:(id)o {
  if (self == o) return YES;
  if (o == nil || [self getClass] != [o getClass]) return NO;
  ImActorModelModulesTypingTypingActor_PrivateTyping *that = (ImActorModelModulesTypingTypingActor_PrivateTyping *) check_class_cast(o, [ImActorModelModulesTypingTypingActor_PrivateTyping class]);
  if (type_ != ((ImActorModelModulesTypingTypingActor_PrivateTyping *) nil_chk(that))->type_) return NO;
  if (uid_ != that->uid_) return NO;
  return YES;
}

- (NSUInteger)hash {
  jint result = uid_;
  result = 31 * result + type_;
  return result;
}

- (void)copyAllFieldsTo:(ImActorModelModulesTypingTypingActor_PrivateTyping *)other {
  [super copyAllFieldsTo:other];
  other->uid_ = uid_;
  other->type_ = type_;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor_PrivateTyping)

@implementation ImActorModelModulesTypingTypingActor_GroupTyping

- (instancetype)initWithInt:(jint)gid
                    withInt:(jint)uid
                    withInt:(jint)type {
  if (self = [super init]) {
    self->gid_ = gid;
    self->uid_ = uid;
    self->type_ = type;
  }
  return self;
}

- (jint)getGid {
  return gid_;
}

- (jint)getUid {
  return uid_;
}

- (jint)getType {
  return type_;
}

- (jboolean)isEqual:(id)o {
  if (self == o) return YES;
  if (o == nil || [self getClass] != [o getClass]) return NO;
  ImActorModelModulesTypingTypingActor_GroupTyping *that = (ImActorModelModulesTypingTypingActor_GroupTyping *) check_class_cast(o, [ImActorModelModulesTypingTypingActor_GroupTyping class]);
  if (gid_ != ((ImActorModelModulesTypingTypingActor_GroupTyping *) nil_chk(that))->gid_) return NO;
  if (type_ != that->type_) return NO;
  if (uid_ != that->uid_) return NO;
  return YES;
}

- (NSUInteger)hash {
  jint result = gid_;
  result = 31 * result + uid_;
  result = 31 * result + type_;
  return result;
}

- (void)copyAllFieldsTo:(ImActorModelModulesTypingTypingActor_GroupTyping *)other {
  [super copyAllFieldsTo:other];
  other->gid_ = gid_;
  other->uid_ = uid_;
  other->type_ = type_;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor_GroupTyping)

@implementation ImActorModelModulesTypingTypingActor_$1

- (ImActorModelModulesTypingTypingActor *)create {
  return [[ImActorModelModulesTypingTypingActor alloc] initWithImActorModelModulesModules:val$messenger_];
}

- (instancetype)initWithImActorModelModulesModules:(ImActorModelModulesModules *)capture$0 {
  val$messenger_ = capture$0;
  return [super init];
}

- (void)copyAllFieldsTo:(ImActorModelModulesTypingTypingActor_$1 *)other {
  [super copyAllFieldsTo:other];
  other->val$messenger_ = val$messenger_;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor_$1)

@implementation ImActorModelModulesTypingTypingActor_$2

- (DKMailbox *)createMailboxWithDKMailboxesQueue:(DKMailboxesQueue *)queue {
  return [[ImActorModelModulesTypingTypingActor_$2_$1 alloc] initWithDKMailboxesQueue:queue];
}

- (instancetype)init {
  return [super init];
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor_$2)

@implementation ImActorModelModulesTypingTypingActor_$2_$1

- (jboolean)isEqualEnvelopeWithDKEnvelope:(DKEnvelope *)a
                           withDKEnvelope:(DKEnvelope *)b {
  if ([nil_chk([((DKEnvelope *) nil_chk(a)) getMessage]) isEqual:[((DKEnvelope *) nil_chk(b)) getMessage]]) {
    return YES;
  }
  return [super isEqualEnvelopeWithDKEnvelope:a withDKEnvelope:b];
}

- (instancetype)initWithDKMailboxesQueue:(DKMailboxesQueue *)arg$0 {
  return [super initWithDKMailboxesQueue:arg$0];
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ImActorModelModulesTypingTypingActor_$2_$1)
