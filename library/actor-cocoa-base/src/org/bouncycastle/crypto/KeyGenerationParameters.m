//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/org/bouncycastle/crypto/KeyGenerationParameters.java
//

#line 1 "/Users/ex3ndr/Develop/actor-model/library/actor-cocoa-base/build/java/org/bouncycastle/crypto/KeyGenerationParameters.java"

#include "J2ObjC_source.h"
#include "im/actor/model/crypto/bouncycastle/RandomProvider.h"
#include "org/bouncycastle/crypto/KeyGenerationParameters.h"

@interface OrgBouncycastleCryptoKeyGenerationParameters () {
 @public
  id<BCRandomProvider> random_;
  jint strength_;
}
@end

J2OBJC_FIELD_SETTER(OrgBouncycastleCryptoKeyGenerationParameters, random_, id<BCRandomProvider>)


#line 8
@implementation OrgBouncycastleCryptoKeyGenerationParameters


#line 19
- (instancetype)initWithBCRandomProvider:(id<BCRandomProvider>)random
                                 withInt:(jint)strength {
  if (self = [super init]) {
    
#line 22
    self->random_ = random;
    
#line 23
    self->strength_ = strength;
  }
  return self;
}

- (id<BCRandomProvider>)getRandom {
  
#line 33
  return random_;
}


#line 41
- (jint)getStrength {
  
#line 42
  return strength_;
}

- (void)copyAllFieldsTo:(OrgBouncycastleCryptoKeyGenerationParameters *)other {
  [super copyAllFieldsTo:other];
  other->random_ = random_;
  other->strength_ = strength_;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(OrgBouncycastleCryptoKeyGenerationParameters)