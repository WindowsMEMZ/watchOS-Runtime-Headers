//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSFuture_h
#define BPSFuture_h
@import Foundation;

#include "BPSPublisher.h"
#include "BPSFutureResult.h"
#include "BPSSubscriber-Protocol.h"
#include "BPSSubscriberList.h"

@interface BPSFuture : BPSPublisher {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSObject<BPSSubscriber> *subscriber;
@property (nonatomic) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned int x1; } publisherLock;
@property (nonatomic) BOOL sentResult;
@property (retain, nonatomic) BPSSubscriberList *downstreams;
@property (retain, nonatomic) BPSFutureResult *result;

/* instance methods */
- (id)initWithAttemptToFulfill:(id /* block */)fulfill;
- (void)subscribe:(id)subscribe;
- (void)disassociate:(long long)disassociate;
- (id)upstreamPublishers;
- (id)startWithSubscriber:(id)subscriber;
- (id)nextEvent;
- (BOOL)completed;
- (void)reset;
@end

#endif /* BPSFuture_h */
