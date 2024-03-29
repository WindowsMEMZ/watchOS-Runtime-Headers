//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVPlayerConnection_h
#define AVPlayerConnection_h
@import Foundation;

#include "AVWeakReference.h"

@class NSError;

@interface AVPlayerConnection : NSObject {
  /* instance variables */
  AVWeakReference *_playerReference;
  AVWeakReference *_playerItemReference;
  NSError *_error;
}

@property (readonly, nonatomic) long long status;

/* instance methods */
- (id)initWithWeakReferenceToPlayer:(id)player weakReferenceToPlayerItem:(id)item;
- (void)dealloc;
- (id)description;
- (id)player;
- (id)playerItem;
- (BOOL)addItemToPlayQueueAfterPlaybackItemOfItem:(id)item;
- (void)removeItemFromPlayQueue;
- (id)error;
@end

#endif /* AVPlayerConnection_h */
