//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSBlockValidation_h
#define TPSBlockValidation_h
@import Foundation;

#include "TPSTargetingValidation.h"

@interface TPSBlockValidation : TPSTargetingValidation

@property (copy, nonatomic) id /* block */ validationBlock;

/* class methods */
+ (id)blockValidationWithBlock:(id /* block */)block;

/* instance methods */
- (id)initWithValidationBlock:(id /* block */)block;
- (void)validateWithCompletion:(id /* block */)completion;
@end

#endif /* TPSBlockValidation_h */
