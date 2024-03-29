//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFActionSetSuggestionItem_h
#define HFActionSetSuggestionItem_h
@import Foundation;

#include "HFItem.h"
#include "HFHomeKitItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"

@class HMActionSet, HMHome, NSString;
@protocol HFItem<HFServiceLikeItem;

@interface HFActionSetSuggestionItem : HFItem<HFHomeKitItemProtocol>

@property (nonatomic) BOOL hasEverHadValidSuggestion;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMActionSet *actionSet;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic) BOOL includeExistingActionSets;
@property (nonatomic) BOOL persistAddedSuggestions;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithHome:(id)home actionSet:(id)set;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFActionSetSuggestionItem_h */
