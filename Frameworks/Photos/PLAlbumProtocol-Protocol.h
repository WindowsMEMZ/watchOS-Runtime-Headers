//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAlbumProtocol_Protocol_h
#define PLAlbumProtocol_Protocol_h
@import Foundation;

@protocol PLAlbumProtocol <PLAssetContainer>

@property (readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, retain, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) int kindValue;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSObject *posterImage;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isPanoramasAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isStandInAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property (readonly, nonatomic) BOOL isUserLibraryAlbum;
@property (readonly, nonatomic) BOOL isProjectAlbum;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property (retain, nonatomic) NSString *importSessionID;
@property (readonly, retain, nonatomic) NSURL *groupURL;
@property (readonly, copy, nonatomic) id /* block */ sortingComparator;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic) unsigned long long batchSize;

/* instance methods */
- (void)reducePendingItemsCountBy:(unsigned long long)by;
- (void)batchFetchAssets:(id)assets;
@optional
/* instance methods */
- (id)filteredIndexesForPredicate:(id)predicate;
- (void)setUINotificationsEnabled:(BOOL)enabled;
@end

#endif /* PLAlbumProtocol_Protocol_h */
