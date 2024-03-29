//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKAnyPredicateValidator_h
#define CKAnyPredicateValidator_h
@import Foundation;

#include "CKPredicateValidatorInstance.h"

@class NSArray;

@interface CKAnyPredicateValidator : CKPredicateValidatorInstance {
  /* instance variables */
  NSArray *_validators;
}

/* instance methods */
- (BOOL)validate:(id)validate error:(id *)error;
- (id)CKPropertiesDescription;
@end

#endif /* CKAnyPredicateValidator_h */
