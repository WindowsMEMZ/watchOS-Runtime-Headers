//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef ARPCorrelationTaskScheduler_h
#define ARPCorrelationTaskScheduler_h
@import Foundation;

@class BPSSink, NSDate;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ARPCorrelationTaskScheduler : NSObject

@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BPSSink *sinkAccessories;
@property (readonly, nonatomic) BPSSink *sinkMediaAccessories;
@property (readonly, nonatomic) BPSSink *sinkScenes;
@property (copy) NSDate *bookmark;

/* instance methods */
- (id)initWithKnowledgeStore:(id)store;
- (void)dealloc;
- (void)nowPlayingEventInserted:(id)inserted;
- (void)_executeHomeControlMicrolocationCorrelationTask;
- (void)_executeHomeControlNextActionCorrelationTask;
- (void)microLocationEventInserted:(id)inserted;
- (void)homeKitEventInserted;
- (void)_executeCorrelationTask;
- (void)executeCorrelationTask;
@end

#endif /* ARPCorrelationTaskScheduler_h */
