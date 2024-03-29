//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFActionSetItem_h
#define HFActionSetItem_h
@import Foundation;

#include "HFItem.h"
#include "HFCharacteristicValueSource-Protocol.h"
#include "HFHomeKitItemProtocol-Protocol.h"
#include "HFHomeKitObject-Protocol.h"
#include "NSCopying-Protocol.h"

@class HMActionSet, NSString;
@protocol HFItem<HFServiceLikeItem;

@interface HFActionSetItem : HFItem<HFHomeKitItemProtocol, NSCopying>

@property (readonly, nonatomic) HMActionSet *actionSet;
@property (readonly, nonatomic) unsigned long long actionSetItemStyle;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_value:(id)_value isApproximatelyEqualToValue:(id)value forMinimumValue:(id)value maximumValue:(id)value;
+ (id)_primaryStateForActionSet:(id)set valueSource:(id)source logger:(id)logger fastInitialUpdate:(BOOL)update;

/* instance methods */
- (id)initWithActionSet:(id)set actionSetItemStyle:(unsigned long long)style valueSource:(id)source;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)state;
- (id)_subclass_updateWithOptions:(id)options;
- (id)_mostCommonRoomForActionSet:(id)set;
- (id)rooms;
- (id)executeActionSet;
- (id)turnOffActionSet;
- (id)actionSetOperation:(id)operation errorFromError:(id)error;
@end

#endif /* HFActionSetItem_h */
