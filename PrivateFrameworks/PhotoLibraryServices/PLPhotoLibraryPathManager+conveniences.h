//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoLibraryPathManager_conveniences_h
#define PLPhotoLibraryPathManager_conveniences_h
@import Foundation;

@interface PLPhotoLibraryPathManager (conveniences)
/* class methods */
+ (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)extension appropriateForURL:(id)url;
+ (id)defaultDeferredRenderFileFormatTypeIdentifier;
+ (id)defaultDeferredRenderFileFormatTypeIdentifierForHDR;

/* instance methods */
- (BOOL)sqliteErrorIndicatorFileExists;
- (id)_rebuildDateFormatter;
- (BOOL)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)reason;
- (void)removeSqliteErrorIndicatorFile;
- (void)_abortWithRebuildReasonPLRebuildReasonSimulatedCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonStagedDemoContentInstallation;
- (void)_abortWithRebuildReasonPLRebuildReasonLightweightMigration;
- (void)_abortWithRebuildReasonPLRebuildReasonUnknown;
- (void)_abortWithRebuildReasonPLRebuildReasonCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveRecoveryAttempts;
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyOrphanedRecords;
- (void)_abortWithRebuildReasonPLRebuildReasonUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonDatabaseCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyThumbnailRebuilds;
- (void)_abortWithRebuildReasonPLRebuildReasonUpgradeForceRebuild;
- (void)_abortWithRebuildReasonPLRebuildReasonMPSPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumPathCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonMPSUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessivePersistentHistorySize;
- (void)_abortWithRebuildReasonPLRebuildReasonBackgroundMigration;
- (void)_abortWithRebuildReasonPLRebuildReasonPersonUUIDCorruption;
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveOrphanedSceneClassifications;
- (void)setSqliteErrorForRebuildReason:(long long)reason allowsExit:(BOOL)exit;
- (long long)lastRebuildReason;
- (id)recordRebuildReason;
- (BOOL)isSystemPhotoLibraryPathManager;
- (id)_dcimAssetPathForResourceDirectoryPathType:(unsigned char)type directory:(id)directory filename:(id)filename;
- (id)assetPathForMutationsDirectoryWithDirectory:(id)directory filename:(id)filename;
- (id)assetPathForComputeDirectoryWithDirectory:(id)directory filename:(id)filename;
- (id)URLForMetadataWithExtension:(id)extension forMediaInMainDirectory:(id)directory withFilename:(id)filename;
- (id)photoStreamsDataDirectory;
- (id)searchIndexDirectory;
- (id)searchIndexDatabaseFilePath;
- (id)searchIndexSystemInfoFilePath;
- (id)searchIndexMetadataStoreFilePath;
- (id)searchIndexProgressFilePath;
- (id)searchIndexZeroKeywordStoreFilePath;
- (id)searchIndexGraphDataProgressFilePath;
- (id)searchIndexSynonymsFilePath;
- (id)searchIndexSpotlightProgressFilePath;
- (id)searchIndexSpotlightPrivateIndexDirectory;
- (id)searchIndexStatusFilePath;
- (id)deletedMemoryUUIDsFilePath;
- (id)cplDataDirectoryCreateIfNeeded:(BOOL)needed;
- (id)enableICloudPhotosFilePath;
- (id)pauseICloudPhotosFilePath;
- (id)disableICloudPhotosFilePath;
- (id)forceSoftResetSyncPath;
- (id)wipeCPLOnOpenPath;
- (id)cplEnableMarkerFilePath;
- (id)cplDownloadFinishedMarkerFilePath;
- (id)cplLocalModeEnabledMarkerFilePathForReading;
- (id)cplLocalModeEnabledMarkerFilePathForWriting;
- (id)_cplLocalModeEnabledMarkerFilePathCreateIfNeeded:(BOOL)needed;
- (BOOL)removeCPLDataDirectory;
- (id)cloudServiceEnableLogFileURL;
- (id)directoryPathForInFlightComments:(BOOL)comments;
- (id)cloudSharingArchiveDirectory;
- (id)URLForPartialVideoWithResourceFingerprint:(id)fingerprint assetUUID:(id)uuid timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range;
- (id)URLForPartialVideoDirectoryWithAssetUUID:(id)uuid;
- (BOOL)removePartialVideoDirectory;
- (BOOL)removeComputeDirectory;
- (id)assetCreationHoldingDirectory;
- (id)assetCreationHoldingDirectoryForAssetUUID:(id)uuid;
- (void)cleanupOutboundSharingFilesWithExpiryInterval:(double)interval;
- (BOOL)_shouldRemoveOutboundResourceAtURL:(id)url withExpiryInterval:(double)interval;
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)extension;
@end

#endif /* PLPhotoLibraryPathManager_conveniences_h */
