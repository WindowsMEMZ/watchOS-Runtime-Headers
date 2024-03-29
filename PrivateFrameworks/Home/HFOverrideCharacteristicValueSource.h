//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFOverrideCharacteristicValueSource_h
#define HFOverrideCharacteristicValueSource_h
@import Foundation;

#include "HFCharacteristicValueSource-Protocol.h"
#include "HFLightProfileValueSource-Protocol.h"
#include "HFOverrideCharacteristicValueProvider-Protocol.h"

@class NSString;
@protocol HFCharacteristicOperationContextProviding;

@interface HFOverrideCharacteristicValueSource : NSObject<HFLightProfileValueSource, HFCharacteristicValueSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *originalValueSource;
@property (weak, nonatomic) NSObject<HFOverrideCharacteristicValueProvider> *overrideValueProvider;
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
- (id)initWithOriginalValueSource:(id)source overrideValueProvider:(id)provider;
- (id)readValuesForCharacteristics:(id)characteristics;
- (id)readValuesForCharacteristicTypes:(id)types inServices:(id)services;
- (id)writeValuesForCharacteristics:(id)characteristics;
- (id)cachedValueForCharacteristic:(id)characteristic;
- (id)cachedErrorForWriteToCharacteristic:(id)characteristic;
- (void)beginTransactionWithReason:(id)reason readPolicy:(id)policy logger:(id)logger;
- (void)commitTransactionWithReason:(id)reason;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFOverrideCharacteristicValueSource_h */
