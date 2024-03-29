//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLImageWriter_h
#define PLImageWriter_h
@import Foundation;

#include "PLIndicatorFileCoordinator.h"
#include "PLLibraryServicesManager.h"

@class BOOL *, PLSimpleDCIMDirectory;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface PLImageWriter : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_jobQueue;
  NSObject<OS_dispatch_queue> *_jobCompletionQueue;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _jobCountLock;
  int _unfinishedJobsRequiringIndicatorCount;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _transactionLock;
  unsigned long long _transactionCounter;
  unsigned long long _crashRecoveryCounter;
  NSObject<OS_os_transaction> *_transaction;
  PLSimpleDCIMDirectory *_iTunesSyncedAssetsDCIMDirectory;
  PLIndicatorFileCoordinator *_indicatorFileCoordinator;
  PLLibraryServicesManager *_libraryServicesManager;
  struct atomic_flag { atomic  _Value; BOOL x0; } _isCrashRecoveryJobInProgress;
}

/* class methods */
+ (BOOL)_requiresIndicatorFileForJobType:(id)type;
+ (BOOL)_requiresAssetUUIDForJobType:(id)type;
+ (BOOL)_requiresCrashRecoveryForJobType:(id)type;
+ (BOOL)isSpatialOverCaptureURL:(id)url;
+ (BOOL)isDeferredPhotoPreviewURL:(id)url;
+ (id)finalizedAssetURLForDeferredPhotoPreviewURL:(id)url extension:(id)extension;
+ (id)semanticEnhancePreviewDestinationURLForPrimaryAssetURL:(id)url;
+ (id)cameraMetadataURLForPrimaryAssetURL:(id)url photoLibrary:(id)library;
+ (BOOL)semanticEnhanceSceneIsValid:(long long)valid;
+ (id)assetAdjustmentsFromCompositionController:(id)controller exportProperties:(id)properties;
+ (id)assetAdjustmentsFromCameraFilters:(id)filters portraitMetadata:(id)metadata exportProperties:(id)properties cameraMetadata:(id)metadata;
+ (id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)path exportProperties:(id)properties cameraMetadata:(id)metadata;
+ (id)assetAdjustmentsFromCameraAdjustments:(id)adjustments cameraMetadata:(id)metadata exportProperties:(id)properties applySemanticEnhance:(BOOL)enhance;
+ (id)assetAdjustmentsFromCameraAdjustments:(id)adjustments cameraMetadata:(id)metadata exportProperties:(id)properties;
+ (id)_assetAdjustmentsFromCameraAdjustments:(id)adjustments cameraMetadata:(id)metadata exportProperties:(id)properties assetType:(short)type applySemanticEnhance:(BOOL)enhance;
+ (id)assetAdjustmentsFromCameraAdjustmentData:(id)data cameraMetadata:(id)metadata exportProperties:(id)properties applySemanticEnhance:(BOOL)enhance;
+ (id)assetAdjustmentsFromCameraAdjustmentData:(id)data exportProperties:(id)properties;
+ (id)_assetAdjustmentsFromCameraAdjustmentData:(id)data cameraMetadata:(id)metadata exportProperties:(id)properties assetType:(short)type applySemanticEnhance:(BOOL)enhance;
+ (BOOL)setAdjustmentsForNewPhoto:(id)photo mainFileMetadata:(id)metadata cameraAdjustmentData:(id)data adjustmentDataPath:(id)path filteredImagePath:(id)path cameraMetadata:(id)metadata finalAssetSize:(struct CGSize { double x0; double x1; })size isSubstandardRender:(BOOL)render;
+ (id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)paths;
+ (id)_assetUUIDFromIncomingFilename:(id)filename;
+ (BOOL)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)type inIncomingFilenames:(id)filenames forAssetUUID:(id)uuid;
+ (void)setAdjustmentsForNewVideo:(id)video mainFileMetadata:(id)metadata withAdjustmentsDictionary:(id)dictionary cameraAdjustments:(id)adjustments renderedContentPath:(id)path renderedPosterFramePreviewPath:(id)path finalAssetSize:(struct CGSize { double x0; double x1; })size;
+ (id)pathComponentForIncomingHoldingDirectory;

