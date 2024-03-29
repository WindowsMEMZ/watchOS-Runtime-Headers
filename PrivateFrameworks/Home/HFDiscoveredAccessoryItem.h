//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDiscoveredAccessoryItem_h
#define HFDiscoveredAccessoryItem_h
@import Foundation;

#include "HFItem.h"
#include "HFCharacteristicValueSource-Protocol.h"
#include "HFDiscoveredAccessory.h"
#include "HFHomeKitObject-Protocol.h"
#include "HFServiceLikeItem-Protocol.h"

@class HMHome, NSSet, NSString;

@interface HFDiscoveredAccessoryItem : HFItem<HFServiceLikeItem>

@property (readonly, nonatomic) HFDiscoveredAccessory *discoveredAccessory;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;

/* instance methods */
- (id)init;
- (id)initWithDiscoveredAccessory:(id)accessory;
- (id)initWithDiscoveredAccessory:(id)accessory valueSource:(id)source;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)namingComponentForHomeKitObject;
- (id)copyWithValueSource:(id)source;
- (id)accessories;
- (id)_subclass_updateWithOptions:(id)options;
@end

#endif /* HFDiscoveredAccessoryItem_h */
