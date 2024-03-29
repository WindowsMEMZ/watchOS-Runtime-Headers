//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLFolderJournalEntryPayload_h
#define PLFolderJournalEntryPayload_h
@import Foundation;

#include "PLGenericAlbumJournalEntryPayload.h"

@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (readonly, nonatomic) BOOL isRootFolder;
@property (readonly, nonatomic) BOOL isProjectAlbumRootFolder;
@property (readonly, nonatomic) NSOrderedSet *childCollectionUUIDs;

/* class methods */
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (void)updateChildrenOrderingInFolder:(id)folder usingChildCollectionUUIDs:(id)uuids includePendingChanges:(BOOL)changes;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)dictionary additionalEntityName:(id)name;

/* instance methods */
- (BOOL)updatePayloadAttributes:(id)attributes andNilAttributes:(id)attributes withManagedObject:(id)object forPayloadProperty:(id)property;
- (void)appendAttributeKey:(id)key value:(id)value toDescriptionBuilder:(id)builder;
- (id)payloadValueFromAttributes:(id)attributes forPayloadProperty:(id)property;
- (id)insertAlbumFromDataInManagedObjectContext:(id)context;
- (void)updateAlbum:(id)album includePendingChanges:(BOOL)changes;
- (BOOL)comparePayloadValue:(id)value toObjectDictionaryValue:(id)value forPayloadProperty:(id)property;
@end

#endif /* PLFolderJournalEntryPayload_h */
