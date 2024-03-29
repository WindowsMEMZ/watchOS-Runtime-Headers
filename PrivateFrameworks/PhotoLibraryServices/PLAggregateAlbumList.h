//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAggregateAlbumList_h
#define PLAggregateAlbumList_h
@import Foundation;

#include "PLAlbumContainer-Protocol.h"
#include "PLAssetContainerListChangeObserver-Protocol.h"

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject<PLAssetContainerListChangeObserver, PLAlbumContainer> {
  /* instance variables */
  NSMutableOrderedSet *_allAlbums;
  NSMutableOrderedSet *_childAlbumLists;
}

@property (nonatomic) int filter;
@property (readonly, nonatomic) unsigned long long albumsCount;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, copy, nonatomic) id /* block */ albumsSortingComparator;
@property (readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property (readonly, retain, nonatomic) NSString *_prettyDescription;
@property (readonly, retain, nonatomic) NSString *_typeDescription;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)albumListWithFilter:(int)filter inPhotoLibrary:(id)library;

/* instance methods */
- (id)initWithFilter:(int)filter inPhotoLibrary:(id)library;
- (void)dealloc;
- (void)_invalidateAllAlbums;
- (void)assetContainerListDidChange:(id)change;
- (id)identifier;
- (id)albums;
- (BOOL)hasAtLeastOneAlbum;
- (id)managedObjectContext;
- (short)albumListType;
- (BOOL)canEditAlbums;
- (BOOL)albumHasFixedOrder:(id)order;
- (void)setNeedsReordering;
- (BOOL)needsReordering;
- (void)updateAlbumsOrderIfNeeded;
- (void)preheatAlbumsForProperties:(id)properties relationships:(id)relationships;
- (void)preheatAlbumsAtIndexes:(id)indexes forProperties:(id)properties relationships:(id)relationships;
- (id)photoLibrary;
- (id)containers;
- (BOOL)isEmpty;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
@end

#endif /* PLAggregateAlbumList_h */
