//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUCallSoundPlayer_h
#define TUCallSoundPlayer_h
@import Foundation;

#include "TUSoundPlayer.h"

@interface TUCallSoundPlayer : NSObject

@property (retain, nonatomic) TUSoundPlayer *player;
@property (nonatomic) long long currentlyPlayingSoundType;
@property (readonly, nonatomic) BOOL playing;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)attemptToPlaySoundType:(long long)type forCall:(id)call;
- (BOOL)attemptToPlaySoundType:(long long)type forCall:(id)call completion:(id /* block */)completion;
- (BOOL)attemptToPlayDescriptor:(id)descriptor;
- (BOOL)attemptToPlayDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)stopPlaying;
- (BOOL)isPlaying;
@end

#endif /* TUCallSoundPlayer_h */
