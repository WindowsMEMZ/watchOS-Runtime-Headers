//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIItemSettings_h
#define STUIItemSettings_h
@import Foundation;

#include "PTSettings.h"

@interface STUIItemSettings : PTSettings

@property (nonatomic) BOOL batteryPercentageAlwaysEnabled;
@property (nonatomic) BOOL batteryCondensedPercentageForceEnabled;
@property (nonatomic) BOOL showBothDualCarrierNames;
@property (nonatomic) BOOL secondarySIMUnderBaseline;
@property (nonatomic) BOOL showRingerWhenSilenced;
@property (nonatomic) BOOL showRingerOnAODLockScreen;
@property (nonatomic) BOOL showRingerOffLockScreen;

/* class methods */
+ (id)settingsControllerModule;

/* instance methods */
- (void)setDefaultValues;
@end

#endif /* STUIItemSettings_h */
