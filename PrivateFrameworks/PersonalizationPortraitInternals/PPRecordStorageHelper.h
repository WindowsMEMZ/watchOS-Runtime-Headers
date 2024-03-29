//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPRecordStorageHelper_h
#define PPRecordStorageHelper_h
@import Foundation;

#include "PPDKStorage.h"
#include "PPSourceStorage.h"

@class BOOL *, NSString, _DKEventStream;

@interface PPRecordStorageHelper : NSObject {
  /* instance variables */
  NSString *_table;
  NSString *_feedbackTable;
  NSString *_clusterIdentifierColumn;
  unsigned int _maxRecords;
  PPDKStorage *_duetStorage;
  _DKEventStream *_duetStream;
  NSString *_lastDuetImportDateKey;
  NSString *_lastDuetDeletionDateKey;
  PPSourceStorage *_sourceStorage;
}

/* instance methods */
- (id)init;
- (id)initWithName:(id)name table:(id)table clusterIdentifierColumn:(id)column maxRecords:(unsigned int)records duetStorage:(id)storage duetStream:(id)stream sourceStorage:(id)storage;
- (id)blobFromUUID:(id)uuid;
- (id)uuidForStatement:(id)statement columnName:(const char *)name tableName:(const char *)name;
- (BOOL)clearWithDatabase:(id)database client:(unsigned char)client deletedCount:(unsigned long long *)count error:(id *)error clearExternalTableReferences:(id /* block */)references;
- (id)decayedFeedbackCountsForItemString:(id)string database:(id)database client:(unsigned char)client;
- (BOOL)storeFeedback:(id)feedback database:(id)database client:(unsigned char)client lowercaseItemStrings:(BOOL)strings limit:(unsigned int)limit;
- (BOOL)decayFeedbackWithDatabase:(id)database client:(unsigned char)client decayRate:(double)rate;
- (void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)count txnWitness:(id)witness;
- (id)rowIdsForRecordsToDropMakingRoomForCount:(unsigned int)count txnWitness:(id)witness;
- (id /* block */)duetEventDeletionProcessingBlockWithDatabase:(id)database client:(unsigned char)client;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)block database:(id)database client:(unsigned char)client;
- (void)importDuetEventsWithLimit:(unsigned int)limit database:(id)database client:(unsigned char)client remoteEventsOnly:(BOOL)only isComplete:(BOOL *)complete shouldContinueBlock:(id /* block */)block eventImportBlock:(id /* block */)block;
- (void)disableSyncForBundleIds:(id)ids txnWitness:(id)witness;
- (BOOL)deleteAllRecordsWithClusterIdentifier:(id)identifier txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsWithClusterIdentifier:(id)identifier algorithm:(unsigned int)algorithm txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsWithName:(id)name algorithm:(unsigned int)algorithm bundleId:(id)id groupId:(id)id category:(unsigned int)category beforeDate:(id)date txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id documentIds:(id)ids txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id documentIds:(id)ids algorithm:(unsigned int)algorithm txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id groupIds:(id)ids txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id groupIds:(id)ids algorithm:(unsigned int)algorithm txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id algorithm:(unsigned int)algorithm txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id groupId:(id)id olderThanDate:(id)date txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (BOOL)deleteAllRecordsSourcedFromBundleId:(id)id groupId:(id)id olderThanDate:(id)date algorithm:(unsigned int)algorithm txnWitness:(id)witness atLeastOneRecordClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count error:(id *)error;
- (void)deleteAllRemoteRecordsMissingInDuetFromDatabase:(id)database client:(unsigned char)client shouldContinueBlock:(id /* block */)block;
- (BOOL)deleteFeedbackCountRecordsOlderThanDate:(id)date txnWitness:(id)witness;
- (BOOL)pruneOrphanedFeedbackCountRecordsWithLimit:(unsigned long long)limit rowOffset:(unsigned long long)offset deletedCount:(unsigned long long *)count txnWitness:(id)witness isComplete:(BOOL *)complete;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)id documentIds:(id)ids txnWitness:(id)witness;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)id groupIds:(id)ids txnWitness:(id)witness;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)id txnWitness:(id)witness;
- (id)rowIdsForRecordsSourcedFromBundleId:(id)id exactMatchGroupId:(id)id olderThanDate:(id)date txnWitness:(id)witness;
- (id)rowIdsForRecordsOlderThanDate:(id)date txnWitness:(id)witness;
- (void)deleteRecordsForRowIds:(id)ids txnWitness:(id)witness atLeastOneClusterRemoved:(BOOL *)removed deletedCount:(unsigned long long *)count;
- (BOOL)fixupDKEventsWithDatabase:(id)database fixup49995922Table:(id)table batchSize:(unsigned int)size shouldContinueBlock:(id /* block */)block createRecordWithStatement:(id /* block */)statement eventForRecord:(id /* block */)record;
- (unsigned int)distinctClusterCountInDatabase:(id)database client:(unsigned char)client;
- (id)clusterIdentifiersExistingInDatabaseBeforeDate:(id)date client:(unsigned char)client date:(id)date;
- (id)thirdPartyBundleIdsFromTodayInDatabase:(id)database client:(unsigned char)client;
- (id)lastDonationTimeForSourcesInDatabase:(id)database client:(unsigned char)client before:(id)before;
- (id)firstDonationSourceCountsForDatabase:(id)database client:(unsigned char)client shouldContinueBlock:(id /* block */)block;
@end

#endif /* PPRecordStorageHelper_h */
