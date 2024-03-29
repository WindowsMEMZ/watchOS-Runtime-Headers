//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFMediaControlItem_h
#define HFMediaControlItem_h
@import Foundation;

#include "HFControlItem.h"
#include "HFMediaActionSetting.h"
#include "HFMediaProfileContainer-Protocol.h"
#include "HFMediaValueSource-Protocol.h"
#include "HFToggleableControlItem-Protocol.h"

@class NSString;

@interface HFMediaControlItem : HFControlItem<HFToggleableControlItem>

@property (copy, nonatomic) NSString *mediaRoutingIdentifier;
@property (copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSObject<HFMediaValueSource> *mediaValueSource;
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer;
@property (readonly, nonatomic) long long mediaAccessoryItemType;
@property (retain, nonatomic) HFMediaActionSetting *mediaActionSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)valueClass;

/* instance methods */
- (id)initWithValueSource:(id)source mediaProfileContainer:(id)container mediaAccessoryItemType:(long long)type displayResults:(id)results;
- (id)initWithValueSource:(id)source characteristicOptions:(id)options displayResults:(id)results;
- (id)initWithMediaRoutingIdentifier:(id)identifier deviceName:(id)name mediaAccessoryItemType:(long long)type;
- (id)copyWithCharacteristicOptions:(id)options valueSource:(id)source;
- (id)readValueAndPopulateStandardResults;
- (id)characteristicValuesForValue:(id)value;
- (id)valueForCharacteristicValues:(id)values;
- (id)normalizedValueForValue:(id)value;
- (id)writeValue:(id)value;
- (long long)toggledSceneStateFromPrimaryState:(long long)state;
- (long long)mapToHMMediaPlaybackState:(long long)state;
- (id)writePrimaryState:(long long)state;
- (id)toggleValue;
- (long long)sortPriority;
@end

#endif /* HFMediaControlItem_h */
