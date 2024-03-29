//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.9.1.0.0
//
#ifndef SCDAPreferences_h
#define SCDAPreferences_h
@import Foundation;

#include "SCDAAssistantPreferences.h"

@class AFInstanceContext;

@interface SCDAPreferences : NSObject {
  /* instance variables */
  AFInstanceContext *_instanceContext;
  SCDAAssistantPreferences *_pref;
}

/* instance methods */
- (id)initWithDeviceInstanceContext:(id)context preferences:(id)preferences;
- (void)setDeviceGroup:(unsigned char)group completion:(id /* block */)completion;
- (unsigned char)deviceGroup;
- (void)setDeviceClass:(unsigned char)class;
- (unsigned char)deviceClass;
- (void)setIgnoreAdjustedBoost:(BOOL)boost;
- (BOOL)ignoreAdjustedBoost;
- (void)setIgnorePlatformBias:(BOOL)bias;
- (BOOL)ignorePlatformBias;
- (void)setConstantGoodnessScore:(int)score;
- (int)constantGoodnessScore;
- (BOOL)myriadServerHasProvisioned;
- (void)setDeviceAdjust:(float)adjust;
- (float)deviceAdjust;
- (void)setDeviceDelay:(double)delay;
- (double)deviceDelay;
- (void)setTestDeviceDelay:(double)delay;
- (double)testDeviceDelay;
- (void)setDeviceTrumpDelay:(double)delay;
- (double)deviceTrumpDelay;
- (void)enableCoordination:(BOOL)coordination;
- (BOOL)coordinationEnabled;
- (BOOL)coordinationEnabledForAccessoryLogging;
- (BOOL)BLEActivityEnabled;
- (void)setVoiceTriggerEndtimeDelayThreshold:(double)threshold;
- (double)voiceTriggerEndtimeDelayThreshold;
- (void)setDeviceSlowDown:(double)down;
- (double)deviceSlowDown;
- (void)setMaxNoOperationDelay:(double)delay;
- (double)maxNoOperationDelay;
@end

#endif /* SCDAPreferences_h */
