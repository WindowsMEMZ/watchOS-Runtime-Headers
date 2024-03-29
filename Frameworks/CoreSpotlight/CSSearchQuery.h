//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSSearchQuery_h
#define CSSearchQuery_h
@import Foundation;

#include "CSSearchQueryContext.h"
#include "MDSearchQueryResultProcessor-Protocol.h"
#include "_CSMultiQuery.h"

@class NSArray, NSKnownKeysMappingStrategy, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CSSearchQuery : NSObject<MDSearchQueryResultProcessor> {
  /* instance variables */
  short _requestedAttributeCount;
  short _attrInfo[14];
  BOOL _started;
  BOOL _finished;
  BOOL _gatherEnded;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _liveItemLock;
  NSKnownKeysMappingStrategy *_mappingStrategy;
  unsigned long long * _attrKeys;
  NSMutableArray *_suggestionCountQueries;
  NSObject<OS_dispatch_group> *_suggestionCountDispatchGroup;
  _CSMultiQuery *_megadomeCountingQuerySearchFrom;
  _CSMultiQuery *_megadomeCountingQuerySearchTo;
}

@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *queryString;
@property (retain, nonatomic) CSSearchQueryContext *queryContext;
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToIndexItemIDMap;
@property (retain, nonatomic) NSMapTable *liveIndexBundleIDToBundleString;
@property (retain, nonatomic) NSMapTable *liveIndexUserFSOIDTOIdentifierMap;
@property (copy) id /* block */ gatherEndedHandler;
@property (copy) id /* block */ priorityGatherEndedHandler;
@property (copy) id /* block */ changedItemsHandler;
@property (copy) id /* block */ removedItemsHandler;
@property (copy) id /* block */ foundAttributesHandler;
@property (copy) id /* block */ changedAttributesHandler;
@property (copy) id /* block */ countChangedHandler;
@property (copy) id /* block */ resolvedAttributeNamesHandler;
@property (copy) id /* block */ completionsHandler;
@property (copy) id /* block */ completionScoresHandler;
@property (copy) id /* block */ foundItemHandler;
@property (copy) id /* block */ interruptedHandler;
@property (copy) id /* block */ restartedHandler;
@property (copy) id /* block */ restartGatherEndedHandler;
@property (nonatomic) BOOL privateIndex;
@property (nonatomic) BOOL userFSIndex;
@property (nonatomic) BOOL suspended;
@property (retain, nonatomic) NSString *privateBundleID;
@property (nonatomic) BOOL privateQuery;
@property (readonly) BOOL cancelled;
@property (readonly) unsigned long long foundItemCount;
@property (copy) id /* block */ foundItemsHandler;
@property (copy) id /* block */ completionHandler;
@property (copy) NSArray *protectionClasses;

/* class methods */
+ (void)setConnectionName:(id)name;
+ (void)initialize;
+ (void)preheat:(id)preheat;
+ (id)_makeQueryErrorWithErrorCode:(long long)code description:(id)description underlyingError:(id)error;
+ (void)userEngagedWithUniqueIdentifier:(id)identifier bundleId:(id)id forUserQuery:(id)query interactionType:(int)type;

