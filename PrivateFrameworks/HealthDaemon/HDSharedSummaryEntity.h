//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSharedSummaryEntity_h
#define HDSharedSummaryEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDSharedSummaryEntity : HDHealthEntity
/* class methods */
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)foreignKeys;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (id)insertOrReplaceWithUUID:(id)uuid package:(id)package name:(id)name version:(id)version compatibilityVersion:(id)version transactionID:(unsigned long long)id summaryData:(id)data databaseTransaction:(id)transaction error:(id *)error;
+ (BOOL)deleteAllSummariesWithDatabaseTransaction:(id)transaction error:(id *)error;
+ (BOOL)enumerateEntitiesWithTransactionID:(unsigned long long)id package:(id)package names:(id)names databaseTransaction:(id)transaction error:(id *)error enumerationHandler:(id /* block */)handler;
+ (BOOL)enumerateEntitiesWithReuseTransactionID:(unsigned long long)id package:(id)package names:(id)names databaseTransaction:(id)transaction error:(id *)error enumerationHandler:(id /* block */)handler;
+ (BOOL)enumerateSummariesWithTransactionID:(unsigned long long)id package:(id)package names:(id)names includedObjectTypes:(id)types databaseTransaction:(id)transaction error:(id *)error enumerationHandler:(id /* block */)handler;
+ (id)entityWithUUID:(id)uuid databaseTransaction:(id)transaction error:(id *)error;
+ (BOOL)reuseSummariesForTransactionID:(unsigned long long)id databaseTransaction:(id)transaction error:(id *)error;
+ (long long)countOfObjectsForTransactionID:(long long)id healthDatabase:(id)database error:(id *)error;

/* instance methods */
- (BOOL)setSynced:(BOOL)synced databaseTransaction:(id)transaction error:(id *)error;
- (BOOL)syncedInDatabaseTransaction:(id)transaction error:(id *)error;
- (id)UUIDInDatabaseTransaction:(id)transaction error:(id *)error;
- (id)packageInDatabaseTransaction:(id)transaction error:(id *)error;
- (id)nameInDatabaseTransaction:(id)transaction error:(id *)error;
- (id)versionInDatabaseTransaction:(id)transaction error:(id *)error;
- (id)compatibilityVersionInDatabaseTransaction:(id)transaction error:(id *)error;
- (id)summaryDataInDatabaseTransaction:(id)transaction error:(id *)error;
- (id)transactionIDInDatabaseTransaction:(id)transaction error:(id *)error;
- (BOOL)setReuseTransactionID:(id)id databaseTransaction:(id)transaction error:(id *)error;
- (id)reuseTransactionIDInDatabaseTransaction:(id)transaction error:(id *)error;
@end

#endif /* HDSharedSummaryEntity_h */
