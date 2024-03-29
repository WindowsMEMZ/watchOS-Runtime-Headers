//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSiriPreferences_h
#define CSSiriPreferences_h
@import Foundation;

@class AFInstanceContext;
@protocol OS_dispatch_queue;

@interface CSSiriPreferences : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  AFInstanceContext *_instanceContext;
}

/* class methods */
+ (id)sharedPreferences;

/* instance methods */
- (id)initWithInstanceContext:(id)context;
- (id)init;
- (id)overrideAudioSessionActiveDelay;
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
- (id)serverAudioSessionActivationDelay;
- (unsigned long long)internalUserClassification;
@end

#endif /* CSSiriPreferences_h */
