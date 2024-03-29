//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLEngineCloudCache_h
#define CPLEngineCloudCache_h
@import Foundation;

#include "CPLEngineStorage.h"
#include "CPLAbstractObject-Protocol.h"
#include "CPLPlatformObject.h"

@class BOOL *, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage<CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:(long long)index maxCount:(long long)count deletedCount:(long long *)count error:(id *)error;
- (id)_invalidCloudCacheErrorWithInvalidRecord:(id)record method:(id)method;
- (BOOL)addRecord:(id)record isFinal:(BOOL)final error:(id *)error;
- (BOOL)updateFinalRecord:(id)record confirmed:(BOOL)confirmed error:(id *)error;
- (BOOL)updateStagedRecord:(id)record error:(id *)error;
- (BOOL)applyBatch:(id)batch isFinal:(BOOL)final direction:(unsigned long long)direction withError:(id *)error;
- (id)cloudChangeBatchFromBatch:(id)batch usingMapping:(id)mapping isFinal:(BOOL)final withError:(id *)error;
- (BOOL)confirmAllRecordsWithError:(id *)error;
- (BOOL)deleteRecordWithScopedIdentifier:(id)identifier isFinal:(BOOL)final error:(id *)error;
- (id)recordWithScopedIdentifier:(id)identifier isFinal:(BOOL)final;
- (id)recordWithScopedIdentifier:(id)identifier isConfirmed:(BOOL *)confirmed isStaged:(BOOL *)staged;
- (BOOL)hasRecordWithScopedIdentifier:(id)identifier;
- (BOOL)hasAnyRecordWithRelatedScopedIdentifier:(id)identifier;
- (id)recordsWithRelatedScopedIdentifier:(id)identifier isFinal:(BOOL)final;
- (id)recordsWithRelatedScopedIdentifier:(id)identifier class:(Class)class isFinal:(BOOL)final;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)identifier isFinal:(BOOL)final;
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)identifier;
- (BOOL)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)identifier;
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)identifier class:(Class)class;
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)identifier class:(Class)class;
- (BOOL)ackownledgeRecordWithScopedIdentifier:(id)identifier error:(id *)error;
- (BOOL)remapAllRecordsWithPreviousScopedIdentifier:(id)identifier newScopedIdentifier:(id)identifier error:(id *)error;
- (BOOL)commitStagedChangesForScopeWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)discardStagedChangesForScopeWithIdentifier:(id)identifier error:(id *)error;
- (BOOL)discardStagedChangesWithScopeFilter:(id)filter error:(id *)error;
- (id)_otherScopedIdentifierForCloudScopedIdentifier:(id)identifier sharedScoped:(id)scoped;
- (id)_targetWithShareableRecord:(id)record cloudScopedIdentifier:(id)identifier otherScopedIdentifier:(id)identifier sharedScope:(id)scope trustRecordChangeData:(BOOL)data;
- (id)_targetWithRecord:(id)record cloudScopedIdentifier:(id)identifier trustRecordChangeData:(BOOL)data;
- (id)targetForRecordWithCloudScopedIdentifier:(id)identifier;
- (id)targetForRecordWithCloudScopedIdentifier:(id)identifier trustRecordChangeData:(BOOL)data;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)identifier;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)identifier trustRecordChangeData:(BOOL)data;
- (void)updateStoredTargetsFromTargetMapping:(id)mapping;
- (id)resourceOfType:(unsigned long long)type forRecordWithScopedIdentifier:(id)identifier record:(id *)record target:(id *)target error:(id *)error;
- (void)getCommittedRecord:(id *)record stagedRecord:(id *)record forScopedIdentifier:(id)identifier;
- (id)recordsOfClass:(Class)class isFinal:(BOOL)final;
- (id)allRecordsIsFinal:(BOOL)final;
@end

#endif /* CPLEngineCloudCache_h */
