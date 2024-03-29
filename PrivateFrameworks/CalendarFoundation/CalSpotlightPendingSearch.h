//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalSpotlightPendingSearch_h
#define CalSpotlightPendingSearch_h
@import Foundation;

#include "CalSpotlightQueryPendingSearchProtocol-Protocol.h"
#include "MDSearchQueryDelegate-Protocol.h"

@class MDSearchQuery, NSMutableOrderedSet, NSString;

@interface CalSpotlightPendingSearch : NSObject<MDSearchQueryDelegate, CalSpotlightQueryPendingSearchProtocol>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSMutableOrderedSet *searchableItemIdentifiers;
@property (retain) NSMutableOrderedSet *searchableItems;
@property (retain) MDSearchQuery *query;
@property (copy) NSString *clientBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_queue;
+ (id)_pendingSearches;
+ (id)_createSearchQueryWithPredicate:(id)predicate options:(id)options;
+ (id)_resultForSearchableItem:(id)item;
+ (id)_resultsForSearchableItems:(id)items;

/* instance methods */
- (id)initWithString:(id)string clientBundleID:(id)id completionHandler:(id /* block */)handler;
- (void)_startSearchWithQuery:(id)query;
- (void)_searchEnded;
- (void)searchWithString:(id)string;
- (void)cancel;
- (void)searchQuery:(id)query didReturnItems:(id)items;
- (void)searchQuery:(id)query statusChanged:(unsigned long long)changed;
- (void)searchQuery:(id)query didFailWithError:(id)error;
@end

#endif /* CalSpotlightPendingSearch_h */