/* instance methods */
- (id)copyCSSearchableItemWithValues:(id *)values valueCount:(unsigned long long)count attrKeys:(unsigned long long *)keys protectionClass:(id)class mappingStrategy:(id)strategy attrInfo:(short *)info requestedAttributeCount:(unsigned long long)count unpackInfo:(struct CSUnpackInfo { short x0; short x1; short x2; short x3; short x4; })info userFSDomain:(id)fsdomain;
- (id)init;
- (void)updateQueryString:(id)string queryContext:(id)context;
- (void)commonInitWithQueryString:(id)string queryContext:(id)context;
- (id)initWithQueryString:(id)string queryContext:(id)context;
- (id)initWithQueryString:(id)string context:(id)context;
- (id)initWithQueryString:(id)string attributes:(id)attributes;
- (id)initWithQueryString:(id)string options:(id)options;
- (void)dealloc;
- (id)bundleIDs;
- (void)setBundleIDs:(id)ids;
- (id)keyboardLanguage;
- (id)preferredLanguages;
- (id)options;
- (id)scopes;
- (void)setScopes:(id)scopes;
- (BOOL)internal;
- (BOOL)grouped;
- (BOOL)live;
- (BOOL)counting;
- (BOOL)attribute;
- (double)currentTime;
- (id)connection;
- (id)description;
- (id)debugDescriptionWithQueryString:(BOOL)string;
- (id)debugDescription;
- (void)prepareSearch;
- (void)setupFetchAttributesForSearch;
- (BOOL)isTopHitQuery;
- (void)handleCompletion:(id)completion;
- (void)_finishWithError:(id)error;
- (void)handleError:(id)error;
- (void)willStartQuery;
- (void)start;
- (void)poll;
- (BOOL)isCancelled;
- (void)cancel;
- (void)userEngagedWithResult:(id)result interactionType:(int)type;
- (void)didResolveFriendlyAttributeNames:(id)names fromFetchAttributes:(id)attributes;
- (void)handleFoundAttributes:(id)attributes values:(id)values attributesHandler:(id /* block */)handler;
- (void)processAttributesData:(id)data update:(BOOL)update protectionClass:(id)class;
- (void)_removeIdentifiers:(id)identifiers withBundleID:(id)id andQueryID:(long long)id;
- (void)processRemoveResultsData:(id)data protectionClass:(id)class;
- (BOOL)removeLiveOID:(long long)oid outBundleID:(id *)id outIdentifier:(id *)identifier;
- (BOOL)addOrUpdateLiveOID:(long long)oid bundleID:(id)id identifier:(id)identifier;
- (id)addOrUpdateUserFSLiveOID:(long long)oid userFSDomain:(id)fsdomain identifier:(id)identifier;
- (BOOL)removeUserFSLiveOID:(long long)oid outBundleID:(id *)id outIdentifier:(id *)identifier;
- (void)processResultFromPlist:(id)plist atIndex:(unsigned long long)index protectionClass:(id)class oids:(long long *)oids oidCount:(unsigned int)count addItems:(id *)items updateItems:(id *)items moveItems:(id *)items;
- (unsigned long long)dispatchApplyWidth;
- (id)copyResultsFromPlist:(id)plist protectionClass:(id)class;
- (void)handleFoundItems:(id)items;
- (void)handleFoundInstantAnswers:(id)answers;
- (void)handleFoundSuggestions:(id)suggestions;
- (void)handleFoundCompletions:(id)completions;
- (void)handleQueryRewritten;
- (void)addSuggestionCountQuery:(id)query;
- (void)removeSuggestionCountQuery:(id)query;
- (id)processToMegadomePeopleSuggestions:(id)suggestions resultsToMultiQuery:(id)query toSuggestions:(id)suggestions processedSuggestions:(id)suggestions;
- (id)processFromMegadomePeopleSuggestions:(id)suggestions resultsFromMultiQuery:(id)query fromSuggestions:(id)suggestions processedSuggestions:(id)suggestions;
- (void)filterMegadomePeopleSuggestions:(id)suggestions isShortQuery:(BOOL)query completionHandler:(id /* block */)handler;
- (void)filterZKWPeopleSuggestions:(id)suggestions completionHandler:(id /* block */)handler;
- (void)populateSuggestionCount:(id)count completionHandler:(id /* block */)handler;
- (void)processInstantAnswer:(id)answer;
- (void)processSuggestions:(id)suggestions;
- (void)processResultsData:(id)data protectionClass:(id)class;
- (void)processCompletionsResultsData:(id)data protectionClass:(id)class;
- (void)processLiveResultsData:(id)data oidData:(id)data protectionClass:(id)class;
- (void)didReturnResults:(long long)results resultsData:(id)data oidData:(id)data protectionClass:(id)class completionHandler:(id /* block */)handler;
- (void)didFinishWithError:(id)error;
@end

#endif /* CSSearchQuery_h */
