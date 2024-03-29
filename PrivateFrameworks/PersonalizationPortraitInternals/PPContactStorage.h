//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPContactStorage_h
#define PPContactStorage_h
@import Foundation;

#include "PPContactDiskCacheManager.h"
#include "PPMeCardCacheManager.h"
#include "PPSQLDatabase.h"

@class BOOL *, CNContactStore, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SGSuggestionsServiceContactsProtocol;

@interface PPContactStorage : NSObject {
  /* instance variables */
  CNContactStore *_contactsStore;
  NSObject<OS_dispatch_semaphore> *_concurrentContactQueryThrottleSem;
  NSObject<OS_dispatch_queue> *_concurrentContactQueryQueue;
  PPContactDiskCacheManager *_contactCacheManager;
  PPMeCardCacheManager *_meCardCacheManager;
  NSObject<SGSuggestionsServiceContactsProtocol> *_foundInAppsService;
  id /* block */ _foundInAppsHarvestStoreGetter;
  NSString *_path;
  PPSQLDatabase *_db;
  BOOL _chineseBirthdayFound;
}

/* class methods */
+ (id)normalizeHandle:(id)handle;

/* instance methods */
- (void)asyncFillResultsFromFoundInAppsWithQuery:(id)query explanationSet:(id)set group:(id)group results:(id)results;
- (id)meCard;
- (void)asyncFillResultsFromContactsWithQuery:(id)query explanationSet:(id)set group:(id)group results:(id)results;
- (id)contactsContactsWithQuery:(id)query explanationSet:(id)set error:(id *)error;
- (BOOL)iterAllNameRecordsFromAllSourcesWithError:(id *)error block:(id /* block */)block;
- (id)contactNameRecordsWithHistoryResult:(id)result truncated:(BOOL *)truncated error:(id *)error;
- (id)contactsChangeHistoryForClient:(id)client error:(id *)error;
- (void)clearChangeHistoryForClient:(id)client historyResult:(id)result;
- (id)init;
- (id)initWithDatabase:(id)database foundInAppsHarvestStoreGetter:(id /* block */)getter;
- (id)contactsWithQuery:(id)query explanationSet:(id)set timeoutSeconds:(id)seconds error:(id *)error;
- (id)_joinResults:(id)results;
- (id)_waitForGroup:(id)group results:(id)results;
- (id)_waitForGroup:(id)group results:(id)results timeoutSeconds:(double)seconds explanationSet:(id)set;
- (id /* block */)emailFilterWithQuery:(id)query;
- (id /* block */)nameFilterWithQuery:(id)query;
- (id /* block */)phoneFilterWithQuery:(id)query;
- (id /* block */)postalAddressFilterWithQuery:(id)query;
- (id)contactHandlesForTopics:(id)topics;
- (id)contactHandlesForSource:(id)source;
- (id)sourcesForContactHandle:(id)handle;
- (long long)insertIfNeededAndFetchIdentifierWithHandle:(id)handle txnWitness:(id)witness;
- (void)storeHandleSourceMapWithHandles:(id)handles sourceId:(long long)id txnWitness:(id)witness;
- (unsigned long long)pruneOrphanedHandlesWithTxnWitness:(id)witness;
- (id)contactHandleSourceCountsWithMinimumSourceCount:(unsigned long long)count;
- (id)cachedSignificantContactHandles;
- (void)setCachedSignificantContactHandles:(id)handles;
- (BOOL)chineseBirthdayFound;
- (void)setChineseBirthdayFound:(BOOL)found;
- (void)loadChineseBirthdayFoundKVData;
- (void)setChineseBirthdayFoundKVData;
@end

#endif /* PPContactStorage_h */
