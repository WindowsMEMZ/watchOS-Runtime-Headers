//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPersonJournalEntryPayload_h
#define PLPersonJournalEntryPayload_h
@import Foundation;

#include "PLManagedObjectJournalEntryPayload.h"

@class NSDictionary, NSNumber, NSString;

@interface PLPersonJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (readonly, nonatomic) NSNumber *detectionType;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *personUri;
@property (readonly, nonatomic) unsigned int manualOrder;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int verifiedType;
@property (readonly, nonatomic) int cloudVerifiedType;
@property (readonly, nonatomic) short keyFacePickSource;
@property (readonly, nonatomic) NSDictionary *contactMatchingDictionary;
@property (readonly, nonatomic) NSString *mergeTargetPersonUUID;

/* class methods */
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)uuidmapping fromDataInManagedObjectContext:(id)context;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)dictionary additionalEntityName:(id)name;

/* instance methods */
- (id)insertPersonFromDataInManagedObjectContext:(id)context;
- (id)initWithUserFeedback:(id)feedback changedKeys:(id)keys;
- (BOOL)updatePayloadAttributes:(id)attributes andNilAttributes:(id)attributes withManagedObject:(id)object forPayloadProperty:(id)property;
- (void)appendAttributeKey:(id)key value:(id)value toDescriptionBuilder:(id)builder;
- (id)payloadValueFromAttributes:(id)attributes forPayloadProperty:(id)property;
- (void)applyPayloadProperty:(id)property toManagedObject:(id)object key:(id)key payloadAttributesToUpdate:(id)update;
- (BOOL)comparePayloadValue:(id)value toObjectDictionaryValue:(id)value forPayloadProperty:(id)property;
@end

#endif /* PLPersonJournalEntryPayload_h */
