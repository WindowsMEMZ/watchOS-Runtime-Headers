//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INAccountTypeResolutionResult_h
#define INAccountTypeResolutionResult_h
@import Foundation;

#include "INIntentResolutionResult.h"

@interface INAccountTypeResolutionResult : INIntentResolutionResult
/* class methods */
+ (id)successWithResolvedAccountType:(long long)type;
+ (id)successWithResolvedValue:(long long)value;
+ (id)confirmationRequiredWithAccountTypeToConfirm:(long long)confirm;
+ (id)confirmationRequiredWithValueToConfirm:(long long)confirm;

/* instance methods */
- (id)_intentSlotValueForObject:(id)object slotDescription:(id)description;
- (id)_vocabularyValueForObject:(id)object slotDescription:(id)description;
- (void)transformResolutionResultForIntent:(id)intent intentSlotDescription:(id)description withOptionsProvider:(id)provider completion:(id /* block */)completion;
@end

#endif /* INAccountTypeResolutionResult_h */
