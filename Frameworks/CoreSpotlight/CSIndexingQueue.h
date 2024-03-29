//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSIndexingQueue_h
#define CSIndexingQueue_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSIndexingQueue : NSObject

@property double idleTime;
@property double idleTimeLeeway;
@property unsigned long long maximumBatchSize;
@property (retain) NSMutableDictionary *queuedItems;
@property (retain) NSObject<OS_dispatch_queue> *coalescingQueue;
@property (retain) NSObject<OS_dispatch_source> *coalescingTimer;
@property long long mode;
@property (copy) id /* block */ notifyBlock;

/* instance methods */
- (id)initWithMode:(long long)mode notifyBlock:(id /* block */)block;
- (id)initWithIdleTime:(double)time idleTimeLeeway:(double)leeway maximumBatchSize:(unsigned long long)size mode:(long long)mode notifyBlock:(id /* block */)block;
- (void)dealloc;
- (void)_applicationWillResign:(id)resign;
- (void)_queueItems:(id)items;
- (void)queueItems:(id)items;
- (void)queueItem:(id)item;
- (void)_flushWithAppResigned:(BOOL)resigned forced:(BOOL)forced;
- (void)flush;
@end

#endif /* CSIndexingQueue_h */
