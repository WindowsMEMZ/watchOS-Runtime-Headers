//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCharacteristicConditionItem_h
#define HFCharacteristicConditionItem_h
@import Foundation;

#include "HFItem.h"
#include "HFCharacteristicCondition.h"
#include "HFConditionItem-Protocol.h"

@class NSString;

@interface HFCharacteristicConditionItem : HFItem<HFConditionItem>

@property (readonly, nonatomic) HFCharacteristicCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCondition:(id)condition;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFCharacteristicConditionItem_h */
