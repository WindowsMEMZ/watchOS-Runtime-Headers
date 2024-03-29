//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFPresenceCondition_h
#define HFPresenceCondition_h
@import Foundation;

#include "HFCondition.h"

@class HMPresenceEvent;

@interface HFPresenceCondition : HFCondition

@property (retain, nonatomic) HMPresenceEvent *presenceEvent;

/* instance methods */
- (id)hf_naturalLanguageSummaryWithOptions:(id)options;
- (id)initWithPredicate:(id)predicate;
- (id)initWithPresenceEvent:(id)event;
@end

#endif /* HFPresenceCondition_h */
