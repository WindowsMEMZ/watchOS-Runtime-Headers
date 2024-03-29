//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDProtectedDatabasePersistence_h
#define EDProtectedDatabasePersistence_h
@import Foundation;

#include "EDPersistenceDatabase.h"
#include "EDPersistenceDatabaseJournalManager.h"
#include "EDPersistenceHookRegistry.h"
#include "EFLoggable-Protocol.h"
#include "EFSignpostable-Protocol.h"

@class EFLocked, NSString;
@protocol OS_dispatch_queue;

@interface EDProtectedDatabasePersistence : NSObject<EFLoggable, EFSignpostable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _initializationLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reconciliationLock;
  EDPersistenceDatabase *_database;
}

@property (readonly, nonatomic) EDPersistenceDatabaseJournalManager *journalManager;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *reconciliationQueue;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL isReconciling;
@property (readonly, nonatomic) EFLocked *reconciliationMergeHandlers;
@property (readonly, nonatomic) BOOL supportsJournaling;
@property (readonly, nonatomic) BOOL protectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long signpostID;

/* class methods */
+ (id)log;
+ (id)signpostLog;
+ (id)protectedDatabaseName;
+ (id)journalDatabaseName;
+ (BOOL)_isRecoverableError:(id)error;
+ (unsigned long long)_resultForConnection:(id)connection success:(BOOL)success error:(id)error errorMessage:(id)message;

/* instance methods */
- (id)initWithBasePath:(id)path hookRegistry:(id)registry;
- (id)initWithJournalManager:(id)manager hookRegistry:(id)registry;
- (id)database;
- (void)setDatabase:(id)database;
- (void)attachProtectedOrJournalDatabaseToConnectionIfNecessary:(id)necessary withSchema:(id)schema;
- (void)detachProtectedOrJournalDatabaseFromConnectionIfNecessary:(id)necessary;
- (void)_ensureJournalIsAttachedToConnection:(id)connection withSchema:(id)schema;
- (void)_ensureProtectedDatabaseOrJournalIsAttachedToConnection:(id)connection withSchema:(id)schema;
- (BOOL)_attachProtectedDatabaseToConnection:(id)connection withSchema:(id)schema error:(id *)error;
- (void)_detachProtectedDatabaseFromConnection:(id)connection;
- (void)_attachJournalDatabaseToConnection:(id)connection withSchema:(id)schema;
- (void)_detachJournalDatabaseFromConnection:(id)connection;
- (BOOL)_initializeDatabase:(id)database withConnection:(id)connection schema:(id)schema error:(id *)error;
- (BOOL)_upgradeJournalWithConnection:(id)connection schema:(id)schema error:(id *)error;
- (BOOL)_updateSqliteSequenceForDatabase:(id)database schema:(id)schema withConnection:(id)connection error:(id *)error;
- (long long)_maxRowIDForColumn:(id)column withConnection:(id)connection;
- (BOOL)_performOnDemandReconciliationForConnection:(id)connection withSchema:(id)schema;
- (void)reconcileJournalsWithSchema:(id)schema completionBlock:(id /* block */)block;
- (unsigned long long)_reconcileJournalsWithSchema:(id)schema connection:(id)connection;
- (unsigned long long)_runReconciliationWithSchema:(id)schema connection:(id)connection;
- (unsigned long long)_mergeSchema:(id)schema connection:(id)connection journaledRows:(unsigned long long *)rows newRows:(unsigned long long *)rows;
- (unsigned long long)_mergeTable:(id)table connection:(id)connection journaledRows:(unsigned long long *)rows newRows:(unsigned long long *)rows;
- (unsigned long long)_deleteRowIDs:(id)ids fromJournal:(id)journal withConnection:(id)connection;
- (void)scheduleRecurringActivity;
- (id)_databaseIDsToDeleteForTable:(id)table;
- (void)_deleteDatabaseIDs:(id)ids fromTable:(id)table;
- (BOOL)_removeExistingDatabaseIDs:(id)ids withColumn:(id)column connection:(id)connection;
- (BOOL)_isJournalMalformedForSchema:(id)schema connection:(id)connection;
- (unsigned long long)_executeUpdateStatement:(id)statement onConnection:(id)connection errorMessage:(id)message;
- (unsigned long long)_executeStatementString:(id)string onConnection:(id)connection errorMessage:(id)message;
- (id)_allReferencingColumnsForTable:(id)table;
- (void)registerMergeHandler:(id)handler forTable:(id)table;
- (void)finishJournalReconciliation:(unsigned long long)reconciliation;
- (void)addAdditionalCriteriaToCleanupActivity:(id)activity;
- (void)test_tearDown;
@end

#endif /* EDProtectedDatabasePersistence_h */
