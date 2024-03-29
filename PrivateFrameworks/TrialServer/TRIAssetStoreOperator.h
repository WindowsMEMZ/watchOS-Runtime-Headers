//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIAssetStoreOperator_h
#define TRIAssetStoreOperator_h
@import Foundation;

#include "TRIAssetStore.h"
#include "TRIAssetStoreOperations-Protocol.h"
#include "TRIStorageManagementProtocol-Protocol.h"

@protocol TRIPaths;

@interface TRIAssetStoreOperator : NSObject<TRIAssetStoreOperations> {
  /* instance variables */
  NSObject<TRIPaths> *_paths;
  NSObject<TRIStorageManagementProtocol> *_storageManagement;
  TRIAssetStore *_store;
}

/* class methods */
+ (unsigned long long)_fileSizeInBytesForPath:(id)path;

/* instance methods */
- (id)initWithPaths:(id)paths storageManagement:(id)management assetStore:(id)store;
- (BOOL)saveAssetWithIdentifier:(id)identifier sourcePath:(id)path flockWitness:(struct TRIFlockWitness_ { int x0; } *)witness removeSourceOnFailure:(BOOL)failure;
- (BOOL)_moveDirectoryAssetFromDirectory:(id)directory toLocationForAssetIdentifier:(id)identifier;
- (BOOL)removeAssetWithIdentifier:(id)identifier;
- (BOOL)_removeAssetWithIdentifier:(id)identifier flockWitness:(struct TRIFlockWitness_ { int x0; } *)witness deletedAssetSize:(unsigned long long *)size dryRun:(BOOL)run;
- (BOOL)addSymlinkFromAssetWithIdentifier:(id)identifier toPath:(id)path flockWitness:(struct TRIFlockWitness_ { int x0; } *)witness;
- (id)referenceMAAutoAssetWithId:(id)id futurePath:(id)path currentPath:(id)path isFileFactor:(BOOL)factor;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)scans deletedAssetSize:(unsigned long long *)size ignoreRecentlyCreatedAssets:(BOOL)assets dryRun:(BOOL)run includedCacheDeletableAssetIds:(id)ids deletedAssetIds:(id *)ids;
- (BOOL)_incrementUnrefAgeForAssetWithIdentifier:(id)identifier newValue:(unsigned int *)value dryRun:(BOOL)run;
- (BOOL)_clearUnrefAgeForAssetWithIdentifier:(id)identifier;
- (id)_collectDeadSymlinks;
- (unsigned short)_hardLinkCountForAssetWithIdentifier:(id)identifier;
- (unsigned short)_hardLinkCountForFileWithPath:(id)path;
- (BOOL)_removeDeadSymlinksWithFlockWitness:(struct TRIFlockWitness_ { int x0; } *)witness numRemoved:(unsigned int *)removed;
- (id)_collectUnreferencedAssetsIncludingLinkTargetsForReferencedAssetIds:(id)ids ignoreRecentlyCreatedAssets:(BOOL)assets;
- (id)_creationDateForAsset:(id)asset;
- (BOOL)_removeUnreferencedAssetsWithFlockWitness:(struct TRIFlockWitness_ { int x0; } *)witness olderThanAge:(unsigned int)age numRemoved:(unsigned int *)removed deletedAssetsSize:(unsigned long long *)size ignoreRecentlyCreatedAssets:(BOOL)assets dryRun:(BOOL)run includedCacheDeletableAssetIds:(id)ids deletedAssetIds:(id *)ids;
- (BOOL)_removePaths:(id)paths numRemoved:(unsigned int *)removed;
- (BOOL)migrateToGlobalAssetStoreFromLocalAssetStore:(id)store;
- (BOOL)_migrateAssetsDatabaseWithLocalAssetStorePath:(id)path;
- (BOOL)_migrateAssetContentsWithLocalAssetStorePath:(id)path flockWitness:(struct TRIFlockWitness_ { int x0; } *)witness;
- (BOOL)_relinkLocalAssetToGlobalAssetStore:(id)store withAssetId:(id)id localAssetDir:(id)dir;
- (BOOL)_acquireLockfileAndRunBlock:(id /* block */)block;
- (BOOL)_acquireLockfileInAssetStorePath:(id)path andRunBlock:(id /* block */)block;
- (id)_requireAssetStoreTempDir;
- (BOOL)_fixFileProtectionForFileURL:(id)url;
- (BOOL)fixFileProtectionForAssetStoreFiles;
- (BOOL)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)src dest:(id)dest;
- (void)_fixupPermissionsOnPath:(id)path permissionBits:(const unsigned short *)bits;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)src dest:(id)dest finalPermissionBits:(const unsigned short *)bits;
- (BOOL)_forceRemoveItemAtPath:(id)path;
@end

#endif /* TRIAssetStoreOperator_h */
