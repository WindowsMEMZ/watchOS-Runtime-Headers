//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLBeforeUploadCheckItems_h
#define CPLBeforeUploadCheckItems_h
@import Foundation;

#include "CPLBeforeUploadCheckItemsProvider-Protocol.h"
#include "CPLChangeBatch.h"
#include "CPLRecordTargetMapping.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@interface CPLBeforeUploadCheckItems : NSObject {
  /* instance variables */
  NSDictionary *_items;
  NSDictionary *_foundRecords;
  NSMutableDictionary *_nonAssetsWithResourcesToUpload;
  NSMutableDictionary *_assetsWithResourcesToUpload;
  NSMutableDictionary *_additionalRecords;
}

@property (readonly, nonatomic) CPLChangeBatch *originalBatch;
@property (readonly, nonatomic) CPLRecordTargetMapping *targetMapping;
@property (readonly, nonatomic) NSObject<CPLBeforeUploadCheckItemsProvider> *provider;
@property (readonly, nonatomic) long long ruleGroups;
@property (readonly, nonatomic) unsigned long long pushRepositoryPriority;
@property (copy, nonatomic) NSString *sharingScopeIdentifier;
@property (nonatomic) BOOL shouldCheckOverQuotaChangesWithServer;
@property (readonly, nonatomic) NSArray *recordsToFetch;
@property (readonly, nonatomic) NSArray *fetchRules;
@property (readonly, nonatomic) NSArray *recordsNeedingGeneratedDerivatives;
@property (readonly, nonatomic) NSDictionary *itemsToReinject;
@property (readonly, nonatomic) CPLChangeBatch *batchToUpload;
@property (readonly, nonatomic) BOOL shouldResetExceedingQuotaOnSuccessfulUpload;
@property (readonly, nonatomic) unsigned long long countOfAssetsWithResourcesToUpload;
@property (readonly, nonatomic) unsigned long long estimatedUploadResourceSize;
@property (readonly, nonatomic) BOOL willUploadSomeResources;
@property (readonly, nonatomic) BOOL hasDroppedSomeResources;

/* instance methods */
- (id)initWithBatch:(id)batch targetMapping:(id)mapping ruleGroups:(long long)groups pushRepositoryPriority:(unsigned long long)priority provider:(id)provider;
- (BOOL)prepareBatchBeforeUploadWithError:(id *)error;
- (BOOL)checkBatchWithFoundRecords:(id)records error:(id *)error;
- (BOOL)requestFetchOfRecordWithScopedIdentifier:(id)identifier forItem:(id)item rule:(id)rule error:(id *)error;
- (id)willUploadCloudResource:(id)resource localResource:(id)resource forItem:(id)item error:(id *)error;
- (void)itemWillDropResourceChange:(id)change;
- (void)itemShouldBeReinjectedInPushRepository:(id)repository;
- (BOOL)transportHasRecordWithScopedIdentifier:(id)identifier;
- (id)recordFromTransportWithScopedIdentifier:(id)identifier;
- (void)addAdditionalRecordWithScopedIdentifierToUploadBatch:(id)batch;
- (id)itemWithScopedIdentifier:(id)identifier;
@end

#endif /* CPLBeforeUploadCheckItems_h */
