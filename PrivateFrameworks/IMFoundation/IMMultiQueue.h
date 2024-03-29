//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMMultiQueue_h
#define IMMultiQueue_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IMMultiQueue : NSObject {
  /* instance variables */
  NSMutableDictionary *_queueMap;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (void)_popEnqueuedBlockWithGUID:(id)guid key:(id)key;
- (BOOL)addBlock:(id /* block */)block withTimeout:(double)timeout forKey:(id)key description:(id)description;
- (BOOL)addBlock:(id /* block */)block forKey:(id)key description:(id)description;
- (BOOL)_addBlock:(id /* block */)block withGUID:(id)guid forKey:(id)key description:(id)description;
- (id)loggableOverview;
- (id)loggableOverviewForKey:(id)key;
@end

#endif /* IMMultiQueue_h */
