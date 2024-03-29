//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPInlineMediaPlaybackInformation_h
#define LPInlineMediaPlaybackInformation_h
@import Foundation;

#include "LPAudio.h"
#include "LPLyricExcerptMetadata.h"

@class NSArray, NSString, NSURL;

@interface LPInlineMediaPlaybackInformation : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *storeIdentifier;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, copy, nonatomic) NSArray *offers;
@property (readonly, nonatomic) BOOL isAvailableForAnonymousDownload;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, retain, nonatomic) LPLyricExcerptMetadata *lyricExcerpt;
@property (readonly, copy, nonatomic) NSString *persistentIdentifier;
@property (readonly, retain, nonatomic) LPAudio *audio;

/* class methods */
+ (id)_inlineiTunesMediaPlaybackInformationWithType:(unsigned long long)type storeIdentifier:(id)identifier storefrontIdentifier:(id)identifier offers:(id)offers previewURL:(id)url lyricExcerpt:(id)excerpt;
+ (id)songPlaybackInformationWithStoreIdentifier:(id)identifier storefrontIdentifier:(id)identifier offers:(id)offers previewURL:(id)url lyricExcerpt:(id)excerpt;
+ (id)albumPlaybackInformationWithStoreIdentifier:(id)identifier storefrontIdentifier:(id)identifier offers:(id)offers;
+ (id)radioPlaybackInformationWithStoreIdentifier:(id)identifier storefrontIdentifier:(id)identifier;
+ (id)podcastPlaybackInformationWithStoreIdentifier:(id)identifier storefrontIdentifier:(id)identifier offers:(id)offers;
+ (id)podcastEpisodePlaybackInformationWithStoreIdentifier:(id)identifier storefrontIdentifier:(id)identifier offers:(id)offers;
+ (id)playlistPlaybackInformationWithStoreIdentifier:(id)identifier storefrontIdentifier:(id)identifier;
+ (id)audioBookPlaybackInformationWithStoreIdentifier:(id)identifier storefrontIdentifier:(id)identifier previewURL:(id)url persistentIdentifier:(id)identifier;
+ (id)audioFilePlaybackInformationWithAudio:(id)audio;

/* instance methods */
- (unsigned long long)availability;
@end

#endif /* LPInlineMediaPlaybackInformation_h */