/* instance methods */
- (id)init;
- (id)initWithLibraryServicesManager:(id)manager;
- (id)_newShortLivedLibraryWithName:(const char *)name;
- (BOOL)_isHighPriorityJob:(id)job;
- (BOOL)canEnqueueJob:(id)job;
- (id)indicatorFileCoordinator;
- (void)_incrementJobCount:(id)count;
- (void)_decrementJobCount:(id)count;
- (BOOL)_hasNonCrashRecoveryJobsEnqueued;
- (BOOL)enqueueJob:(id)job;
- (void)delayJob:(id)job delay:(long long)delay;
- (id)cameraAssetPathForNewAssetWithExtension:(id)extension assetUUID:(id)uuid;
- (id)pathForNewAssetWithDirectoryPath:(id)path fileName:(id)name extension:(id)extension;
- (id)_pathForNewAssetWithPath:(id)path withExtension:(id)extension;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)path assetType:(unsigned int)type extension:(id)extension;
- (void)_removeTransientKeys:(id)keys;
- (id)writeFilteredPreviewWithImageData:(id)data orImage:(id)image toPathWithBaseName:(id)name;
- (void)_linkDiagnosticFileWithSourcePath:(id)path forPhotoDestinationURL:(id)url;
- (void)_signalBackgroundProcessingNeededForAsset:(id)asset reason:(id)reason;
- (void)_processImageJob:(id)job inLibrary:(id)library completion:(id /* block */)completion;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(id)url;
- (id)_processLimitedLibraryAdditionIfNeededWithAssetUUID:(id)uuid clientBundleIdentifier:(id)identifier clientAuthorization:(id)authorization library:(id)library;
- (void)_processBatchImageJob:(id)job inLibrary:(id)library completion:(id /* block */)completion;
- (void)_processAvalancheJob:(id)job completion:(id /* block */)completion;
- (void)_processAvalanchesValidationJob:(id)job completion:(id /* block */)completion;
- (void)_processAutodeleteEmptyAlbumJob:(id)job completion:(id /* block */)completion;
- (void)_processDeletePhotoStreamDataJob:(id)job withReason:(id)reason completion:(id /* block */)completion;
- (void)_enablePhotoStreamJob:(id)job completion:(id /* block */)completion;
- (id)iTunesSyncedAssetsDCIMDirectory;
- (void)_resetSyncedAssetsDCIMDirectory;
- (void)processSyncSaveJob:(id)job library:(id)library albumMap:(id)map;
- (void)cleanupFilesInLibrary:(id)library afteriTunesSyncBeforeDate:(id)date;
- (void)_processSyncClientSaveJobsJob:(id)job completion:(id /* block */)completion;
- (void)_handleAvalancheCrashRecovery:(id)recovery;
- (void)_handleCameraMetadataCrashRecovery:(id)recovery;
- (id)_fetchPhotoAssetForUUID:(id)uuid moc:(id)moc;
- (void)_handlePhotoIrisCrashRecoveryForVideos:(id)videos;
- (void)_handleCameraAdjustments:(id)adjustments fullsizeRenders:(id)renders largeThumbnails:(id)thumbnails;
- (void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)files;
- (void)_photoIrisPairingDidSucceed:(BOOL)succeed fileIndicatorPath:(id)path photoAsset:(id)asset photoLibrary:(id)library;
- (BOOL)_enterAtomicCrashRecoveryJobProcessing;
- (void)_exitAtomicCrashRecoveryJobProcessing;
- (void)_processCrashRecoveryJob:(id)job completion:(id /* block */)completion;
- (void)_processDaemonJob:(id)job completion:(id /* block */)completion;
- (void)_processXPCDaemonJob:(id)job completion:(id /* block */)completion;
- (BOOL)_transferVideoFromIncomingPath:(id)path toDestinationPath:(id)path shouldRemoveIncoming:(BOOL *)incoming error:(id *)error;
- (BOOL)_retryPairedVideoJob:(id)job pairingType:(id)type pairingIdentifier:(id)identifier retryMax:(unsigned long long)max;
- (void)_processVideoJob:(id)job completion:(id /* block */)completion;
- (void)_processVideoSaveJob:(id)job completion:(id /* block */)completion;
- (void)_processSyncedVideoSaveJob:(id)job completion:(id /* block */)completion;
- (void)_processJob:(id)job;
- (BOOL)imageWriterJob:(id)job hasValidPathsWithConnection:(id)connection;
- (void)saveAssetJob:(id)job imageSurface:(id)surface previewImageSurface:(id)surface completionHandler:(id /* block */)handler;
- (void)enqueueAutoDeleteEmptyAlbumJobWithAlbumID:(id)id;
- (void)_copyJobContentsToHoldingDirectoryWithUUID:(id)uuid incomingPath:(id)path job:(id)job;
@end

#endif /* PLImageWriter_h */
