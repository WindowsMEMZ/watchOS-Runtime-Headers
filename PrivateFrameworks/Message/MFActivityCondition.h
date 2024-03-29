//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFActivityCondition_h
#define MFActivityCondition_h
@import Foundation;

#include "EFScheduler-Protocol.h"
#include "MFActivityCondition-Protocol.h"
#include "MFActivityConditionBuilder-Protocol.h"

@class EFCancelationToken, EFObservable, NSString;

@interface MFActivityCondition : NSObject<MFActivityConditionBuilder, MFActivityCondition>

@property (nonatomic) BOOL requireExternalPower;
@property (nonatomic) BOOL requireWiFi;
@property (nonatomic) BOOL requireScreenLocked;
@property (nonatomic) BOOL requireLowPowerModeDisabled;
@property (nonatomic) float minBatteryLevel;
@property (nonatomic) long long maxThermalPressureLevel;
@property (nonatomic) BOOL satisfied;
@property (retain, nonatomic) EFCancelationToken *cancellationToken;
@property (retain, nonatomic) NSObject<EFScheduler> *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) EFObservable *conditionsObservable;

/* class methods */
+ (id)alwaysSatisfiedCondition;

/* instance methods */
- (void)dealloc;
- (id)init;
- (id)initWithBuilder:(id /* block */)builder;
- (BOOL)isSatisfied;
- (BOOL)_isValidConfiguration;
@end

#endif /* MFActivityCondition_h */
