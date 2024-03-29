//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSPersistentStore_h
#define NSPersistentStore_h
@import Foundation;

#include "NSPersistentStoreCoordinator.h"

@class BOOL *, NSDictionary, NSString, NSURL;

@interface NSPersistentStore : NSObject {
  /* instance variables */
  NSPersistentStoreCoordinator *_coordinator;
  NSURL *_url;
  id * _oidFactories;
  id _defaultFaultHandler;
  struct _objectStoreFlags { unsigned int x :1 isReadOnly; unsigned int x :1 cleanOnRemove; unsigned int x :1 isMDDirty; unsigned int x :29 _RESERVED; } _flags;
  void * _temporaryIDClass;
  id _coreSpotlightDelegate;
  id _managedObjectModel;
  struct __CFSet * _entitiesInConfiguration;
}

@property (readonly, weak, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, copy) NSString *configurationName;
@property (readonly) NSDictionary *options;
@property (retain) NSURL *URL;
@property (copy) NSString *identifier;
@property (readonly, copy) NSString *type;
@property BOOL readOnly;
@property (retain, nonatomic) NSDictionary *metadata;

/* class methods */
+ (Class)rowCacheClass;
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url sourceOptions:(id)options error:(id *)error;
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;
+ (BOOL)_rekeyPersistentStoreAtURL:(id)url options:(id)options withKey:(id)key error:(id *)error;
+ (BOOL)doURLStuff:(id)urlstuff createdStubFile:(BOOL *)file readOnly:(BOOL *)only error:(id *)error options:(id)options;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)to;
+ (id)cachedModelForPersistentStoreWithURL:(id)url options:(id)options error:(id *)error;
+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)metadataForPersistentStoreWithURL:(id)url error:(id *)error;
+ (BOOL)setMetadata:(id)metadata forPersistentStoreWithURL:(id)url error:(id *)error;
+ (Class)migrationManagerClass;

/* instance methods */
- (id)mirroringDelegate;
- (BOOL)isCloudKitEnabled;
- (id)_rawMetadata__;
- (BOOL)_isPersistentStoreAlive;
- (Class)_objectIDClass;
- (id)objectIDFactoryForEntity:(id)entity;
- (BOOL)load:(id *)load;
- (BOOL)_unload:(id *)_unload;
- (id)_persistentStoreCoordinator;
- (void)_preflightCrossCheck;
- (void)doFilesystemCleanupOnRemove:(BOOL)remove;
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;
- (BOOL)_prepareForExecuteRequest:(id)request withContext:(id)context error:(id *)error;
- (id)newValuesForObjectWithID:(id)id withContext:(id)context error:(id *)error;
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)id withContext:(id)context error:(id *)error;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)ids;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)ids generation:(id)generation;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)ids;
- (void)_mapsSyncDidUnregisterObjectsWithIDs_112229675:(id)ids_112229675;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)ids generation:(id)generation;
- (id)obtainPermanentIDsForObjects:(id)objects error:(id *)error;
- (BOOL)_isCloudKitOptioned;
- (id)_updatedMetadataWithSeed:(id)seed includeVersioning:(BOOL)versioning;
- (void)_setMetadataDirty:(BOOL)dirty;
- (void)_didLoadMetadata;
- (id)_storeInfoForEntityDescription:(id)description;
- (void)_setupObserver;
- (unsigned long long)entityIDForEntityDescription:(id)description;
- (id)propertyNamesInHistoryChangeDataForEntityDescription:(id)description;
- (BOOL)supportsConcurrentRequestHandling;
- (BOOL)supportsGenerationalQuerying;
- (BOOL)_hasActiveGenerations;
- (id)currentQueryGeneration;
- (void)freeQueryGenerationWithIdentifier:(id)identifier;
- (id)reopenQueryGenerationWithIdentifier:(id)identifier error:(id *)error;
- (id)currentChangeToken;
- (void)_rebuildIndiciesSynchronously:(BOOL)synchronously;
- (id)_newOrderedRelationshipInformationForRelationship:(id)relationship forObjectWithID:(id)id withContext:(id)context error:(id *)error;
- (id)_allOrderKeysForDestination:(id)destination inRelationship:(id)relationship error:(id *)error;
- (BOOL)finishDeferredLightweightMigration:(BOOL)migration withError:(id *)error;
- (struct __CFSet *)_entitiesForConfiguration;
- (id)ancillaryModels;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)coordinator configurationName:(id)name URL:(id)url options:(id)options;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (id)description;
- (BOOL)isReadOnly;
- (void)willRemoveFromPersistentStoreCoordinator:(id)coordinator;
- (void)didAddToPersistentStoreCoordinator:(id)coordinator;
- (BOOL)loadMetadata:(id *)metadata;
@end

#endif /* NSPersistentStore_h */
