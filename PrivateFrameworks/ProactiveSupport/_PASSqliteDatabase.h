//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASSqliteDatabase_h
#define _PASSqliteDatabase_h
@import Foundation;

#include "_PASSqliteErrorHandlerProtocol-Protocol.h"
#include "_PASSqliteStatementCache.h"

@class BOOL *, NSCache, NSMutableDictionary, NSString;
@protocol OS_dispatch_group;

@interface _PASSqliteDatabase : NSObject {
  /* instance variables */
  struct sqlite3 * _db;
  int _transactionDepth;
  BOOL _transactionRolledback;
  struct atomic_flag { atomic  _Value; BOOL x0; } _isClosed;
  NSObject<_PASSqliteErrorHandlerProtocol> *_errorHandler;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
  NSObject<OS_dispatch_group> *_waitingForLock;
  BOOL _currentExclusivity;
  NSMutableDictionary *_explainedQueryForPlan;
  NSCache *_explainedQueriesLogged;
  struct __sFILE { char * x0; int x1; int x2; short x3; short x4; struct __sbuf { char * x0; int x1; } x5; int x6; void * x7; undefined * x8; undefined * x9; undefined * x10; undefined * x11; struct __sbuf { char * x0; int x1; } x12; struct __sFILEX * x13; int x14; unsigned char x15[3] unsigned char x16[1] struct __sbuf { char * x0; int x1; } x17; int x18; long long x19; } * _explainedQueriesLogFile;
  _PASSqliteStatementCache *_statementCache;
  BOOL _preparedForFirstQuery;
}

@property (readonly, nonatomic) struct sqlite3 * handle;
@property (readonly, nonatomic) long long contentProtectionType;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) BOOL isInMemory;

/* class methods */
+ (BOOL)contentProtectionTypeRequiresDeviceToBeUnlocked:(long long)unlocked;
+ (BOOL)contentProtectionTypeRequiresDeviceToHaveBeenUnlockedOnce:(long long)once;
+ (id)initializeDatabase:(id)database withContentProtection:(long long)protection newDatabaseCreated:(BOOL *)created errorHandler:(id)handler;
+ (id)initializeDatabase:(id)database withContentProtection:(long long)protection newDatabaseCreated:(BOOL *)created;
+ (id)initializeDatabase:(id)database withProtection:(BOOL)protection newDatabaseCreated:(BOOL *)created;
+ (id)recreateCorruptDatabase:(id)database withContentProtection:(long long)protection;
+ (id)sqliteDatabaseWithFilename:(id)filename flags:(int)flags error:(id *)error errorHandler:(id)handler;
+ (id)sqliteDatabaseWithFilename:(id)filename flags:(int)flags error:(id *)error;
+ (id)sqliteDatabaseWithFilename:(id)filename error:(id *)error errorHandler:(id)handler;
+ (id)sqliteDatabaseWithFilename:(id)filename error:(id *)error;
+ (id)sqliteDatabaseWithFilename:(id)filename contentProtection:(long long)protection errorHandler:(id)handler error:(id *)error;
+ (id)sqliteDatabaseWithFilename:(id)filename contentProtection:(long long)protection error:(id *)error;
+ (id)sqliteDatabaseInMemoryWithError:(id *)error errorHandler:(id)handler;
+ (id)sqliteDatabaseInMemoryWithError:(id *)error;
+ (id)protectedDatabaseWithFilename:(id)filename error:(id *)error errorHandler:(id)handler;
+ (id)protectedDatabaseWithFilename:(id)filename error:(id *)error;
+ (BOOL)isInMemoryPath:(id)path;
+ (id)inMemoryPath;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)name;
+ (void)truncateDatabaseAtPath:(id)path;
+ (void)runDebugCommand:(const char *)command onDbWithHandle:(id)handle;
+ (id)corruptionMarkerPathForPath:(id)path;

/* instance methods */
- (id)freeSpace;
- (id)dbErrorWithCode:(unsigned long long)code sqliteReturnValue:(int)value lastErrno:(int)errno query:(id)query;
- (BOOL)handleError:(long long)error sqliteError:(int)error forQuery:(id)query onError:(id /* block */)error;
- (void)placeCorruptionMarker;
- (id)initWithFilename:(id)filename flags:(int)flags error:(id *)error errorHandler:(id)handler;
- (id)initWithFilename:(id)filename flags:(int)flags error:(id *)error;
- (id)init;
- (void)dealloc;
- (void)closePermanently;
- (void)_prepareForFirstQuery;
- (void)simulateOnDiskDatabase;
- (long long)lastInsertRowId;
- (unsigned long long)valueForPragmaName:(id)name;
- (unsigned long long)_pagesToVacuum;
- (BOOL)vacuumWithShouldContinueBlock:(id /* block */)block error:(id *)error;
- (BOOL)runQuery:(id)query onRow:(id /* block */)row onError:(id /* block */)error;
- (BOOL)runQuery:(id)query onRow:(id /* block */)row;
- (void)_logQueryPlanForQuery:(id)query;
- (BOOL)_isLikelySQLStatementContainedInString:(const char *)string;
- (BOOL)prepQuery:(id)query onPrep:(id /* block */)prep onError:(id /* block */)error;
- (BOOL)prepAndRunQuery:(id)query onPrep:(id /* block */)prep onRow:(id /* block */)row onError:(id /* block */)error;
- (void)_prepAndRunQuery:(id)query columns:(id)columns dictionary:(id)dictionary onError:(id /* block */)error;
- (BOOL)prepAndRunNonDataQueries:(id)queries onError:(id /* block */)error;
- (void)updateTable:(id)table dictionary:(id)dictionary whereClause:(id)clause onError:(id /* block */)error;
- (void)insertOrReplaceIntoTable:(id)table dictionary:(id)dictionary onError:(id /* block */)error;
- (void)insertIntoTable:(id)table dictionary:(id)dictionary;
- (id)selectColumns:(id)columns fromTable:(id)table whereClause:(id)clause onPrep:(id /* block */)prep onError:(id /* block */)error;
- (void)clearCaches;
- (void)readTransaction:(id /* block */)transaction;
- (void)writeTransaction:(id /* block */)transaction;
- (BOOL)frailReadTransaction:(id /* block */)transaction;
- (BOOL)frailWriteTransaction:(id /* block */)transaction;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)block;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)block;
- (void)_txnBegin;
- (void)_txnBeginExclusive;
- (void)_txnRollback;
- (void)_txnEnd;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })_transactionWithExclusivity:(BOOL)exclusivity transaction:(id /* block */)transaction;
- (id)description;
- (BOOL)createSnapshot:(id)snapshot;
- (unsigned int)userVersion;
- (BOOL)setUserVersion:(unsigned int)version;
- (BOOL)hasTableNamed:(id)named;
- (id)tablesWithColumnNamed:(id)named;
- (BOOL)hasColumnOnTable:(id)table named:(id)named;
- (BOOL)hasIndexNamed:(id)named;
- (unsigned long long)numberOfRowsInTable:(id)table;
- (BOOL)hasLockContention;
- (void)withDbLockExecuteBlock:(id /* block */)block;
- (id)languageForFTSTable:(id)ftstable;
- (BOOL)enableQueryPlanLoggingWithPath:(id)path;
- (void)disableQueryPlanLogging;
@end

#endif /* _PASSqliteDatabase_h */
