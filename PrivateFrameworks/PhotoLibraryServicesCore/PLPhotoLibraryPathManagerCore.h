//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoLibraryPathManagerCore_h
#define PLPhotoLibraryPathManagerCore_h
@import Foundation;

#include "PLFileSystemCapabilities.h"
#include "PLPhotoLibraryPathManager-Protocol.h"

@class NSString, NSURL;

@interface PLPhotoLibraryPathManagerCore : NSObject<PLPhotoLibraryPathManager> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _folderCreationAndCapabilitiesLock;
  unsigned long long _photoDirectoriesExists;
  unsigned long long _privateSubDirectoriesExists;
  unsigned long long _privateCacheSubDirectoriesExists;
  unsigned long long _externalDirectoriesExists;
  unsigned long long _internalDirectoriesExists;
  unsigned long long _persistedAlbumDataDirectoryExists;
}

@property (copy) NSURL *libraryURL;
@property (copy) NSString *baseDirectory;
@property (copy) NSString *assetUUIDRecoveryMappingPath;
@property unsigned short bundleScope;
@property (retain, nonatomic) NSString *iTunesPhotosDirectory;
@property (retain, nonatomic) NSString *legacyModelInterestDatabasePath;
@property (retain, nonatomic) NSString *legacyMemoriesRelatedSnapshotDirectory;
@property (readonly) PLFileSystemCapabilities *capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (BOOL)setTimeMachineExclusionAttribute:(BOOL)attribute url:(id)url error:(id *)error;
+ (id)libraryURLFromDatabaseURL:(id)url;
+ (void)listenForSystemPhotoLibraryURLChanges;
+ (BOOL)isSystemPhotoLibraryURL:(id)url;
+ (BOOL)isSupportedFileSystemAtURL:(id)url;
+ (id)systemLibraryBaseDirectory;
+ (id)allPhotosPathsOnThisDevice;
+ (void)_updateSystemLibraryURLWithOldValue:(id)value;
+ (id)_legacySystemLibraryBookmarkData;
+ (id)_legacySystemLibraryPath;
+ (id)_constructLegacySystemPhotoLibraryURLFromUnresolvableBookmark:(id)bookmark;
+ (id)systemLibraryURL;
+ (id)systemLibraryURLIfResolvable;
+ (BOOL)setSystemLibraryURL:(id)url options:(unsigned short)options error:(id *)error;
+ (void)recordPrevSystemLibraryPath:(id)path;
+ (id)_readSystemPhotoLibraryPath;
+ (BOOL)_persistSystemPhotoLibraryPath:(id)path sendChangeNotification:(BOOL)notification;
+ (id)managedPathWithUuid:(const char *)uuid base:(const char *)base fileMarker:(const char *)marker extension:(const char *)extension;
+ (id)_photosLibrariesDataVaultPathForLibraryBundleName:(id)name;
+ (id)photosDataVaultPath;
+ (id)photosLibrariesDataVaultPath;
+ (id)wellKnownPhotoLibraryURLForIdentifier:(long long)identifier;
+ (long long)wellKnownPhotoLibraryIdentifierForURL:(id)url;
+ (unsigned long long)libraryCreateOptionsForWellKnownLibraryIdentifier:(long long)identifier;
+ (BOOL)backupSupportedForWellKnownLibraryIdentifier:(long long)identifier;
+ (BOOL)shouldAutoUpgradeWellKnownPhotoLibraryIdentifier:(long long)identifier;
+ (BOOL)ignoreFilesystemCheckForWellKnownPhotoLibraryIdentifier:(long long)identifier;
+ (BOOL)shouldProcessHighlightsForWellKnownPhotoLibraryIdentifier:(long long)identifier;
+ (id)basenameForSpatialOverCaptureFromOriginalBasename:(id)basename;

