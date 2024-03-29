//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFActionSetValueSource_h
#define HFActionSetValueSource_h
@import Foundation;

#include "HFCharacteristicValueSource-Protocol.h"
#include "HFLightProfileValueSource-Protocol.h"
#include "HFMediaValueSource-Protocol.h"

@class HMActionSet, NSString;
@protocol HFActionSetValueSourceDelegate, HFCharacteristicOperationContextProviding, HFItemBuilder<HFActionSetBuilderProtocol;

@interface HFActionSetValueSource : NSObject<HFLightProfileValueSource, HFCharacteristicValueSource, HFMediaValueSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (retain, nonatomic) HMActionSet *actionSet;
@property (weak, nonatomic) NSObject<HFActionSetValueSourceDelegate> *delegate;
@property (readonly, nonatomic) NSObject<HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)na_identity;

/* instance methods */
- (BOOL)isNaturalLightingSupportedForProfile:(id)profile;
- (BOOL)isNaturalLightingEnabledForProfile:(id)profile;
- (id)writeNaturalLightEnabledState:(BOOL)state forProfile:(id)profile;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)brightness lightProfile:(id)profile completion:(id /* block */)completion;
- (id)_existingActionBuilderForLightProfile:(id)profile;
- (id)initWithActionSetBuilder:(id)builder;
- (id)initWithActionSet:(id)set;
- (id)readValuesForCharacteristics:(id)characteristics;
- (id)readValuesForCharacteristicTypes:(id)types inServices:(id)services;
- (id)writeValuesForCharacteristics:(id)characteristics;
- (id)cachedValueForCharacteristic:(id)characteristic;
- (void)beginTransactionWithReason:(id)reason readPolicy:(id)policy logger:(id)logger;
- (void)commitTransactionWithReason:(id)reason;
- (void)mediaValueUpdated:(id)updated playbackState:(long long)state playbackArchive:(id)archive;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)id;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)reason notifyDelegates:(BOOL)delegates;
- (BOOL)hasPendingWritesForRouteID:(id)id;
- (long long)lastPlaybackStateForProfileForRouteID:(id)id;
- (id)mediaProfileContainerForRouteID:(id)id;
- (id)writePlaybackState:(long long)state playbackArchive:(id)archive forRouteID:(id)id;
- (id)_existingActionBuilderForCharacteristic:(id)characteristic;
- (id)_existingActionBuilderForMediaProfile:(id)profile;
- (id)_actionForCharacteristic:(id)characteristic;
- (id)_targetValueForCharacteristic:(id)characteristic;
- (BOOL)_isCurrentStateCharacteristic:(id)characteristic;
- (id)_valueForCurrentStateCharacteristic:(id)characteristic;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFActionSetValueSource_h */
