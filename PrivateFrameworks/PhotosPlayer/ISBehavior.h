//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISBehavior_h
#define ISBehavior_h
@import Foundation;

#include "ISBehaviorDelegate-Protocol.h"
#include "ISPlayerState.h"

@interface ISBehavior : NSObject

@property (readonly, nonatomic) BOOL active;
@property (weak, nonatomic) NSObject<ISBehaviorDelegate> *delegate;
@property (readonly, nonatomic) ISPlayerState *initialLayoutInfo;
@property (readonly, nonatomic) long long behaviorType;

/* instance methods */
- (id)initWithInitialLayoutInfo:(id)info;
- (void)becomeActive;
- (void)resignActive;
- (void)activeDidChange;
- (void)videoPlayerItemDidChange;
- (void)setOutputInfo:(id)info withTransitionOptions:(id)options completion:(id /* block */)completion;
- (void)setVideoPlayRate:(float)rate;
- (void)setVideoVolume:(float)volume;
- (BOOL)seekVideoPlayerToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time completionHandler:(id /* block */)handler;
- (BOOL)seekVideoPlayerToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time toleranceBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })before toleranceAfter:(struct { long long x0; int x1; unsigned int x2; long long x3; })after completionHandler:(id /* block */)handler;
- (BOOL)prerollVideoAtRate:(float)rate completionHandler:(id /* block */)handler;
- (void)setVideoForwardPlaybackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (void)videoDidPlayToEnd;
- (void)videoWillPlayToPhoto;
- (void)videoWillPlayToEnd;
- (void)videoReadyForDisplayDidChange;
- (BOOL)isActive;
@end

#endif /* ISBehavior_h */
