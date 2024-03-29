//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPMediaControlSession_h
#define RPMediaControlSession_h
@import Foundation;

#include "RPMessageable-Protocol.h"

@protocol OS_dispatch_queue;

@interface RPMediaControlSession : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  BOOL _invalidateCalled;
  BOOL _registeredMediaControlInterest;
}

@property (readonly, nonatomic) unsigned long long mediaControlFlags;
@property (copy, nonatomic) id /* block */ mediaControlFlagsChangedHandler;
@property (retain, nonatomic) NSObject<RPMessageable> *messenger;

/* instance methods */
- (id)init;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)invalidate;
- (void)_invalidate;
- (void)_handleMediaControlEvent:(id)event;
- (void)mediaCaptionSettingGetFromDestinationID:(id)id completion:(id /* block */)completion;
- (void)mediaCaptionSettingSet:(int)set destinationID:(id)id completion:(id /* block */)completion;
- (void)mediaCommand:(int)command destinationID:(id)id completion:(id /* block */)completion;
- (void)mediaSkipBySeconds:(double)seconds destinationID:(id)id completion:(id /* block */)completion;
- (void)mediaGetVolumeFromDestinationID:(id)id completion:(id /* block */)completion;
- (void)mediaSetVolume:(double)volume destinationID:(id)id completion:(id /* block */)completion;
@end

#endif /* RPMediaControlSession_h */
