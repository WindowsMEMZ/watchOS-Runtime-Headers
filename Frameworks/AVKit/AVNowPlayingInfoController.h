//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1088.10.0.0.0
//
#ifndef AVNowPlayingInfoController_h
#define AVNowPlayingInfoController_h
@import Foundation;

#include "AVPlayerController.h"

@interface AVNowPlayingInfoController : NSObject {
  /* instance variables */
  id _playerControllerCurrentTimeJumpedObserver;
  BOOL _nowPlayingInfoNeedsUpdate;
}

@property (retain, nonatomic) AVPlayerController *playerController;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_setNowPlayingInfoNeedsUpdate;
- (void)_updateNowPlayingInfoIfNeeded;
- (void)_updateNowPlayingInfo;
@end

#endif /* AVNowPlayingInfoController_h */
