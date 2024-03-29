//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSCloudKitHelper_h
#define AXSSCloudKitHelper_h
@import Foundation;

#include "APSConnectionDelegate-Protocol.h"

@class APSConnection, CKContainer, CKDatabase, CKRecordZone, CKRecordZoneSubscription, NSError, NSManagedObjectContext, NSMutableArray, NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXSSCloudKitHelper : NSObject<APSConnectionDelegate> {
  /* instance variables */
  NSMutableArray *_accumulatedQueuedData;
}

@property (readonly, weak, nonatomic) NSPersistentStore *observedStore;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *observedCoordinator;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) CKRecordZoneSubscription *zoneSubscription;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudkitQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (readonly, nonatomic) APSConnection *apsConnection;
@property (readonly, nonatomic) NSError *lastInitializationError;
@property (readonly, nonatomic) NSURL *largeBlobDirectoryURL;
@property (nonatomic) BOOL observeLocalDatabaseChanges;
@property (nonatomic) BOOL isProtectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)recordType;
- (id)initWithContainerIdentifier:(id)identifier zoneName:(id)name;
- (void)dealloc;
- (Class)managedObjectClass;
- (void)observeChangesForManagedContext:(id)context;
- (void)_initializeCloudkitForObservedStore;
- (BOOL)_checkAccountStatus:(id *)status;
- (id)zoneCreatedKey;
- (id)zoneSubscriptionKey;
- (BOOL)_createZoneIfNecessary:(id *)necessary;
- (id)testRecordForSchemaCreation:(id)creation;
- (BOOL)_createSchemaIfNecessary:(id *)necessary;
- (BOOL)_setupZoneSubscriptionIfNecessary:(id *)necessary;
- (void)beginWatchingForChanges;
- (void)openTransactionWithLabel:(id)label andExecuteWorkBlock:(id /* block */)block;
- (BOOL)shouldExportManagedObject:(id)object;
- (id)createCKRecordFromObject:(id)object;
- (void)processServerUpdateChanges:(id)changes moc:(id)moc recordNameToManagedObject:(id)object;
- (void)processRecordDeletionsFromServer:(id)server;
- (id)serverChangeTokenMetadataKey;
- (id)cloudKitPushTopic;
- (void)fetchChangesAndUpdateObservedStore;
- (void)_processAccumulatedQueueData;
- (void)processAccumulatedChangesForServerChangeToken:(id)token withAccumulatedUpdates:(id)updates andDeletes:(id)deletes inTransaction:(id)transaction;
- (void)retrieveLocalChangesForCloud:(id /* block */)cloud;
- (void)clearRecordsForPurging:(id)purging;
- (void)processLocalChangesAndPush;
- (void)logMessage:(id)message;
- (id)apsEnvironment;
- (BOOL)_setupPushConnection:(id *)connection;
- (void)connection:(id)connection didReceivePublicToken:(id)token;
- (void)connection:(id)connection didReceiveToken:(id)token forTopic:(id)topic identifier:(id)identifier;
- (void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
- (void)managedObjectContextDidSave:(id)save;
- (void)_setObservedStore:(id)store observedCoordinator:(id)coordinator;
- (void)_setDatabase:(id)database;
- (void)_setContainer:(id)container;
- (void)_setApsConnection:(id)connection;
@end

#endif /* AXSSCloudKitHelper_h */
