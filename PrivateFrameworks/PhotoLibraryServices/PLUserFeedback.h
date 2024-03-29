//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLUserFeedback_h
#define PLUserFeedback_h
@import Foundation;

#include "PLManagedObject.h"
#include "PLCloudDeletable-Protocol.h"
#include "PLFileSystemMetadataPersistence-Protocol.h"
#include "PLMemory.h"
#include "PLPerson.h"

@class NSDate, NSString;

@interface PLUserFeedback : PLManagedObject<PLCloudDeletable, PLFileSystemMetadataPersistence>

@property (@dynamic, nonatomic) NSString *uuid;
@property (@dynamic, nonatomic) short type;
@property (@dynamic, nonatomic) short feature;
@property (@dynamic, nonatomic) short creationType;
@property (retain, @dynamic, nonatomic) NSString *context;
@property (retain, @dynamic, nonatomic) NSDate *lastModifiedDate;
@property (retain, @dynamic, nonatomic) PLPerson *person;
@property (retain, @dynamic, nonatomic) PLMemory *memory;
@property (@dynamic, nonatomic) short cloudLocalState;
@property (@dynamic, nonatomic) short cloudDeleteState;
@property (readonly, nonatomic) NSString *detailedDescription;
@property (readonly) long long cloudDeletionType;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)entityName;
+ (id)_userFeedbacksMatchingPredicate:(id)predicate sortDescriptors:(id)descriptors limit:(long long)limit inManagedObjectContext:(id)context;
+ (id)insertIntoManagedObjectContext:(id)context withUUID:(id)uuid;
+ (id)insertIntoManagedObjectContext:(id)context withDictionaryRepresentation:(id)representation;
+ (id)userFeedbackWithUUID:(id)uuid inManagedObjectContext:(id)context;
+ (id)userFeedbacksWithUUIDs:(id)uuids inManagedObjectContext:(id)context;
+ (id)newestUserFeedbackInSet:(id)set;
+ (BOOL)shouldHandleCPLSuggestionChange:(id)change;
+ (id)updateUserFeedback:(id)feedback withCPLSuggestionChange:(id)change inManagedObjectContext:(id)context;
+ (id)userFeedbacksToUploadInManagedObjectContext:(id)context limit:(long long)limit;
+ (long long)cloudDeletionTypeForTombstone:(id)tombstone;
+ (id)cloudUUIDKeyForDeletion;

/* instance methods */
- (id)payloadID;
- (id)payloadForChangedKeys:(id)keys;
- (id)dictionaryRepresentation;
- (BOOL)_relationshipsInInvalidState;
- (BOOL)_validateRelationshipConstraintForInsert:(BOOL)insert error:(id *)error;
- (BOOL)_validateNonNilUUID:(id *)uuid;
- (BOOL)validateForInsert:(id *)insert;
- (BOOL)validateForUpdate:(id *)update;
- (void)prepareForDeletion;
- (BOOL)_isPersonFeatureAutonamingType;
- (BOOL)isSyncableChange;
- (BOOL)supportsCloudUpload;
- (id)cplFullRecord;
- (id)cplSuggestionChange;
- (id)_objectUsedForPersistence;
- (BOOL)isValidForPersistence;
- (void)persistMetadataToFileSystemWithPathManager:(id)manager;
- (void)removePersistedFileSystemDataWithPathManager:(id)manager;
@end

#endif /* PLUserFeedback_h */
