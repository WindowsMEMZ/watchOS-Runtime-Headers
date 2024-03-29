//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalSQLContext_h
#define HMBLocalSQLContext_h
@import Foundation;

#include "HMBSQLContext.h"
#include "HMBSQLQueryStatement.h"

@class NSDictionary, NSMapTable, NSMutableDictionary;

@interface HMBLocalSQLContext : HMBSQLContext {
  /* instance variables */
  struct sqlite3_stmt * insertStore;
  struct sqlite3_stmt * deleteStore;
  struct sqlite3_stmt * selectStore;
  struct sqlite3_stmt * selectStores;
  struct sqlite3_stmt * updateStoreReplicationData;
  struct sqlite3_stmt * insertBlock;
  struct sqlite3_stmt * selectBlock;
  struct sqlite3_stmt * deleteBlock;
  struct sqlite3_stmt * deleteBlocksStore;
  struct sqlite3_stmt * updateBlock;
  struct sqlite3_stmt * selectReadyBlocks;
  struct sqlite3_stmt * deleteNullBlocks;
  struct sqlite3_stmt * insertItem;
  struct sqlite3_stmt * insertDeletionItemsForRecordsOfType;
  struct sqlite3_stmt * insertDeletionItemsForRecordWithUUID;
  struct sqlite3_stmt * insertDeletionItemsForRecordsWithParentUUID;
  struct sqlite3_stmt * updateItem;
  struct sqlite3_stmt * deleteItem;
  struct sqlite3_stmt * deleteItemsBlock;
  struct sqlite3_stmt * deleteItemsStore;
  struct sqlite3_stmt * deleteItemStoreExternal;
  struct sqlite3_stmt * selectItemsBlock;
  struct sqlite3_stmt * selectItemsBlockLimit;
  struct sqlite3_stmt * deleteNullItems;
  struct sqlite3_stmt * deleteNullItemsType;
  struct sqlite3_stmt * insertRecord;
  struct sqlite3_stmt * updateRecord;
  struct sqlite3_stmt * updateRecordExternal;
  struct sqlite3_stmt * updateRecordExternalExternal;
  struct sqlite3_stmt * updateRecordExternalUUID;
  struct sqlite3_stmt * updateRecordPush;
  struct sqlite3_stmt * updateRecordPushUUID;
  struct sqlite3_stmt * updateRecordClearPushExpected;
  struct sqlite3_stmt * updateRecordsClearPush;
  struct sqlite3_stmt * updateRecordType;
  struct sqlite3_stmt * deleteRecord;
  struct sqlite3_stmt * deleteRecordBlock;
  struct sqlite3_stmt * deleteRecordUUID;
  struct sqlite3_stmt * deleteRecordExternal;
  struct sqlite3_stmt * deleteRecordsStore;
  struct sqlite3_stmt * deleteZombieRecords;
  struct sqlite3_stmt * selectRecord;
  struct sqlite3_stmt * selectRecordUUIDExternal;
  struct sqlite3_stmt * selectRecordUUID;
  struct sqlite3_stmt * selectRecordExternal;
  struct sqlite3_stmt * selectRecordsPushBlock;
  struct sqlite3_stmt * selectRecordsParentUUID;
  struct sqlite3_stmt * selectRecordsParentUUIDType;
  struct sqlite3_stmt * selectRecordsOfType;
  struct sqlite3_stmt * selectRecords;
  struct sqlite3_stmt * insertIndexSentinel;
  struct sqlite3_stmt * deleteIndexSentinels;
  struct sqlite3_stmt * deleteIndexSentinelsStore;
  struct sqlite3_stmt * selectIndexSentinel;
}

@property (retain) NSDictionary *queryTables;
@property (retain) NSMapTable *queryContextsByClass;
@property (retain) NSMutableDictionary *queryContextsByModelType;
@property (retain, nonatomic) HMBSQLQueryStatement *selectReadyInputBlocks;
@property (retain, nonatomic) HMBSQLQueryStatement *selectReadyRollbackBlocks;
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordRows;
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordTypeRows;
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordParentModelIDRows;
@property (retain, nonatomic) HMBSQLQueryStatement *selectAllRecordParentModelIDTypeRows;

/* class methods */
+ (void)unlinkDatastoreAt:(id)at everything:(BOOL)everything;
+ (id)openWithURL:(id)url readOnly:(BOOL)only error:(id *)error;
+ (id)logCategory;

