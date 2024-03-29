//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKCoreDataStorage_h
#define _DKCoreDataStorage_h
@import Foundation;

#include "_DKCoreDataStorageDelegate-Protocol.h"
#include "_DKDataProtectionStateMonitor.h"

@class NSCloudKitMirroringDelegate, NSFileManager, NSManagedObjectModel, NSMapTable, NSMutableDictionary, NSString, NSURL;

@interface _DKCoreDataStorage : NSObject {
  /* instance variables */
  NSManagedObjectModel *_managedObjectModel;
  NSMutableDictionary *_paths;
  NSMapTable *_managedObjectContexts;
  NSMutableDictionary *_persistentStoreCoordinators;
  _DKDataProtectionStateMonitor *_dataProtectionMonitor;
  NSFileManager *_fm;
  BOOL _isManagedDatabase;
  BOOL _isDatabaseManager;
  BOOL _maintenanceRunning;
}

@property (readonly) NSString *directory;
@property (readonly) BOOL readOnly;
@property (readonly) BOOL localOnly;
@property (readonly) BOOL sync;
@property (readonly) NSURL *modelURL;
@property (readonly) NSString *databaseName;
@property (weak) NSObject<_DKCoreDataStorageDelegate> *delegate;
@property (readonly) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (readonly) NSString *containerIdentifier;
@property (nonatomic) BOOL requiresManualMigration;

/* class methods */
+ (unsigned long long)deleteObjectsInContext:(id)context entityName:(id)name predicate:(id)predicate sortDescriptors:(id)descriptors fetchLimit:(unsigned long long)limit includeSubentities:(BOOL)subentities includePendingChanges:(BOOL)changes;
+ (unsigned long long)deleteObjectsInContext:(id)context entityName:(id)name predicate:(id)predicate sortDescriptors:(id)descriptors fetchOffset:(unsigned long long)offset fetchLimit:(unsigned long long)limit includeSubentities:(BOOL)subentities includePendingChanges:(BOOL)changes;
+ (unsigned long long)countObjectsInContext:(id)context entityName:(id)name predicate:(id)predicate includeSubentities:(BOOL)subentities includePendingChanges:(BOOL)changes;
+ (unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)total context:(id)context entityName:(id)name predicate:(id)predicate sortDescriptors:(id)descriptors fetchLimit:(unsigned long long)limit includeSubentities:(BOOL)subentities includePendingChanges:(BOOL)changes;
+ (unsigned long long)deleteOrphanedEntitiesInContext:(id)context;
+ (unsigned long long)updateObjectsInContext:(id)context entityName:(id)name predicate:(id)predicate sortDescriptors:(id)descriptors batchFetchLimit:(unsigned long long)limit totalFetchLimit:(unsigned long long)limit includeSubentities:(BOOL)subentities updateBlock:(id /* block */)block;
+ (unsigned long long)anonymizeStringAttributesOfManagedObject:(id)object withSalt:(id)salt;
+ (unsigned long long)anonymizeObjectStringsInContext:(id)context entityName:(id)name predicate:(id)predicate sortDescriptors:(id)descriptors batchFetchLimit:(unsigned long long)limit totalFetchLimit:(unsigned long long)limit includeSubentities:(BOOL)subentities salt:(id)salt;

/* instance methods */
- (id)init;
- (id)initWithDirectory:(id)directory databaseName:(id)name modelURL:(id)url readOnly:(BOOL)only localOnly:(BOOL)only;
- (id)initWithDirectory:(id)directory databaseName:(id)name modelURL:(id)url sync:(BOOL)sync;
- (void)dealloc;
- (void)closeStorageForProtectionClass:(id)class;
- (id)managedObjectModel;
- (void)setManagedObjectModel:(id)model;
- (BOOL)isManagedObjectModel:(id)model compatibleWithPersistentStoreAtURL:(id)url error:(id *)error;
- (id)managedObjectModelURLForVersion:(unsigned long long)version;
- (id)managedObjectModelForVersion:(unsigned long long)version;
- (long long)modelVersionForStoreAtURL:(id)url error:(id *)error;
- (BOOL)migratePersistentStoreAtURL:(id)url toManagedObjectModel:(id)model protectionClass:(id)class error:(id *)error;
- (id)persistentStoreCoordinatorFor:(id)for;
- (id)managedObjectContextFor:(id)for;
- (id)managedObjectContextFor:(id)for identifier:(id)identifier;
- (id)privateManagedObjectContextFor:(id)for;
- (BOOL)isManagedObjectContextFor:(id)for equalToManagedObjectContext:(id)context;
- (BOOL)confirmDatabaseConnectionFor:(id)for;
- (BOOL)deleteStorageFor:(id)for;
- (id)copyStorageFor:(id)for toDirectory:(id)directory;
@end

#endif /* _DKCoreDataStorage_h */
