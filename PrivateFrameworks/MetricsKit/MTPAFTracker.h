//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTPAFTracker_h
#define MTPAFTracker_h
@import Foundation;

#include "MTPAFActivity.h"

@class NSArray;

@interface MTPAFTracker : NSObject

@property (retain, nonatomic) NSArray *videoTrackers;
@property (retain, nonatomic) NSArray *playlistBindings;
@property (retain, nonatomic) MTPAFActivity *currentActivity;

/* instance methods */
- (void)trackPlaylist:(id)playlist using:(id)using;
- (void)playStartedWithPlaybackRate:(float)rate atSeconds:(double)seconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)playStartedWithPlaybackRate:(float)rate atMilliseconds:(unsigned long long)milliseconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)playStartedAtSeconds:(double)seconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)playStartedAtMilliseconds:(unsigned long long)milliseconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)playStoppedAtSeconds:(double)seconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)playStoppedAtMilliseconds:(unsigned long long)milliseconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)seekStartedAtSeconds:(double)seconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)seekStartedAtMilliseconds:(unsigned long long)milliseconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)seekStoppedAtSeconds:(double)seconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)seekStoppedAtMilliseconds:(unsigned long long)milliseconds type:(id)type reason:(id)reason eventData:(id)data;
- (void)synchronizeAtSeconds:(double)seconds;
- (void)synchronizeAtMilliseconds:(unsigned long long)milliseconds;
- (void)updateEventData:(id)data;
- (void)forEachVideoTracker:(id /* block */)tracker;
- (void)startActivity:(long long)activity playbackRate:(float)rate atMilliseconds:(unsigned long long)milliseconds triggerType:(id)type reason:(id)reason eventData:(id)data;
- (void)stopActivity:(long long)activity atMilliseconds:(unsigned long long)milliseconds triggerType:(id)type reason:(id)reason eventData:(id)data;
@end

#endif /* MTPAFTracker_h */
