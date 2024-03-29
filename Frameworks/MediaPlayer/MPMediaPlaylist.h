//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaPlaylist_h
#define MPMediaPlaylist_h
@import Foundation;

#include "MPMediaItemCollection.h"
#include "MPMediaQuery.h"

@class NSArray, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {
  /* instance variables */
  NSArray *_representativeArtists;
  MPMediaQuery *_seedTracksQuery;
}

@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) NSString *cloudGlobalID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long playlistAttributes;
@property (readonly, nonatomic) NSArray *seedItems;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSString *authorDisplayName;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:(id)property;
+ (void)_createFilterableDictionary;
+ (BOOL)_isValidPlaylistProperty:(id)property;

/* instance methods */
- (id)artworkCatalog;
- (id)tiledArtworkCatalogWithRows:(unsigned long long)rows columns:(unsigned long long)columns;
- (id)artworkCatalogsWithMaximumCount:(unsigned long long)count;
- (id)initWithPersistentID:(unsigned long long)id;
- (id)initWithPersistentID:(unsigned long long)id mediaLibrary:(id)library;
- (id)initWithMultiverseIdentifier:(id)identifier library:(id)library;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)valueForProperty:(id)property;
- (void)addItemWithProductID:(id)id completionHandler:(id /* block */)handler;
- (void)addMediaItems:(id)items completionHandler:(id /* block */)handler;
- (BOOL)existsInLibrary;
- (BOOL)isFavoriteSongsPlaylist;
- (void)removeFirstItem;
- (id)items;
- (unsigned long long)count;
- (unsigned long long)mediaTypes;
- (id)representativeItem;
- (id)multiverseIdentifier;
- (id)representativeArtists;
- (id)seedTracksQuery;
- (BOOL)isCloudMix;
- (void)setUserSelectedArtworkImage:(id)image;
- (void)removeArtworkWithSourceType:(long long)type;
@end

#endif /* MPMediaPlaylist_h */
