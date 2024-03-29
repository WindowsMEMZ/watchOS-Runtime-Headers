//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraSmartDetectionCondition_h
#define HFCameraSmartDetectionCondition_h
@import Foundation;

#include "HFCondition.h"

@interface HFCameraSmartDetectionCondition : HFCondition
/* class methods */
+ (BOOL)_predicateIsValidForSignificantEventKeyPath:(id)path;
+ (BOOL)_predicateIsValidForPersonFamiliarityKeyPath:(id)path;

/* instance methods */
- (id)hf_naturalLanguageSummaryWithOptions:(id)options;
- (id)initWithPredicate:(id)predicate;
@end

#endif /* HFCameraSmartDetectionCondition_h */
