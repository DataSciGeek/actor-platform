//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-platform/actor-apps/core-async/src/main/java/im/actor/model/mvvm/ChangeDescription.java
//

#ifndef _AMChangeDescription_H_
#define _AMChangeDescription_H_

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

@class AMChangeDescription_OperationTypeEnum;
@class JavaUtilArrayList;
@protocol JavaUtilList;

@interface AMChangeDescription : NSObject

#pragma mark Public

+ (AMChangeDescription *)addWithInt:(jint)index
                   withJavaUtilList:(id<JavaUtilList>)items;

+ (AMChangeDescription *)addWithInt:(jint)index
                             withId:(id)item;

- (AMChangeDescription *)cast;

- (jint)getDestIndex;

- (jint)getIndex;

- (JavaUtilArrayList *)getItems;

- (jint)getLength;

- (AMChangeDescription_OperationTypeEnum *)getOperationType;

+ (AMChangeDescription *)mergeAddWithAMChangeDescription:(AMChangeDescription *)a
                                 withAMChangeDescription:(AMChangeDescription *)b;

+ (AMChangeDescription *)moveWithInt:(jint)index
                             withInt:(jint)destIndex;

+ (AMChangeDescription *)removeWithInt:(jint)index;

+ (AMChangeDescription *)removeWithInt:(jint)index
                               withInt:(jint)length;

+ (AMChangeDescription *)updateWithInt:(jint)index
                      withJavaUtilList:(id<JavaUtilList>)items;

+ (AMChangeDescription *)updateWithInt:(jint)index
                                withId:(id)item;

@end

J2OBJC_EMPTY_STATIC_INIT(AMChangeDescription)

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_mergeAddWithAMChangeDescription_withAMChangeDescription_(AMChangeDescription *a, AMChangeDescription *b);

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_addWithInt_withId_(jint index, id item);

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_addWithInt_withJavaUtilList_(jint index, id<JavaUtilList> items);

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_removeWithInt_(jint index);

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_removeWithInt_withInt_(jint index, jint length);

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_updateWithInt_withId_(jint index, id item);

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_updateWithInt_withJavaUtilList_(jint index, id<JavaUtilList> items);

FOUNDATION_EXPORT AMChangeDescription *AMChangeDescription_moveWithInt_withInt_(jint index, jint destIndex);

J2OBJC_TYPE_LITERAL_HEADER(AMChangeDescription)

typedef AMChangeDescription ImActorModelMvvmChangeDescription;

typedef NS_ENUM(NSUInteger, AMChangeDescription_OperationType) {
  AMChangeDescription_OperationType_ADD = 0,
  AMChangeDescription_OperationType_REMOVE = 1,
  AMChangeDescription_OperationType_UPDATE = 2,
  AMChangeDescription_OperationType_MOVE = 3,
};

@interface AMChangeDescription_OperationTypeEnum : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *AMChangeDescription_OperationTypeEnum_values();

+ (AMChangeDescription_OperationTypeEnum *)valueOfWithNSString:(NSString *)name;
FOUNDATION_EXPORT AMChangeDescription_OperationTypeEnum *AMChangeDescription_OperationTypeEnum_valueOfWithNSString_(NSString *name);

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(AMChangeDescription_OperationTypeEnum)

FOUNDATION_EXPORT AMChangeDescription_OperationTypeEnum *AMChangeDescription_OperationTypeEnum_values_[];

#define AMChangeDescription_OperationTypeEnum_ADD AMChangeDescription_OperationTypeEnum_values_[AMChangeDescription_OperationType_ADD]
J2OBJC_ENUM_CONSTANT_GETTER(AMChangeDescription_OperationTypeEnum, ADD)

#define AMChangeDescription_OperationTypeEnum_REMOVE AMChangeDescription_OperationTypeEnum_values_[AMChangeDescription_OperationType_REMOVE]
J2OBJC_ENUM_CONSTANT_GETTER(AMChangeDescription_OperationTypeEnum, REMOVE)

#define AMChangeDescription_OperationTypeEnum_UPDATE AMChangeDescription_OperationTypeEnum_values_[AMChangeDescription_OperationType_UPDATE]
J2OBJC_ENUM_CONSTANT_GETTER(AMChangeDescription_OperationTypeEnum, UPDATE)

#define AMChangeDescription_OperationTypeEnum_MOVE AMChangeDescription_OperationTypeEnum_values_[AMChangeDescription_OperationType_MOVE]
J2OBJC_ENUM_CONSTANT_GETTER(AMChangeDescription_OperationTypeEnum, MOVE)

J2OBJC_TYPE_LITERAL_HEADER(AMChangeDescription_OperationTypeEnum)

#endif // _AMChangeDescription_H_
