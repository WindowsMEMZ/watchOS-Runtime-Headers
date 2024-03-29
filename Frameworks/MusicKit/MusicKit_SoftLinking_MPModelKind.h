//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPModelKind_h
#define MusicKit_SoftLinking_MPModelKind_h
@import Foundation;

@class MPModelKind;

@interface MusicKit_SoftLinking_MPModelKind : NSObject {
  /* instance variables */
  MPModelKind *_underlyingKind;
}

@property (readonly, nonatomic) MPModelKind *_underlyingKind;

/* class methods */
+ (id)_modelKindForModelObjectType:(long long)type;
+ (id)_defaultAlbumKind;
+ (id)_defaultAlbumKindForTracks;
+ (id)_defaultArtistKind;
+ (id)_defaultComposerKind;
+ (id)_defaultCuratorKind;
+ (id)_defaultFileAssetKind;
+ (id)_defaultRecentlyAddedObjectKind;
+ (id)_defaultGenreKind;
+ (id)_defaultMovieKind;
+ (id)_defaultPlaylistKind;
+ (id)_defaultPlaylistKindExcludingEmpty;
+ (id)_defaultPlaylistAuthorKind;
+ (id)_defaultPlaylistEntryKind;
+ (id)_defaultPlaylistEntryReactionKind;
+ (id)_defaultPlaylistEntryKindForTracks;
+ (id)_defaultPlaylistEntryKindForSongs;
+ (id)_defaultPlaylistEntryKindForMusicVideos;
+ (id)_defaultRadioStationKind;
+ (id)_defaultRecordLabelKind;
+ (id)_defaultSocialPersonKind;
+ (id)_defaultSongKind;
+ (id)_defaultSongKindForAudioOnly;
+ (id)_defaultSongKindForTracks;
+ (id)_defaultTVEpisodeKind;
+ (id)_defaultTVSeasonKind;
+ (id)_defaultTVShowKind;
+ (id)playlistEntryKindWithKinds:(id)kinds;
+ (id)_songKindForVariants:(unsigned long long)variants;
+ (id)_songKindForVariants:(unsigned long long)variants options:(unsigned long long)options;
+ (BOOL)shouldShowAllExtendedVideoContent;
+ (id)_sanitizeKind:(id)kind;
+ (id)_sanitizeSongKind:(id)kind;
+ (id)_sanitizePlaylistEntryKind:(id)kind;

/* instance methods */
- (id)_initWithUnderlyingKind:(id)kind;
@end

#endif /* MusicKit_SoftLinking_MPModelKind_h */
