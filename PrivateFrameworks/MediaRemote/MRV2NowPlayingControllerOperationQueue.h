//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRV2NowPlayingControllerOperationQueue_h
#define MRV2NowPlayingControllerOperationQueue_h
@import Foundation;

@class NSOperationQueue;

@interface MRV2NowPlayingControllerOperationQueue : NSObject {
  /* instance variables */
  NSOperationQueue *_queue;
  BOOL _invalidated;
}

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)invalidate;
- (void)addOperationWithBlock:(id /* block */)block;
@end

#endif /* MRV2NowPlayingControllerOperationQueue_h */
