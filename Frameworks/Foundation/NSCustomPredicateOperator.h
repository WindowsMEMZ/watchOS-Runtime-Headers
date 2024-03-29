//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSCustomPredicateOperator_h
#define NSCustomPredicateOperator_h
@import Foundation;

#include ".h"

@interface NSCustomPredicateOperator :  {
  /* instance variables */
  SEL _selector;
  struct _operatorFlags { unsigned int x :1 _usesKVC; unsigned int x :1 _validatedSelector; unsigned int x :1 _validatedKeys; unsigned int x :29 _reservedOperatorFlags; } _operatorFlags;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCustomSelector:(SEL)selector modifier:(unsigned long long)modifier;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)operatorType;
- (SEL)selector;
- (BOOL)isEqual:(id)equal;
- (id)symbol;
- (BOOL)performPrimitiveOperationUsingObject:(id)object andObject:(id)object;
@end

#endif /* NSCustomPredicateOperator_h */