/* instance methods */
- (long long)migrateToSchema01WithError:(id *)error;
- (unsigned long long)_insertRecordWithZoneRow:(unsigned long long)row externalID:(id)id externalData:(id)data modelID:(id)id parentModelID:(id)id modelType:(id)type modelEncoding:(unsigned long long)encoding modelData:(id)data modelSchema:(id)schema pushEncoding:(unsigned long long)encoding pushData:(id)data pushBlockRow:(id)row error:(id *)error;
- (BOOL)_updateRecordWithRow:(unsigned long long)row externalID:(id)id externalData:(id)data error:(id *)error;
- (BOOL)_updateRecordWithZoneRow:(unsigned long long)row externalID:(id)id externalData:(id)data error:(id *)error;
- (BOOL)_updateRecordWithZoneRow:(unsigned long long)row modelID:(id)id externalData:(id)data error:(id *)error;
- (BOOL)_updateRecordWithZoneRow:(unsigned long long)row modelID:(id)id pushEncoding:(unsigned long long)encoding pushData:(id)data pushBlockRow:(id)row error:(id *)error;
- (BOOL)_updateRecordsClearPushWithPushBlockRow:(unsigned long long)row error:(id *)error;
- (BOOL)_updateRecordWithRow:(unsigned long long)row modelEncoding:(unsigned long long)encoding modelData:(id)data modelSchema:(id)schema error:(id *)error;
- (BOOL)_updateRecordWithRow:(unsigned long long)row pushBlockRow:(id)row pushData:(id)data pushEncoding:(unsigned long long)encoding error:(id *)error;
- (BOOL)_updateRecordWithRow:(unsigned long long)row modelType:(id)type modelSchema:(id)schema error:(id *)error;
- (BOOL)_deleteRecordWithZoneRow:(unsigned long long)row modelID:(id)id error:(id *)error;
- (BOOL)_deleteRecordWithZoneRow:(unsigned long long)row externalID:(id)id error:(id *)error;
- (BOOL)_deleteRecordWithRow:(unsigned long long)row error:(id *)error;
- (unsigned long long)_deleteRecordWithRow:(unsigned long long)row expectedOutputBlockRow:(unsigned long long)row error:(id *)error;
- (unsigned long long)_clearPushForRecordRow:(unsigned long long)row expectedOutputBlockRow:(unsigned long long)row error:(id *)error;
- (BOOL)_deleteRecordsWithZoneRow:(unsigned long long)row error:(id *)error;
- (BOOL)_deleteZombieRecordsWithZoneRow:(unsigned long long)row error:(id *)error;
- (id)_selectRecordModelIDWithZoneRow:(unsigned long long)row externalID:(id)id error:(id *)error;
- (id)_selectRecordWithZoneRow:(unsigned long long)row modelID:(id)id returning:(unsigned long long)returning error:(id *)error;
- (id)_selectRecordWithRow:(unsigned long long)row returning:(unsigned long long)returning error:(id *)error;
- (id)_selectRecordWithZoneRow:(unsigned long long)row externalID:(id)id returning:(unsigned long long)returning error:(id *)error;
- (id)_selectRecordsWithZoneRow:(unsigned long long)row parentModelID:(id)id returning:(unsigned long long)returning error:(id *)error;
- (id)_selectRecordWithZoneRow:(unsigned long long)row parentModelID:(id)id modelType:(id)type returning:(unsigned long long)returning error:(id *)error;
- (id)_selectRecordsWithZoneRow:(unsigned long long)row modelType:(id)type returning:(unsigned long long)returning error:(id *)error;
- (BOOL)_selectRecordsWithZoneRow:(unsigned long long)row modelType:(id)type returning:(unsigned long long)returning error:(id *)error handler:(id /* block */)handler;
- (id)_selectRecordsWithZoneRow:(unsigned long long)row returning:(unsigned long long)returning error:(id *)error;
- (id)_selectRecordsWithBlockRow:(unsigned long long)row returning:(unsigned long long)returning error:(id *)error;
- (id)selectAllRecordsWithZoneRow:(unsigned long long)row returning:(unsigned long long)returning;
- (BOOL)_resetOutputForRecordsWithBlockRow:(unsigned long long)row error:(id *)error;
- (void)reloadSQLQueryMetadata;
- (BOOL)prepareTablesWithError:(id *)error;
- (id)initWithURL:(id)url readOnly:(BOOL)only;
- (id)sqlBlockWithActivity:(id)activity block:(id /* block */)block;
- (id)sqlTransactionWithActivity:(id)activity block:(id /* block */)block;
- (BOOL)sqlBlockWithActivity:(id)activity error:(id *)error block:(id /* block */)block;
- (BOOL)sqlTransactionWithActivity:(id)activity error:(id *)error block:(id /* block */)block;
- (id)prepare;
- (id)initialize;
- (void)finalize;
- (long long)migrateFromSchemaVersion:(long long)version error:(id *)error;
- (unsigned long long)_insertZoneWithIdentification:(id)identification name:(id)name error:(id *)error;
- (BOOL)_deleteZoneWithRow:(unsigned long long)row error:(id *)error;
- (id)_fetchAllZones:(id *)zones;
- (id)_selectZoneWithRow:(unsigned long long)row error:(id *)error;
- (BOOL)_updateZoneWithRow:(unsigned long long)row replication:(id)replication error:(id *)error;
- (unsigned long long)_insertBlockWithZoneRow:(unsigned long long)row type:(unsigned long long)type error:(id *)error;
- (BOOL)_deleteBlockWithRow:(unsigned long long)row error:(id *)error;
- (BOOL)_deleteBlocksWithZoneRow:(unsigned long long)row error:(id *)error;
- (BOOL)_updateBlockWithRow:(unsigned long long)row options:(id)options error:(id *)error;
- (id)_selectReadyBlocksWithZoneRow:(unsigned long long)row type:(unsigned long long)type error:(id *)error;
- (id)_selectBlockWithRow:(unsigned long long)row error:(id *)error;
- (BOOL)_deleteNullBlocksWithZoneRow:(unsigned long long)row error:(id *)error;
- (unsigned long long)_insertBlockWithZoneRow:(unsigned long long)row type:(unsigned long long)type options:(id)options items:(id)items error:(id *)error;
- (unsigned long long)_insertItemWithZoneRow:(unsigned long long)row blockRow:(unsigned long long)row type:(unsigned long long)type externalID:(id)id externalData:(id)data modelEncoding:(unsigned long long)encoding modelData:(id)data error:(id *)error;
- (unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)row blockRow:(unsigned long long)row type:(unsigned long long)type modelType:(id)type error:(id *)error;
- (unsigned long long)_insertDeletionItemWithZoneRow:(unsigned long long)row blockRow:(unsigned long long)row type:(unsigned long long)type modelID:(id)id error:(id *)error;
- (unsigned long long)_insertDeletionItemsWithZoneRow:(unsigned long long)row blockRow:(unsigned long long)row type:(unsigned long long)type parentModelID:(id)id error:(id *)error;
- (unsigned long long)_insertItemWithZoneRow:(unsigned long long)row blockRow:(unsigned long long)row type:(unsigned long long)type modelType:(id)type error:(id *)error;
- (BOOL)_updateItemWithZoneRow:(unsigned long long)row blockRow:(unsigned long long)row type:(unsigned long long)type externalID:(id)id externalData:(id)data modelEncoding:(unsigned long long)encoding modelData:(id)data error:(id *)error;
- (BOOL)_deleteItemWithRow:(unsigned long long)row error:(id *)error;
- (BOOL)_deleteItemsWithBlockRow:(unsigned long long)row error:(id *)error;
- (BOOL)_deleteItemWithZoneRow:(unsigned long long)row error:(id *)error;
- (BOOL)_deleteItemWithZoneRow:(unsigned long long)row type:(unsigned long long)type externalID:(id)id error:(id *)error;
- (id)_selectItemsWithBlockRow:(unsigned long long)row rowGreaterThan:(unsigned long long)than limit:(unsigned long long)limit returning:(unsigned long long)returning error:(id *)error;
- (id)_selectItemsWithBlockRow:(unsigned long long)row returning:(unsigned long long)returning error:(id *)error;
- (BOOL)_deleteNullItemsWithZoneRow:(unsigned long long)row type:(unsigned long long)type error:(id *)error;
- (BOOL)_deleteNullItemsWithZoneRow:(unsigned long long)row error:(id *)error;
- (BOOL)_insertIndexSentinelWithZoneRow:(unsigned long long)row modelType:(id)type error:(id *)error;
- (id)_selectIndexSentinelForZoneRow:(unsigned long long)row modelType:(id)type error:(id *)error;
- (BOOL)_deleteIndexSentinelsWithModelType:(id)type error:(id *)error;
- (BOOL)_deleteIndexSentinelsWithZoneRow:(unsigned long long)row error:(id *)error;
- (id)flush:(BOOL)flush;
@end

#endif /* HMBLocalSQLContext_h */
