//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 800.20.10.0.0
//
#ifndef WLKNetworkRequestReauthCoordinator_h
#define WLKNetworkRequestReauthCoordinator_h
@import Foundation;

#include "NSLocking-Protocol.h"

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject<NSLocking> {
  /* instance variables */
  NSLock *_lock;
}

@property BOOL sessionPrompt;

/* class methods */
+ (id)coordinator;

/* instance methods */
- (id)_init;
- (void)dealloc;
- (void)markPrompt;
- (BOOL)didPrompt;
- (void)lock;
- (void)unlock;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* WLKNetworkRequestReauthCoordinator_h */
