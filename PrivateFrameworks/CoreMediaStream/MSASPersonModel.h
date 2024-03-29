//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASPersonModel_h
#define MSASPersonModel_h
@import Foundation;

#include "MSASModelBase.h"

@interface MSASPersonModel : MSASModelBase

@property (nonatomic) BOOL shouldDownloadEarliestPhotosFirst;

/* instance methods */
- (id)initWithPersonID:(id)id;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)version currentVersion:(int)version;
- (long long)dbQueueNextCommandSequenceNumber;
- (long long)dbQueueSmallestCommandSequenceNumber;
- (void)dbQueueEnqueueCommand:(id)command params:(id)params personID:(id)id albumGUID:(id)guid assetCollectionGUID:(id)guid;
- (void)enqueueCommand:(id)command params:(id)params personID:(id)id albumGUID:(id)guid assetCollectionGUID:(id)guid;
- (void)enqueueCommandAtHeadOfQueue:(id)queue params:(id)params personID:(id)id albumGUID:(id)guid assetCollectionGUID:(id)guid;
- (void)dbQueueEnqueueCommand:(id)command params:(id)params personID:(id)id albumGUID:(id)guid assetCollectionGUID:(id)guid sequenceNumber:(long long)number;
- (void)enqueueCommand:(id)command params:(id)params personID:(id)id albumGUID:(id)guid pendingOnAssetCollectionGUID:(id)guid;
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(struct sqlite3_stmt *)statement deleteStatement:(struct sqlite3_stmt *)statement;
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)guid;
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)guid;
- (id)_commandWithMinimumIdentifier:(id)identifier outParams:(id *)params outCommandIdentifier:(long long *)identifier outPersonID:(id *)id outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid;
- (id)commandAtHeadOfQueueOutParams:(id *)params outCommandIdentifier:(long long *)identifier outPersonID:(id *)id outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid;
- (id)commandWithMinimumIdentifier:(long long)identifier outParams:(id *)params outCommandIdentifier:(long long *)identifier outPersonID:(id *)id outAlbumGUID:(id *)guid outAssetCollectionGUID:(id *)guid;
- (void)setParams:(id)params forCommandWithIdentifier:(long long)identifier;
- (void)dbQueueRemoveCommandAtHeadOfQueue;
- (void)removeCommandIdentifier:(long long)identifier;
- (void)dbQueueRemoveCommandIdentifier:(long long)identifier;
- (void)dbQueueRemoveAllEntriesFromTable:(id)table;
- (void)purgeCompletionBlock:(id /* block */)block;
- (long long)countOfEnqueuedCommand:(id)command;
- (long long)countOfEnqueuedCommands;
- (BOOL)isAssetCollectionWithGUIDPending:(id)guidpending;
- (BOOL)dbQueueIsAssetCollectionWithGUIDPending:(id)guidpending;
- (void)addPendingAssetCollectionGUID:(id)guid albumGUID:(id)guid;
- (void)requeuePendingAssetCollectionGUID:(id)guid;
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(id)guid;
- (int)dbQueueAssetCountAlbumGUID:(id)guid inQueue:(id)queue;
- (void)dbQueueSetErrorCount:(int)count forGUID:(id)guid inQueue:(id)queue;
- (void)dbQueueRemoveGUID:(id)guid fromQueue:(id)queue;
- (BOOL)dbQueueIsGUIDQueued:(id)guidqueued inQueue:(id)queue;
- (long long)nextMMCSItemID;
- (void)enqueueAssetForDownload:(id)download inAlbumWithGUID:(id)guid;
- (int)assetsInDownloadQueue;
- (int)assetsInDownloadQueueAlbumGUID:(id)guid;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)guid focusAssetCollectionGUID:(id)guid thumbnails:(BOOL)thumbnails maxCount:(int)count isInflight:(BOOL)inflight;
- (id)nextItemsForDownloadFocusAlbumGUID:(id)guid focusAssetCollectionGUID:(id)guid maxCount:(int)count;
- (BOOL)hasItemsForDownloadCountFocusAlbumGUID:(id)guid focusAssetCollectionGUID:(id)guid;
- (int)itemsForDownloadCountFocusAlbumGUID:(id)guid focusAssetCollectionGUID:(id)guid;
- (void)setErrorCount:(int)count forAssetInDownloadQueue:(id)queue;
- (void)setInFlightAssets:(id)assets;
- (void)removeAssetsFromDownloadQueue:(id)queue;
- (void)enqueueAssetCollectionForUpload:(id)upload album:(id)album;
- (int)assetCollectionsInUploadQueue;
- (int)assetCollectionsInUploadQueueAlbumGUID:(id)guid;
- (id)itemsForUpload;
- (id)nextItemsForUploadMaxCount:(int)count;
- (id)nextItemsForUploadAlbumGUID:(id)guid maxPriority:(int)priority maxCount:(int)count;
- (void)setErrorCount:(int)count forAssetCollectionInUploadQueue:(id)queue;
- (void)removeAssetCollectionsFromUploadQueue:(id)queue;
@end

#endif /* MSASPersonModel_h */
