//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-platform/actor-apps/core/src/main/java/im/actor/model/api/Member.java
//


#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "im/actor/model/api/Member.h"
#include "im/actor/model/droidkit/bser/BserObject.h"
#include "im/actor/model/droidkit/bser/BserValues.h"
#include "im/actor/model/droidkit/bser/BserWriter.h"
#include "im/actor/model/droidkit/bser/util/SparseArray.h"
#include "java/io/IOException.h"

@interface APMember () {
 @public
  jint uid_;
  jint inviterUid_;
  jlong date_;
}

@end

@implementation APMember

- (instancetype)initWithInt:(jint)uid
                    withInt:(jint)inviterUid
                   withLong:(jlong)date {
  APMember_initWithInt_withInt_withLong_(self, uid, inviterUid, date);
  return self;
}

- (instancetype)init {
  APMember_init(self);
  return self;
}

- (jint)getUid {
  return self->uid_;
}

- (jint)getInviterUid {
  return self->inviterUid_;
}

- (jlong)getDate {
  return self->date_;
}

- (void)parseWithBSBserValues:(BSBserValues *)values {
  self->uid_ = [((BSBserValues *) nil_chk(values)) getIntWithInt:1];
  self->inviterUid_ = [values getIntWithInt:2];
  self->date_ = [values getLongWithInt:3];
  if ([values hasRemaining]) {
    [self setUnmappedObjectsWithImActorModelDroidkitBserUtilSparseArray:[values buildRemaining]];
  }
}

- (void)serializeWithBSBserWriter:(BSBserWriter *)writer {
  [((BSBserWriter *) nil_chk(writer)) writeIntWithInt:1 withInt:self->uid_];
  [writer writeIntWithInt:2 withInt:self->inviterUid_];
  [writer writeLongWithInt:3 withLong:self->date_];
  if ([self getUnmappedObjects] != nil) {
    ImActorModelDroidkitBserUtilSparseArray *unmapped = [self getUnmappedObjects];
    for (jint i = 0; i < [((ImActorModelDroidkitBserUtilSparseArray *) nil_chk(unmapped)) size]; i++) {
      jint key = [unmapped keyAtWithInt:i];
      [writer writeUnmappedWithInt:key withId:[unmapped getWithInt:key]];
    }
  }
}

- (NSString *)description {
  NSString *res = @"struct Member{";
  res = JreStrcat("$$", res, JreStrcat("$I", @"uid=", self->uid_));
  res = JreStrcat("$$", res, JreStrcat("$I", @", inviterUid=", self->inviterUid_));
  res = JreStrcat("$$", res, JreStrcat("$J", @", date=", self->date_));
  res = JreStrcat("$C", res, '}');
  return res;
}

@end

void APMember_initWithInt_withInt_withLong_(APMember *self, jint uid, jint inviterUid, jlong date) {
  (void) BSBserObject_init(self);
  self->uid_ = uid;
  self->inviterUid_ = inviterUid;
  self->date_ = date;
}

APMember *new_APMember_initWithInt_withInt_withLong_(jint uid, jint inviterUid, jlong date) {
  APMember *self = [APMember alloc];
  APMember_initWithInt_withInt_withLong_(self, uid, inviterUid, date);
  return self;
}

void APMember_init(APMember *self) {
  (void) BSBserObject_init(self);
}

APMember *new_APMember_init() {
  APMember *self = [APMember alloc];
  APMember_init(self);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(APMember)