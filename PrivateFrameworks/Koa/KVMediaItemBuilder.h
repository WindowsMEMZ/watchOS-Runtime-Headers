//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVMediaItemBuilder_h
#define KVMediaItemBuilder_h
@import Foundation;

#include "KVItemBuilder.h"

@class NSMutableArray;

@interface KVMediaItemBuilder : NSObject {
  /* instance variables */
  KVItemBuilder *_builder;
  NSMutableArray *_fields;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (id)_buildMediaItemWithId:(id)id otherFields:(id)fields;
- (id)albumArtistItemWithName:(id)name itemId:(id)id;
- (id)songArtistItemWithName:(id)name itemId:(id)id;
- (id)albumItemWithName:(id)name itemId:(id)id albumArtistId:(id)id;
- (id)genreItemWithName:(id)name itemId:(id)id;
- (id)songItemWithName:(id)name itemId:(id)id albumArtistId:(id)id songArtistId:(id)id albumId:(id)id genreId:(id)id;
- (id)musicVideoItemWithName:(id)name itemId:(id)id albumArtistId:(id)id songArtistId:(id)id albumId:(id)id genreId:(id)id;
- (id)tvShowItemWithName:(id)name itemId:(id)id;
- (id)tvEpisodeItemWithName:(id)name itemId:(id)id showId:(id)id;
- (id)movieItemWithName:(id)name itemId:(id)id;
- (id)audioBookArtistItemWithName:(id)name itemId:(id)id;
- (id)audioBookItemWithName:(id)name itemId:(id)id artistId:(id)id;
- (id)playlistItemWithName:(id)name itemId:(id)id;
@end

#endif /* KVMediaItemBuilder_h */
