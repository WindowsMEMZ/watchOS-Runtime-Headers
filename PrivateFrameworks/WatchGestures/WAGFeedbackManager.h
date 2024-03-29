//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGFeedbackManager_h
#define WAGFeedbackManager_h
@import Foundation;

#include "WAGGesturePreventionAssertion.h"

@protocol OS_dispatch_queue;

@interface WAGFeedbackManager : NSObject {
  /* instance variables */
  float _majorDetentIntensity;
  float _minorDetentIntensity;
  float _tempKnobDynamicDetentValue;
  NSObject<OS_dispatch_queue> *_hapticQueue;
  WAGGesturePreventionAssertion *_gesturePreventionAssertion;
  BOOL _isActive;
}

@property (nonatomic) BOOL autoShutdownEnabled;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initPrivate;
- (void)start;
- (void)startForExternalClient;
- (void)stop;
- (void)prepareFeedbacks:(id)feedbacks;
- (void)playFeedbackType:(unsigned long long)type;
- (void)playFeedbackType:(unsigned long long)type playbackStateChangedHandler:(id /* block */)handler;
- (void)_queue_prepareHapticsWithTypes:(id)types;
- (void)_queue_playHapticType:(unsigned long long)type playbackStateChangedHandler:(id /* block */)handler;
- (id)_ahapFileForFeedbackType:(unsigned long long)type;
- (id)_reformatAhapFileForFeedbackType:(unsigned long long)type data:(id)data;
@end

#endif /* WAGFeedbackManager_h */
