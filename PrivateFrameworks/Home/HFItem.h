//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFItem_h
#define HFItem_h
@import Foundation;

#include "HFItemManager.h"

@class NAFuture, NSDictionary;

@interface HFItem : NSObject

@property (weak, nonatomic) NAFuture *cancellableInFlightUpdateFuture;
@property (nonatomic) unsigned long long loadingState;
@property (weak, nonatomic) HFItemManager *_debug_owningItemManager;
@property (nonatomic) BOOL _debug_isChildItem;
@property (retain, nonatomic) NSDictionary *latestResults;

/* instance methods */
- (id)updateWithOptions:(id)options;
- (void)copyLatestResultsFromItem:(id)item;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)state;
- (id)_subclass_updateWithOptions:(id)options;
- (BOOL)resultsContainRequiredProperties:(id)properties;
- (id)debugDescription;
- (id)description;
- (id)_finalOutcomeForSubclassOutcome:(id)outcome previousResults:(id)results updateOptions:(id)options;
@end

#endif /* HFItem_h */
