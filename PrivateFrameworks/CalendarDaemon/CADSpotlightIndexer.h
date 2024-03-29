//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADSpotlightIndexer_h
#define CADSpotlightIndexer_h
@import Foundation;

#include "CADSpotlightIndexProvider-Protocol.h"

@class CalAccumulatingQueue, CalCancellationTokenSource, CalDatabaseInitializationConfiguration;
@protocol OS_dispatch_queue;

@interface CADSpotlightIndexer : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  CalAccumulatingQueue *_incrementalUpdateQueue;
  NSObject<CADSpotlightIndexProvider> *_spotlightIndexProvider;
  CalDatabaseInitializationConfiguration *_databaseConfiguration;
  CalCancellationTokenSource *_cancellationTokenSource;
}

/* class methods */
+ (struct __CFSet *)_entityTypesThatAffectSpotlightIndexing;
+ (void)_executeWithNumRetriesOnFailure:(long long)failure block:(id /* block */)block;
+ (id)_personaID:(void *)id;
+ (id)spotlightDomainIDForItemInMainDatabase:(void *)database;
+ (id)spotlightDomainIDForItem:(void *)item inDatabaseWithPersonaID:(id)id;
+ (id)_spotlightDomainIDForItem:(void *)item bundleID:(id)id personaID:(id)id;

/* instance methods */
- (id)init;
- (id)initWithDatabaseConfiguration:(id)configuration spotlightIndexProvider:(id)provider;
- (void)cancelOngoingWorkAndShutdown;
- (void)waitUntilIdle;
- (void)_enumerateDatabases:(id /* block */)databases;
- (void)_incrementalUpdate;
- (void)indexUnconsumedChanges;
- (void)_fullReindexIfAllowedWithTransaction:(id)transaction reason:(unsigned long long)reason;
- (void)checkForAndReportPastSpotlightMigrationErrorsAndReindexIfNeeded;
- (id)_mostRecentFailure;
- (BOOL)_mostRecentFailureWithinADayOfNow:(id)now;
- (void)_fullReindexWithReason:(unsigned long long)reason;
- (void)_upsertsAndDeletesFromChanges:(id)changes inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database personaID:(id)id outUpserts:(id *)upserts outDeletes:(id *)deletes;
- (BOOL)_deleteFromIndex:(id)index;
- (BOOL)_upsertToIndex:(struct __CFArray *)index inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database personaID:(id)id deleteBeforeInserting:(BOOL)inserting;
- (BOOL)_sendSpotlightUpdates:(id)updates deletes:(id)deletes toIndex:(id)index;
- (id)_spotlightItemAttributes:(void *)attributes;
- (void)reindexAllItemsForBundleID:(id)id protectionClass:(id)class acknowledgementHandler:(id /* block */)handler;
- (void)reindexItemsWithIdentifiers:(id)identifiers bundleID:(id)id protectionClass:(id)class acknowledgementHandler:(id /* block */)handler;
- (id)_textRepresentationForEvent:(void *)event;
- (void)provideDataForBundleID:(id)id protectionClass:(id)class itemIdentifier:(id)identifier typeIdentifier:(id)identifier options:(long long)options completionHandler:(id /* block */)handler;
- (void)provideFileURLForBundleID:(id)id protectionClass:(id)class itemIdentifier:(id)identifier typeIdentifier:(id)identifier options:(long long)options completionHandler:(id /* block */)handler;
- (BOOL)_pushBatchedUpdatesForCalendarItemsWithUUIDs:(id)uuids database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database personaID:(id)id deleteBeforeInserting:(BOOL)inserting;
- (BOOL)_pushUpdatesForCalendarItemsWithUUIDs:(id)uuids inBatchesOf:(unsigned long long)of database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database personaID:(id)id deleteBeforeInserting:(BOOL)inserting;
- (BOOL)_pushUpdatesForCalendarItemsWithUUIDs:(id)uuids database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database personaID:(id)id deleteBeforeInserting:(BOOL)inserting;
- (void)_resetDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; int x1; struct CPRecordStore * x2; struct CalEventOccurrenceCache * x3; struct CalScheduledTaskCache * x4; void * x5; void * x6; struct __CFDictionary * x7; struct __CFDictionary * x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray * x12; struct __CFString * x13; struct __CFArray * x14; int x15; int x16; struct __CFString * x17; struct __CFURL * x18; struct __CFString * x19; struct __CFString * x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x26; BOOL x27; struct __CFArray * x28; BOOL x29; struct __CFSet * x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char * x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)database;
@end

#endif /* CADSpotlightIndexer_h */
