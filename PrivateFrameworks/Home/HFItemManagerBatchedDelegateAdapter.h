//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFItemManagerBatchedDelegateAdapter_h
#define HFItemManagerBatchedDelegateAdapter_h
@import Foundation;

#include "HFCharacteristicReadPolicy-Protocol.h"
#include "HFItemManager.h"

@class NAFuture, NSMutableSet;

@interface HFItemManagerBatchedDelegateAdapter : NSObject

@property (retain, nonatomic) NSMutableSet *uncommittedBatchingReasons;
@property (retain, nonatomic) NSMutableSet *batchedItemsToUpdate;
@property (retain, nonatomic) NSMutableSet *batchedItemProviderInvalidationReasons;
@property (nonatomic) SEL batchedSenderSelector;
@property (retain, nonatomic) NAFuture *startExecutingBatchFuture;
@property (retain, nonatomic) NAFuture *finishExecutingBatchFuture;
@property (readonly, weak, nonatomic) HFItemManager *itemManager;
@property (retain, nonatomic) NSObject<HFCharacteristicReadPolicy> *readPolicy;
@property (readonly, nonatomic) BOOL hasUncommittedBatchingReasons;

/* instance methods */
- (id)initWithItemManager:(id)manager readPolicy:(id)policy;
- (void)beginBatchWithReason:(id)reason;
- (id)commitBatchWithReason:(id)reason senderSelector:(SEL)selector;
- (id)requestUpdateForItems:(id)items itemProviderInvalidationReasons:(id)reasons modifiedHome:(id)home senderSelector:(SEL)selector;
- (id)_itemProvidersToReloadForInvalidationReasons:(id)reasons;
- (void)_executeBatch;
- (void)_reset;
@end

#endif /* HFItemManagerBatchedDelegateAdapter_h */
