//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLManagedObject_h
#define PLManagedObject_h
@import Foundation;

#include "NSManagedObject.h"
#include "PLJournalEntryPayloadUpdateAdapter-Protocol.h"
#include "PLPhotoLibrary.h"
#include "PLValidatedManagedObject-Protocol.h"

@class NSString, PLPhotoLibraryPathManager;

@interface PLManagedObject : NSManagedObject<PLJournalEntryPayloadUpdateAdapter, PLValidatedManagedObject>

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) BOOL isRegisteredWithUserInterfaceContext;
@property (readonly, copy, nonatomic) NSString *shortObjectIDURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)context;
+ (id)entityInManagedObjectContext:(id)context;
+ (id)attributeValidationRules;
+ (id)objectIDDescription;

/* instance methods */
- (id)duplicateSortPropertyNames;
- (id)duplicateSortPropertyNamesSkip;
- (id)managedObject;
- (BOOL)isValidForJournalPersistence;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)keys;
- (id)payloadIDForTombstone:(id)tombstone;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (id)payloadsForChangedKeys:(id)keys;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)keys;
- (BOOL)supportsCloudUpload;
- (BOOL)isSyncableChange;
- (void)willSave;
- (void)pl_safeSetValue:(id)value forKey:(id)key valueDidChangeHandler:(id /* block */)handler;
@end

#endif /* PLManagedObject_h */
