//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIUserAdjustableSettings_h
#define TRIUserAdjustableSettings_h
@import Foundation;

@interface TRIUserAdjustableSettings : NSObject
/* class methods */
+ (void)updateExperimentOptOutStateWithServerContext:(id)context;
+ (BOOL)getExperimentOptOut:(id)out;
+ (void)_deactivateAllActiveExperimentsWithServerContext:(id)context;
+ (unsigned char)_optOutSoftwareUpdatePreferenceForAnyUser;
@end

#endif /* TRIUserAdjustableSettings_h */
