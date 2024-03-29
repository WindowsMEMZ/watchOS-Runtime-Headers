//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKSnapshotQueue_h
#define NTKSnapshotQueue_h
@import Foundation;

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NTKSnapshotQueue : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableArray *_queue_requests;
  BOOL _queue_isProcessingQueue;
  id /* block */ _requestHandler;
}

/* instance methods */
- (id)initWithRequestHandler:(id /* block */)handler;
- (void)queueRequest:(id)request;
- (id)_queue_pullHighestPriorityRequestFromQueue;
- (void)_queue_processQueue;
@end

#endif /* NTKSnapshotQueue_h */
