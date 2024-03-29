//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSSearchModel_h
#define PSSearchModel_h
@import Foundation;

#include "PSSearchIndexOperationDelegate-Protocol.h"
#include "PSSearchModelDataSource-Protocol.h"
#include "PSSearchOperation.h"
#include "PSSearchOperationDelegate-Protocol.h"
#include "PSSearchResults.h"
#include "PSSpecifierObserver-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface PSSearchModel : NSObject<PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver> {
  /* instance variables */
  NSMutableSet *_delegates;
  NSMapTable *_specifierDataSources;
  NSMutableSet *_entriesBeingIndexed;
  NSMutableSet *_indexingEntriesWithLoadedDataSources;
  NSMutableSet *_removedEntriesStillIndexing;
  NSMutableArray *_deferredSpecifierUpdates;
  NSString *_queryForCurrentResults;
  NSMutableSet *_entriesPendingSearch;
  NSMutableSet *_removedEntriesStillSearching;
  NSObject<OS_dispatch_queue> *_searchStateAccessQueue;
  BOOL _hasLoadedRootEntries;
  BOOL _hasStartedIndexing;
  NSOperationQueue *_indexOperationQueue;
  NSOperationQueue *_searchOperationQueue;
}

@property (copy) NSString *currentQuery;
@property (retain) PSSearchOperation *activeSearchOperation;
@property (nonatomic) BOOL showSectionInDetailText;
@property (readonly, nonatomic) NSArray *rootEntries;
@property (weak, nonatomic) NSObject<PSSearchModelDataSource> *dataSource;
@property (readonly) PSSearchResults *currentResults;
@property (readonly, nonatomic) BOOL loadingResults;
@property (readonly, nonatomic) BOOL indexing;
@property (readonly, nonatomic) BOOL hasCompletedIndexing;
@property (nonatomic) BOOL waitUntilFinished;
@property (readonly, nonatomic) long long observerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)_rootSpecifiers;
- (void)preheat;
- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (void)_enumerateDelegatesUsingBlock:(id /* block */)block;
- (id)_searchEntriesForSpecifierDataSource:(id)source;
- (void)_addSpecifierDataSource:(id)source forSearchEntry:(id)entry;
- (void)addRootSpecifier:(id)specifier;
- (void)reloadRootSpecifier:(id)specifier;
- (void)removeRootSpecifier:(id)specifier;
- (void)_addSearchEntries:(id)entries parent:(id)parent usingBlock:(id /* block */)block;
- (void)_removeSearchEntries:(id)entries usingBlock:(id /* block */)block;
- (void)_removeSearchEntries:(id)entries usingBlock:(id /* block */)block forReload:(BOOL)reload;
- (void)_reloadSearchEntries:(id)entries;
- (void)_performDeferredUpdatesForEntry:(id)entry;
- (void)_beginIndexingIfNecessary;
- (void)_loadChildrenForEntry:(id)entry;
- (void)_updatedEntry:(id)entry withChildren:(id)children;
- (void)_finishedIndexingEntry:(id)entry;
- (void)searchIndexOperation:(id)operation didFindSpecifierDataSource:(id)source;
- (void)searchIndexOperationDidFinish:(id)finish searchEntries:(id)entries;
- (void)searchIndexOperationDidCancel:(id)cancel;
- (BOOL)isLoadingResults;
- (void)searchForQuery:(id)query;
- (id /* block */)_defaultSearchResultsSectionComparator;
- (void)_cancelAllSearchOperations;
- (void)_beginSearchingEntriesForCurrentQuery:(id)query newSearch:(BOOL)search;
- (void)_updateWithNewSearchResults:(id)results forQuery:(id)query newSearch:(BOOL)search;
- (void)searchOperationDidBegin:(id)begin;
- (void)searchOperation:(id)operation configureSearchResults:(id)results;
- (id)searchOperation:(id)operation filteredEntriesForEntries:(id)entries;
- (void)searchOperationDidFinish:(id)finish withResults:(id)results;
- (void)searchOperationDidCancel:(id)cancel;
- (void)_performSpecifierUpdates:(id)updates forSearchEntries:(id)entries;
- (void)dataSource:(id)source performUpdates:(id)updates;
- (void)invalidateSpecifiersForDataSource:(id)source;
- (id)recursiveDescription;
- (BOOL)isIndexing;
@end

#endif /* PSSearchModel_h */
