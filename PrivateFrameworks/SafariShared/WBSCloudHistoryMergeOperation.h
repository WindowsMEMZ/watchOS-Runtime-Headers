//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSCloudHistoryMergeOperation_h
#define WBSCloudHistoryMergeOperation_h
@import Foundation;

#include "WBSCloudHistoryFetchResult.h"
#include "WBSHistoryServiceDatabaseProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryMergeOperation : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<WBSHistoryServiceDatabaseProtocol> *_database;
  WBSCloudHistoryFetchResult *_fetchResult;
  BOOL _mergeStarted;
  NSMutableDictionary *_visitsByVisitIdentifiers;
  NSMutableSet *_redirectChainEarliestVisits;
  NSSet *_tombstones;
  NSMutableDictionary *_tombstonesByURLString;
  NSSet *_existingVisits;
  NSSet *_redirectChainSourceVisits;
}

/* instance methods */
- (id)initWithDatabase:(id)database fetchResult:(id)result;
- (void)mergeWithCompletion:(id /* block */)completion;
- (void)_updateClientVersions;
- (void)_replayAndAddTombstones:(id /* block */)tombstones;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_loadTombstonesWithCompletion:(id /* block */)completion;
- (void)_buildRedirectChains;
- (void)_filterVisitsByTombstones;
- (void)_lookUpExistingItemsWithCompletion:(id /* block */)completion;
- (void)_removeDuplicateVisits;
- (void)_lookupRedirectChainSourcesWithCompletion:(id /* block */)completion;
- (void)_mergeVisitsWithCompletion:(id /* block */)completion;
@end

#endif /* WBSCloudHistoryMergeOperation_h */
