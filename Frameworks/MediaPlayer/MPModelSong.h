//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPModelSong_h
#define MPModelSong_h
@import Foundation;

#include "MPModelObject.h"
#include "MPGaplessInfo.h"
#include "MPModelAlbum.h"
#include "MPModelArtist.h"
#include "MPModelComposer.h"
#include "MPModelFileAsset.h"
#include "MPModelGenre.h"
#include "MPModelHomeSharingAsset.h"
#include "MPModelLyrics.h"
#include "MPModelPlaybackPosition.h"
#include "MPModelPreviewAsset.h"
#include "MPModelStoreAsset.h"

@class NSDate, NSString;

@interface MPModelSong : MPModelObject

@property (copy, @dynamic, nonatomic) NSString *title;
@property (retain, @dynamic, nonatomic) MPModelAlbum *album;
@property (retain, @dynamic, nonatomic) MPModelArtist *artist;
@property (retain, @dynamic, nonatomic) MPModelGenre *genre;
@property (retain, @dynamic, nonatomic) MPModelComposer *composer;
@property (copy, @dynamic, nonatomic) NSString *grouping;
@property (retain, @dynamic, nonatomic) MPModelFileAsset *localFileAsset;
@property (retain, @dynamic, nonatomic) MPModelHomeSharingAsset *homeSharingAsset;
@property (retain, @dynamic, nonatomic) MPModelPlaybackPosition *playbackPosition;
@property (retain, @dynamic, nonatomic) MPModelStoreAsset *storeAsset;
@property (retain, @dynamic, nonatomic) MPModelPreviewAsset *previewAsset;
@property (copy, @dynamic, nonatomic) NSString *copyrightText;
@property (@dynamic, nonatomic) double duration;
@property (@dynamic, nonatomic) long long trackNumber;
@property (@dynamic, nonatomic) long long discNumber;
@property (@dynamic, nonatomic) long long playCount;
@property (@dynamic, nonatomic) long long skipCount;
@property (@dynamic, nonatomic) BOOL explicitSong;
@property (@dynamic, nonatomic) BOOL artistUploadedContent;
@property (@dynamic, nonatomic) BOOL hasVideo;
@property (@dynamic, nonatomic) long long beatsPerMinute;
@property (retain, @dynamic, nonatomic) MPModelLyrics *lyrics;
@property (@dynamic, nonatomic) BOOL shouldShowComposer;
@property (@dynamic, nonatomic) float volumeNormalization;
@property (copy, @dynamic, nonatomic) id /* block */ artworkCatalogBlock;
@property (@dynamic, nonatomic) BOOL hasCloudSyncSource;
@property (@dynamic, nonatomic) BOOL libraryAdded;
@property (copy, @dynamic, nonatomic) NSDate *libraryAddedDate;
@property (@dynamic, nonatomic) BOOL libraryAddEligible;
@property (@dynamic, nonatomic) long long keepLocalEnableState;
@property (@dynamic, nonatomic) long long keepLocalManagedStatus;
@property (@dynamic, nonatomic) unsigned long long keepLocalManagedStatusReason;
@property (@dynamic, nonatomic) unsigned long long keepLocalConstraints;
@property (@dynamic, nonatomic) long long year;
@property (@dynamic, nonatomic) float userRating;
@property (@dynamic, nonatomic) long long cloudStatus;
@property (retain, @dynamic, nonatomic) MPGaplessInfo *gaplessInfo;
@property (@dynamic, nonatomic) float volumeAdjustment;
@property (@dynamic, nonatomic) unsigned long long traits;
@property (@dynamic, nonatomic) BOOL supportsExtendedLyricsAttribute;
@property (@dynamic, nonatomic) BOOL hasCredits;
@property (copy, @dynamic, nonatomic) NSString *classicalWork;
@property (copy, @dynamic, nonatomic) NSString *classicalMovement;
@property (@dynamic, nonatomic) long long classicalMovementCount;
@property (@dynamic, nonatomic) long long classicalMovementNumber;
@property (@dynamic, nonatomic) long long trackCount;
@property (@dynamic, nonatomic) BOOL isFavorite;
@property (@dynamic, nonatomic) BOOL isDisliked;
@property (copy, @dynamic, nonatomic) NSDate *dateFavorited;
@property (readonly, copy, @dynamic, nonatomic) NSDate *downloadedDate;
@property (readonly, copy, @dynamic, nonatomic) NSDate *lastDevicePlaybackDate;

