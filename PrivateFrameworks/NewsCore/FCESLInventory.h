//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCESLInventory_h
#define FCESLInventory_h
@import Foundation;

#include "FCFeedItemInventoryType-Protocol.h"

@class NSArray;

@interface FCESLInventory : NSObject<FCFeedItemInventoryType>

@property (readonly, nonatomic) NSObject<FCFeedItemInventoryType> *globalInventory;
@property (readonly, nonatomic) NSObject<FCFeedItemInventoryType> *tagInventory;
@property (readonly, nonatomic) NSArray *allFeedItems;

/* instance methods */
- (id)initWithGlobalInventory:(id)inventory tagInventory:(id)inventory;
- (void)prewarmScoreCache:(id)cache configuration:(id)configuration;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)set scoringVersion:(unsigned long long)version;
- (id)allFeedItemsWithTopic:(id)topic;
- (void)refreshIfNeededWithCompletion:(id /* block */)completion;
- (id)_childInventories;
- (void)_enumerateChildInventories:(id /* block */)inventories;
@end

#endif /* FCESLInventory_h */