/* instance methods */
- (id)init;
- (id)initWithLibraryURL:(id)url bundleScope:(unsigned short)scope;
- (void)postInit;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)type;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)type;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)type;
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)type;
- (void)internalDirectoryCreationMaskResetWithSubType:(unsigned char)type;
- (BOOL)updateTimeMachineExclusionAttributeForExcludePath:(id)path error:(id *)error;
- (BOOL)createDirectoryOnceWithPath:(id)path mask:(unsigned char)mask pathType:(unsigned char)type error:(id *)error;
- (BOOL)updateExclusionAttributeWithPath:(id)path mask:(unsigned char)mask pathType:(unsigned char)type error:(id *)error;
- (id)basePrivateDirectoryPath;
- (id)privateDirectoryWithBundleIdentifier:(id)identifier createIfNeeded:(BOOL)needed;
- (id)convertPhotoLibraryPathType:(unsigned char)type;
- (unsigned char)photoLibraryPathTypeForBundleScope:(unsigned short)scope;
- (id)photosDatabasePath;
- (id)photosCPLDatabasePath;
- (id)photosAsideDatabasePath;
- (id)photoDirectoryWithType:(unsigned char)type;
- (id)photoDirectoryWithType:(unsigned char)type additionalPathComponents:(id)components;
- (id)photoDirectoryWithType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components;
- (id)photoDirectoryWithType:(unsigned char)type createIfNeeded:(BOOL)needed error:(id *)error;
- (id)photoDirectoryWithType:(unsigned char)type leafType:(unsigned char)type createIfNeeded:(BOOL)needed error:(id *)error;
- (id)photoDirectoryWithType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components createIfNeeded:(BOOL)needed error:(id *)error;
- (id)pathsForClientAccess:(id)access;
- (id)pathsForPermissionCheck;
- (BOOL)createPathsForNewLibrariesWithError:(id *)error;
- (id)pathsForExternalWriters;
- (void)enumerateBundleScopesWithBlock:(id /* block */)block;
- (BOOL)path:(id)path isSubpathOfPhotoDirectoryWithType:(unsigned char)type;
- (BOOL)pathRelativeToBundle:(id)bundle isSubpathOfPhotoDirectoryWithType:(unsigned char)type;
- (id)privateDirectoryWithSubType:(unsigned char)type;
- (id)privateDirectoryWithSubType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components;
- (id)privateDirectoryWithSubType:(unsigned char)type createIfNeeded:(BOOL)needed error:(id *)error;
- (id)privateDirectoryWithSubType:(unsigned char)type leafType:(unsigned char)type createIfNeeded:(BOOL)needed error:(id *)error;
- (id)privateDirectoryWithSubType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components createIfNeeded:(BOOL)needed error:(id *)error;
- (id)privateCacheDirectoryWithSubType:(unsigned char)type;
- (id)privateCacheDirectoryWithSubType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components;
- (id)privateCacheDirectoryWithSubType:(unsigned char)type createIfNeeded:(BOOL)needed error:(id *)error;
- (id)privateCacheDirectoryWithSubType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components createIfNeeded:(BOOL)needed error:(id *)error;
- (id)externalDirectoryWithSubType:(unsigned char)type;
- (id)externalDirectoryWithSubType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components;
- (id)externalDirectoryWithSubType:(unsigned char)type createIfNeeded:(BOOL)needed error:(id *)error;
- (id)externalDirectoryWithSubType:(unsigned char)type leafType:(unsigned char)type additionalPathComponents:(id)components createIfNeeded:(BOOL)needed error:(id *)error;
- (id)internalDirectoryWithSubType:(unsigned char)type additionalPathComponents:(id)components;
- (id)internalDirectoryWithSubType:(unsigned char)type additionalPathComponents:(id)components createIfNeeded:(BOOL)needed error:(id *)error;
- (id)assetMainFilePathWithDirectory:(id)directory filename:(id)filename bundleScope:(unsigned short)scope;
- (id)pathToAssetsToAlbumsMapping;
- (id)syncInfoPath;
- (id)knownDBPaths;
- (id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(BOOL)needed error:(id *)error;
- (id)temporaryDragAndDropDirectoryCreateIfNeeded:(BOOL)needed error:(id *)error;
- (BOOL)shouldUseFileIdentifierForBundleScope:(unsigned short)scope;
- (id)readOnlyUrlWithIdentifier:(id)identifier;
- (void)setExtendedAttributesWithIdentifier:(id)identifier;
- (void)setExtendedAttributesWithIdentifier:(id)identifier andURL:(id)url;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)identifier mode:(unsigned char)mode toURLWithHandler:(id /* block */)handler;
- (id)pathsForLibraryFilesystemSizeCalculation;
- (id)pathsForFinderSyncFilesystemSizeCalculation;
- (id)_dataProtectionIndicatorFilePath;
- (BOOL)isDataProtectionComplete;
- (void)setDataProtectionComplete:(BOOL)complete;
- (BOOL)isDeviceRestoreSupported;
- (BOOL)ensureFileProviderSyncExclusionAttributeIsSetWithError:(id *)error;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)directory type:(unsigned char)type bundleScope:(unsigned short)scope;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)directory rootPath:(id)path;
- (id)pathToAssetAlbumOrderStructure;
- (id)cloudRestoreForegroundPhaseCompleteTokenPath;
- (id)cloudRestoreBackgroundPhaseInProgressTokenPath;
- (id)cloudRestoreCompleteTokenPath;
- (id)modelRestorePostProcessingCompleteTokenPath;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(BOOL)needed error:(id *)error;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)directory;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)path;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)paths populateInvalidAdjustmentPaths:(id)paths;
- (id)simpleDCIMDirectory;
- (id)pathForCPLStatus;
@end

#endif /* PLPhotoLibraryPathManagerCore_h */
