//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _BPSAbstractCombineLatest_h
#define _BPSAbstractCombineLatest_h
@import Foundation;

#include "BMBookmarkableSubscription.h"
#include "BMBookmarkableSubscription-Protocol.h"
#include "BPSSubscriber-Protocol.h"

@class NSMutableArray;

@interface _BPSAbstractCombineLatest : BMBookmarkableSubscription<BMBookmarkableSubscription> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (nonatomic) unsigned long long upstreamCount;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (nonatomic) BOOL recursion;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL errored;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) long long demand;
@property (nonatomic) unsigned long long finishCount;

/* instance methods */
- (id)initWithDownstream:(id)downstream upstreamCount:(unsigned long long)count;
- (void)requestDemand:(long long)demand;
- (void)receiveSubscription:(id)subscription atIndex:(unsigned long long)index;
- (long long)receiveInput:(id)input atIndex:(unsigned long long)index;
- (void)receiveCompletion:(id)completion atIndex:(unsigned long long)index;
- (id)convertValues:(id)values;
- (void)cancel;
- (id)upstreamSubscriptions;
@end

#endif /* _BPSAbstractCombineLatest_h */
