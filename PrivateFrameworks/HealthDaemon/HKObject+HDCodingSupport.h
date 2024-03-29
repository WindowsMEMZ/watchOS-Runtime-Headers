//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKObject_HDCodingSupport_h
#define HKObject_HDCodingSupport_h
@import Foundation;

@interface HKObject (HDCodingSupport)
/* class methods */
+ (Class)hd_dataEntityClass;
+ (id)hd_allObjectsToInsertWithObjects:(id)objects;

/* instance methods */
- (id)hd_sampleType;
- (Class)hd_dataEntityClass;
- (id)hd_associatedObjects;
- (id)hd_associatedSampleTypes;
- (id)hd_dataOriginProvenance;
- (long long)entityType;
- (id)hd_relatedJournalEntriesWithProfile:(id)profile;
- (BOOL)hd_insertRelatedDataWithPersistentID:(id)id insertionContext:(id)context profile:(id)profile transaction:(id)transaction error:(id *)error;
- (id)codableRepresentationForSync;
- (BOOL)addCodableRepresentationToCollection:(id)collection;
- (BOOL)addCodableRepresentationToCollectionForJournal:(id)journal;
- (BOOL)addCodableRepresentationToCollectionForSync:(id)sync;
@end

#endif /* HKObject_HDCodingSupport_h */
