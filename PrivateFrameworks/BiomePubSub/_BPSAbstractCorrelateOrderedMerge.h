//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _BPSAbstractCorrelateOrderedMerge_h
#define _BPSAbstractCorrelateOrderedMerge_h
@import Foundation;

#include "BMBookmarkableSubscription.h"
#include "BPSSubscriber-Protocol.h"

@class NSMutableArray, NSMutableSet;

@interface _BPSAbstractCorrelateOrderedMerge : BMBookmarkableSubscription {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (nonatomic) unsigned long long upstreamCount;
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *upstreamBookmarks;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (retain, nonatomic) NSMutableArray *requestsPerSubscription;
@property (retain, nonatomic) NSMutableSet *completedUpstreamIndexes;
@property (nonatomic) BOOL recursion;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL errored;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) long long demand;
@property (nonatomic) unsigned long long finishCount;

/* instance methods */
- (id)initWithDownstream:(id)downstream upstreamCount:(unsigned long long)count;
- (void)requestDemand:(long long)demand;
- (BOOL)isWaitingForMoreValues;
- (void)receiveSubscription:(id)subscription atIndex:(unsigned long long)index;
- (long long)receiveInput:(id)input atIndex:(unsigned long long)index;
- (BOOL)_isBuffersEmpty;
- (void)_completeWhileLockedWithCompletion:(id)completion;
- (void)_guardedBecomeTerminal;
- (void)receiveCompletion:(id)completion atIndex:(unsigned long long)index;
- (void)flushBufferAndRequestMoreWhileLocked;
- (id)nextValueIndex:(id *)index;
- (long long)compareFirst:(id)first withSecond:(id)second;
- (void)cancel;
- (id)upstreamSubscriptions;
- (void)updateBookmarksWhenLockedForIndex:(unsigned long long)index;
- (id)newBookmark;
@end

#endif /* _BPSAbstractCorrelateOrderedMerge_h */