/* class methods */
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (long long)genericObjectType;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (BOOL)supportsKeepLocalStatusObservation;
+ (id)requiredLibraryRemovalProperties;
+ (BOOL)supportsLibraryRemoval;
+ (BOOL)supportsLibraryAddStatusObservation;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)kindWithVariants:(unsigned long long)variants;
+ (id)kindWithVariants:(unsigned long long)variants options:(unsigned long long)options;
+ (id)__title_KEY;
+ (void)__MPModelPropertySongTitle__MAPPING_MISSING__;
+ (id)__album_KEY;
+ (void)__MPModelRelationshipSongAlbum__MAPPING_MISSING__;
+ (id)__artist_KEY;
+ (void)__MPModelRelationshipSongArtist__MAPPING_MISSING__;
+ (id)__genre_KEY;
+ (void)__MPModelRelationshipSongGenre__MAPPING_MISSING__;
+ (id)__composer_KEY;
+ (void)__MPModelRelationshipSongComposer__MAPPING_MISSING__;
+ (id)__grouping_KEY;
+ (void)__MPModelPropertySongGrouping__MAPPING_MISSING__;
+ (id)__copyrightText_KEY;
+ (void)__MPModelPropertySongCopyrightText__MAPPING_MISSING__;
+ (id)__duration_KEY;
+ (void)__MPModelPropertySongDuration__MAPPING_MISSING__;
+ (id)__trackCount_KEY;
+ (void)___MPModelPropertySongTrackCount__MAPPING_MISSING__;
+ (id)__trackNumber_KEY;
+ (void)__MPModelPropertySongTrackNumber__MAPPING_MISSING__;
+ (id)__discNumber_KEY;
+ (void)__MPModelPropertySongDiscNumber__MAPPING_MISSING__;
+ (id)__playCount_KEY;
+ (void)__MPModelPropertySongPlayCount__MAPPING_MISSING__;
+ (id)__skipCount_KEY;
+ (void)__MPModelPropertySongSkipCount__MAPPING_MISSING__;
+ (id)__explicitSong_KEY;
+ (void)__MPModelPropertySongExplicit__MAPPING_MISSING__;
+ (id)__artistUploadedContent_KEY;
+ (void)__MPModelPropertySongArtistUploadedContent__MAPPING_MISSING__;
+ (id)__hasVideo_KEY;
+ (void)__MPModelPropertySongHasVideo__MAPPING_MISSING__;
+ (id)__beatsPerMinute_KEY;
+ (void)__MPModelPropertySongBeatsPerMinute__MAPPING_MISSING__;
+ (id)__lyrics_KEY;
+ (void)__MPModelRelationshipSongLyrics__MAPPING_MISSING__;
+ (id)__shouldShowComposer_KEY;
+ (void)__MPModelPropertySongShouldShowComposer__MAPPING_MISSING__;
+ (id)__volumeNormalization_KEY;
+ (void)__MPModelPropertySongVolumeNormalization__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (void)__MPModelPropertySongArtwork__MAPPING_MISSING__;
+ (id)__localFileAsset_KEY;
+ (void)__MPModelRelationshipSongLocalFileAsset__MAPPING_MISSING__;
+ (id)__keepLocalEnableState_KEY;
+ (void)__MPModelPropertySongKeepLocalEnableState__MAPPING_MISSING__;
+ (id)__keepLocalManagedStatus_KEY;
+ (void)__MPModelPropertySongKeepLocalManagedStatus__MAPPING_MISSING__;
+ (id)__keepLocalManagedStatusReason_KEY;
+ (void)__MPModelPropertySongKeepLocalManagedStatusReason__MAPPING_MISSING__;
+ (id)__keepLocalConstraints_KEY;
+ (void)__MPModelPropertySongKeepLocalConstraints__MAPPING_MISSING__;
+ (id)__libraryAdded_KEY;
+ (void)__MPModelPropertySongLibraryAdded__MAPPING_MISSING__;
+ (id)__libraryAddedDate_KEY;
+ (void)__MPModelPropertySongLibraryAddedDate__MAPPING_MISSING__;
+ (id)__lastDevicePlaybackDate_KEY;
+ (void)__MPModelPropertySongLastDevicePlaybackDate__MAPPING_MISSING__;
+ (id)__libraryAddEligible_KEY;
+ (void)__MPModelPropertySongLibraryAddEligible__MAPPING_MISSING__;
+ (id)__hasCloudSyncSource_KEY;
+ (void)__MPModelPropertySongHasCloudSyncSource__MAPPING_MISSING__;
+ (id)__classicalWork_KEY;
+ (void)__MPModelPropertySongClassicalWork__MAPPING_MISSING__;
+ (id)__classicalMovement_KEY;
+ (void)__MPModelPropertySongClassicalMovement__MAPPING_MISSING__;
+ (id)__classicalMovementCount_KEY;
+ (void)__MPModelPropertySongClassicalMovementCount__MAPPING_MISSING__;
+ (id)__classicalMovementNumber_KEY;
+ (void)__MPModelPropertySongClassicalMovementNumber__MAPPING_MISSING__;
+ (id)__year_KEY;
+ (void)__MPModelPropertySongYear__MAPPING_MISSING__;
+ (id)__homeSharingAsset_KEY;
+ (void)__MPModelRelationshipSongHomeSharingAsset__MAPPING_MISSING__;
+ (id)__storeAsset_KEY;
+ (void)__MPModelRelationshipSongStoreAsset__MAPPING_MISSING__;
+ (id)__previewAsset_KEY;
+ (void)__MPModelRelationshipSongPreviewAsset__MAPPING_MISSING__;
+ (id)__userRating_KEY;
+ (void)__MPModelPropertySongUserRating__MAPPING_MISSING__;
+ (id)__cloudStatus_KEY;
+ (void)__MPModelPropertySongCloudStatus__MAPPING_MISSING__;
+ (id)__gaplessInfo_KEY;
+ (void)__MPModelPropertySongGaplessInfo__MAPPING_MISSING__;
+ (id)__volumeAdjustment_KEY;
+ (void)__MPModelPropertySongVolumeAdjustment__MAPPING_MISSING__;
+ (id)__playbackPosition_KEY;
+ (void)__MPModelRelationshipSongPlaybackPosition__MAPPING_MISSING__;
+ (id)__downloadedDate_KEY;
+ (void)__MPModelPropertySongDownloadedDate__MAPPING_MISSING__;
+ (id)__traits_KEY;
+ (void)__MPModelPropertySongTraits__MAPPING_MISSING__;
+ (id)__isFavorite_KEY;
+ (void)__MPModelPropertySongIsFavorite__MAPPING_MISSING__;
+ (id)__isDisliked_KEY;
+ (void)__MPModelPropertySongIsDisliked__MAPPING_MISSING__;
+ (id)__dateFavorited_KEY;
+ (void)__MPModelPropertySongDateFavorited__MAPPING_MISSING__;
+ (id)__supportsExtendedLyricsAttribute_KEY;
+ (void)__MPModelPropertySongSupportsExtendedLyricsAttribute__MAPPING_MISSING__;
+ (id)__hasCredits_KEY;
+ (void)__MPModelPropertySongHasCredits__MAPPING_MISSING__;

/* instance methods */
- (id)personalizationScopedPropertiesForProperties:(id)properties;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)object;
- (id)newKeepLocalStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (struct MPLibraryAddStatusObserverConfiguration { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; })libraryAddStatusObserverConfiguration;
- (id)mediaItemPropertyValues;
- (id)humanDescription;
- (id)artworkCatalog;
@end

#endif /* MPModelSong_h */
