//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFeedItemInventory_h
#define FCFeedItemInventory_h
@import Foundation;

#include "FCAsyncSerialQueue.h"
#include "FCCloudContext.h"
#include "FCFeedItemInventoryType-Protocol.h"
#include "FCFeedItemServiceType-Protocol.h"
#include "FCOnce.h"
#include "FCPBFeedItemInventory.h"

@class NSArray, NSString;

@interface FCFeedItemInventory : NSObject<FCFeedItemInventoryType>

@property (readonly, nonatomic) FCCloudContext *context;
@property (readonly, nonatomic) NSObject<FCFeedItemServiceType> *feedItemService;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned int version;
@property (readonly, nonatomic) double refreshInterval;
@property (readonly, nonatomic) NSString *loggingKey;
@property (readonly, nonatomic) FCOnce *loadFromCacheOnce;
@property (retain) FCPBFeedItemInventory *latestInventory;
@property (readonly, nonatomic) FCAsyncSerialQueue *feedItemsRefreshSerialQueue;
@property (readonly, nonatomic) NSArray *allFeedItems;

/* instance methods */
- (id)initWithContext:(id)context feedItemService:(id)service filePath:(id)path version:(unsigned int)version refreshInterval:(double)interval loggingKey:(id)key;
- (id)init;
- (id)allFeedItemScoreProfilesForConfigurationSet:(long long)set scoringVersion:(unsigned long long)version;
- (id)allFeedItemsWithTopic:(id)topic;
- (void)refreshIfNeededWithCompletion:(id /* block */)completion;
- (void)_prepareForUse;
- (id)_refreshIfNeeded;
- (id)_refreshIfNeededWithQoS:(long long)s;
- (void)_adoptInventory:(id)inventory;
- (BOOL)_isRefreshNeeded;
- (void)_rescoreInventoryIfNeeded:(id)needed forScoringVersion:(unsigned long long)version;
- (id)_loadInventoryFromCache;
- (void)_populateScoreProfilesForFeedItems:(id)items;
- (void)_populateScoreProfilesForFeedItems:(id)items configurationSet:(long long)set;
@end

#endif /* FCFeedItemInventory_h */
