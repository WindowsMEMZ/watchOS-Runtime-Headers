//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKComparisonPredicateValidator_h
#define CKComparisonPredicateValidator_h
@import Foundation;

#include "CKPredicateValidatorInstance.h"
#include "CKObjectValidating-Protocol.h"

@interface CKComparisonPredicateValidator : CKPredicateValidatorInstance

@property (retain, nonatomic) NSObject<CKObjectValidating> *modifierValidator;
@property (retain, nonatomic) NSObject<CKObjectValidating> *leftExpressionValidator;
@property (retain, nonatomic) NSObject<CKObjectValidating> *operatorValidator;
@property (retain, nonatomic) NSObject<CKObjectValidating> *optionsValidator;
@property (retain, nonatomic) NSObject<CKObjectValidating> *rightExpressionValidator;

/* instance methods */
- (BOOL)validate:(id)validate error:(id *)error;
- (id)CKPropertiesDescription;
@end

#endif /* CKComparisonPredicateValidator_h */
