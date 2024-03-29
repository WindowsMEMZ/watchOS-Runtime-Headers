//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDCKCacheDeleteManager_h
#define IMDCKCacheDeleteManager_h
@import Foundation;

@interface IMDCKCacheDeleteManager : NSObject

@property (nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture;
@property (nonatomic) BOOL allowsWritingToDisk;
@property (nonatomic) BOOL deviceLowOnDiskSpace;
@property (nonatomic) BOOL isUsingCentralizedModel;
@property BOOL isUpdatingAttachmentFileSizes;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)_ckUtilitiesSharedInstance;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)activity;
- (void)updateAttachmentFileSizesWithActivity:(id)activity;
- (void)registerWithCacheDelete;
- (void)_cacheDeleteSetUp;
- (void)resetAttachmentWatermark;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)id diskVolume:(id)volume urgency:(int)urgency requestedSize:(unsigned long long)size;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)size refreshCachedValue:(BOOL)value;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)size refreshCachedValue:(BOOL)value;
- (id)reportAvailableSpaceToBeDeleted:(id)deleted urgency:(int)urgency;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)deleted urgency:(int)urgency;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)attachments urgency:(int)urgency;
- (BOOL)canMarkPurgeableIfIsRichLinkForTransferGUID:(id)guid;
- (id)_copyAttachmentRecord:(id)record;
- (long long)_purgeableSpaceGivenUrgency:(int)urgency;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)deleted;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)callback urgency:(int)urgency;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)callback urgency:(int)urgency;
- (void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)callback;
- (BOOL)isUsingCentralizeCacheDelete;
- (long long)purgeableAttachmentSize;
- (long long)purgeAttachments:(long long)attachments;
- (id)_fileTransfersToDelete:(id)delete;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)transfers;
- (void)_postTransferInfoOfDeletedTransfers:(id)transfers;
- (void)metricAttachmentsToPurge:(long long)purge withActivity:(id)activity;
- (id)_fileTransfersToValidate:(id)validate;
- (void)_fetchTransfersFromCloudKit:(id)kit withActivity:(id)activity;
- (id)_getIndexSetForBatch:(id)batch indexOfTransfers:(unsigned long long)transfers;
- (unsigned long long)_indexOfNextBatch:(id)batch totalTransfers:(id)transfers indexOfTransfers:(unsigned long long)transfers;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)batch totalTransfers:(id)transfers;
- (void)_fetchTransfersFromCloudKit:(id)kit indexOfTransfers:(unsigned long long)transfers numberOfBatchesToFetch:(unsigned long long)fetch activity:(id)activity withCompletion:(id /* block */)completion;
- (BOOL)isDeviceLowOnDiskSpace;
@end

#endif /* IMDCKCacheDeleteManager_h */
