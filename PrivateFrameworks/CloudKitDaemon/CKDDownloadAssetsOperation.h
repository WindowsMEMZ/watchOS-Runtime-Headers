//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDDownloadAssetsOperation_h
#define CKDDownloadAssetsOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"
#include "CKDCancelTokenGroup.h"
#include "CKDMMCS.h"

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation

@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (retain, nonatomic) NSArray *packageIndexSets;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;
@property (copy) NSArray *MMCSItemsToDownload;
@property (retain, nonatomic) NSMutableArray *MMCSItemsToDownloadInMemory;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoder;
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoderInMemory;
@property (retain, nonatomic) NSMapTable *downloadTasksByPackages;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (nonatomic) unsigned long long maxPackageDownloadsPerBatch;
@property (retain, nonatomic) CKDMMCS *mmcs;
@property (nonatomic) BOOL shouldCloneFileInAssetCache;
@property (copy, nonatomic) id /* block */ downloadPreparationBlock;
@property (copy, nonatomic) id /* block */ downloadProgressBlock;
@property (copy, nonatomic) id /* block */ downloadCommandBlock;
@property (copy, nonatomic) id /* block */ downloadCompletionBlock;
@property (copy, nonatomic) id /* block */ urlFilledOutBlock;
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (id)CKStatusReportLogGroups;
- (BOOL)makeStateTransition;
- (void)_removeUntrackedMMCSItems:(id)mmcsitems;
- (void)_didPrepareAsset:(id)asset;
- (void)_didMakeProgressForAsset:(id)asset progress:(double)progress;
- (void)_didCommandForAsset:(id)asset command:(id)command;
- (void)_didDownloadAsset:(id)asset error:(id)error;
- (id)_tryToFillInTheDerivativeTemplateWithAsset:(id)asset;
- (BOOL)_prepareForDownload;
- (void)_didDownloadMMCSItem:(id)mmcsitem inMemory:(BOOL)memory error:(id)error;
- (void)_collectMetricsFromMMCSOperationMetrics:(id)metrics;
- (void)_collectMetricsFromCompletedItemGroup:(id)group;
- (void)_collectMetricsFromCompletedItemGroupSet:(id)set;
- (void)_didDownloadMMCSItems:(id)mmcsitems inMemory:(BOOL)memory error:(id)error;
- (void)_didMakeProgressForMMCSItem:(id)mmcsitem inMemory:(BOOL)memory;
- (void)_didCommandForMMCSItem:(id)mmcsitem command:(id)command;
- (void)_didDownloadMMCSSectionItem:(id)item task:(id)task error:(id)error;
- (void)_didDownloadMMCSSectionItems:(id)items task:(id)task error:(id)error;
- (void)_didMakeProgressForMMCSSectionItem:(id)item task:(id)task;
- (void)_downloadPackageSectionAtIndex:(long long)index task:(id)task completionBlock:(id /* block */)block;
- (void)_downloadPackageSectionsWithSectionEnumerator:(id)enumerator task:(id)task completionBlock:(id /* block */)block;
- (void)_downloadPackageSectionsWithTask:(id)task completionBlock:(id /* block */)block;
- (void)_downloadPackageSectionsWithPendingTasks:(id)tasks downloadingTasks:(id)tasks completedTasks:(id)tasks;
- (BOOL)_download;
- (void)_downloadMMCSItems:(id)mmcsitems downloadTasksByPackages:(id)packages shouldFetchAssetContentInMemory:(BOOL)memory;
- (BOOL)_postProcess;
- (void)cancel;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (void)main;
- (BOOL)supportsClearAssetEncryption;
- (BOOL)shouldDownloadAssetFromTranscoder:(id)transcoder;
- (void)_downloadTranscodedAsset:(id)asset inMemory:(BOOL)memory;
@end

#endif /* CKDDownloadAssetsOperation_h */
