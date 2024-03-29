//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCArticleHeadline_h
#define FCArticleHeadline_h
@import Foundation;

#include "FCHeadline.h"
#include "FCArticleAccessCheckable-Protocol.h"
#include "FCArticleAudioTrack.h"
#include "FCAssetHandle.h"
#include "FCChannelProviding-Protocol.h"
#include "FCColor.h"
#include "FCContentArchivable-Protocol.h"
#include "FCContentArchive.h"
#include "FCCoverArt.h"
#include "FCHeadlineExperimentalTitleMetadata.h"
#include "FCHeadlineStocksFields-Protocol.h"
#include "FCHeadlineThumbnail.h"
#include "FCInterestToken.h"
#include "FCIssue.h"
#include "FCTopStoriesStyleConfiguration.h"

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata, NSArray, NSData, NSDate, NSString, NSURL, NTPBArticleRecord;

@interface FCArticleHeadline : FCHeadline<FCHeadlineStocksFields, FCArticleAccessCheckable, FCContentArchivable> {
  /* instance variables */
  BOOL _hasThumbnail;
  BOOL _sponsored;
  BOOL _aiGenerated;
  BOOL _isEvergreen;
  BOOL _deleted;
  BOOL _featureCandidate;
  BOOL _needsRapidUpdates;
  BOOL _disableTapToChannel;
  BOOL _boundToContext;
  BOOL _hiddenFromFeeds;
  BOOL _pressRelease;
  BOOL _hiddenFromAutoFavorites;
  BOOL _disablePrerollAds;
  BOOL _webEmbedsEnabled;
  BOOL _issueOnly;
  BOOL _canBePurchased;
  BOOL _showBundleSoftPaywall;
  BOOL _useTransparentNavigationBar;
  BOOL _disableBookmarking;
  BOOL _hideModalCloseButton;
  BOOL _reduceVisibility;
  BOOL _reduceVisibilityForNonFollowers;
  BOOL _webConverted;
  NSString *_articleID;
  NSString *_referencedArticleID;
  NSString *_clusterID;
  unsigned long long _contentType;
  NSString *_titleCompact;
  FCHeadlineExperimentalTitleMetadata *_experimentalTitleMetadata;
  NSString *_primaryAudience;
  NSDate *_publishDate;
  long long _publisherArticleVersion;
  long long _backendArticleVersion;
  NSString *_sourceName;
  NSData *_thumbnailPerceptualHash;
  FCHeadlineThumbnail *_thumbnailLQ;
  FCHeadlineThumbnail *_thumbnail;
  FCHeadlineThumbnail *_thumbnailMedium;
  FCHeadlineThumbnail *_thumbnailHQ;
  FCHeadlineThumbnail *_thumbnailUltraHQ;
  FCHeadlineThumbnail *_thumbnailWidgetLQ;
  FCHeadlineThumbnail *_thumbnailWidget;
  FCHeadlineThumbnail *_thumbnailWidgetHQ;
  NSString *_shortExcerpt;
  NSString *_accessoryText;
  NSURL *_contentURL;
  NSDate *_lastModifiedDate;
  NSDate *_lastFetchedDate;
  NSArray *_topics;
  NSArray *_topicIDs;
  COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
  COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_publisherCohorts;
  COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_globalConversionStats;
  COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *_publisherConversionStats;
  COMAPPLEFELDSPARPROTOCOLLIVERPOOLTagMetadata *_publisherTagMetadata;
  NSURL *_videoURL;
  FCAssetHandle *_videoStillImage;
  double _videoDuration;
  NSArray *_iAdCategories;
  NSArray *_iAdKeywords;
  NSArray *_iAdSectionIDs;
  NSArray *_relatedArticleIDs;
  NSArray *_moreFromPublisherArticleIDs;
  FCIssue *_parentIssue;
  unsigned long long _storyType;
  FCTopStoriesStyleConfiguration *_storyStyle;
  FCCoverArt *_coverArt;
  NSString *_videoCallToActionTitle;
  NSURL *_videoCallToActionURL;
  NSString *_videoType;
  NSArray *_sportsEventIDs;
  NSString *_language;
  unsigned long long _role;
  unsigned long long _halfLife;
  unsigned long long _halfLifeOverride;
  NSArray *_linkedArticleIDs;
  NSArray *_linkedIssueIDs;
  long long _bodyTextLength;
  FCArticleAudioTrack *_narrativeTrack;
  FCArticleAudioTrack *_narrativeTrackSample;
  NSString *_narrativeTrackTextRanges;
  NSString *_layeredThumbnailJSON;
  double _layeredThumbnailAspectRatio;
  FCColor *_thumbnailImagePrimaryColor;
  FCColor *_thumbnailImageBackgroundColor;
  FCColor *_thumbnailImageTextColor;
  FCColor *_thumbnailImageAccentColor;
  NSArray *_authors;
  NSArray *_narrators;
  NSString *_excerpt;
  NSArray *_narrativeTrackBuddyArticleIDs;
  NSString *_narrativeTrackPreferredUpsellVariantID;
  NSDate *_globalExpirationTime;
  NSArray *_tagsExpiration;
  NSURL *_routeURL;
  NSData *_float16TitleEncoding;
  NSData *_float16FullBodyEncoding;
  FCAssetHandle *_articleRecirculationConfigAssetHandle;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _thumbnailFocalFrame;
}

@property (retain, nonatomic) NTPBArticleRecord *articleRecord;
@property (retain, nonatomic) FCInterestToken *articleInterestToken;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long behaviorFlags;
@property (readonly, copy, nonatomic) NSString *stocksClusterID;
@property (readonly, copy, nonatomic) NSString *stocksMetadataJSON;
@property (readonly, copy, nonatomic) NSString *stocksScoresJSON;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isBlockedExplicitContent;
@property (readonly, copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel;
@property (readonly, nonatomic) BOOL isDraft;
@property (readonly, nonatomic) BOOL isLocalDraft;
@property (readonly, nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL paid;
@property (readonly, nonatomic) BOOL bundlePaid;
@property (readonly, copy, nonatomic) NSString *sourceChannelID;
@property (readonly, copy, nonatomic) NSArray *blockedStorefrontIDs;
@property (readonly, copy, nonatomic) NSArray *allowedStorefrontIDs;
@property (readonly, nonatomic) FCContentArchive *contentArchive;

/* instance methods */
- (id)init;
- (id)initWithArticleMetadata:(id)metadata sourceChannel:(id)channel assetManager:(id)manager;
- (id)initWithArticleRecord:(id)record articleInterestToken:(id)token sourceChannel:(id)channel parentIssue:(id)issue storyStyleConfigs:(id)configs storyTypeTimeout:(long long)timeout rapidUpdatesTimeout:(long long)timeout assetManager:(id)manager experimentalTitleProvider:(id)provider;
- (id)initWithArticleRecordData:(id)data sourceChannel:(id)channel parentIssue:(id)issue assetManager:(id)manager;
- (id)contentWithContext:(id)context;
- (id)backingArticleRecordData;
- (id)publisherSpecifiedArticleIDs;
- (id)thumbnailImagePrimaryColor;
- (id)thumbnailImageBackgroundColor;
- (id)thumbnailImageTextColor;
- (id)thumbnailImageAccentColor;
- (id)stocksFields;
- (id)publisherID;
- (BOOL)hasAudioTrack;
- (id)articleID;
- (void)setArticleID:(id)id;
- (id)referencedArticleID;
- (id)clusterID;
- (void)setClusterID:(id)id;
- (unsigned long long)contentType;
- (void)setContentType:(unsigned long long)type;
- (id)titleCompact;
- (void)setTitleCompact:(id)compact;
- (id)experimentalTitleMetadata;
- (id)primaryAudience;
- (id)publishDate;
- (void)setPublishDate:(id)date;
- (long long)publisherArticleVersion;
- (long long)backendArticleVersion;
- (id)sourceName;
- (void)setSourceName:(id)name;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbnailFocalFrame;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)thumbnailPerceptualHash;
- (BOOL)hasThumbnail;
- (void)setHasThumbnail:(BOOL)thumbnail;
- (id)thumbnailLQ;
- (void)setThumbnailLQ:(id)lq;
- (id)thumbnail;
- (void)setThumbnail:(id)thumbnail;
- (id)thumbnailMedium;
- (void)setThumbnailMedium:(id)medium;
- (id)thumbnailHQ;
- (void)setThumbnailHQ:(id)hq;
- (id)thumbnailUltraHQ;
- (void)setThumbnailUltraHQ:(id)hq;
- (id)thumbnailWidgetLQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetHQ;
- (id)shortExcerpt;
- (void)setShortExcerpt:(id)excerpt;
- (id)accessoryText;
- (void)setAccessoryText:(id)text;
- (id)contentURL;
- (id)lastModifiedDate;
- (id)lastFetchedDate;
- (id)topics;
- (id)topicIDs;
- (void)setTopicIDs:(id)ids;
- (id)globalCohorts;
- (id)publisherCohorts;
- (id)globalConversionStats;
- (id)publisherConversionStats;
- (id)publisherTagMetadata;
- (id)videoURL;
- (id)videoStillImage;
- (double)videoDuration;
- (BOOL)isSponsored;
- (void)setSponsored:(BOOL)sponsored;
- (BOOL)isAIGenerated;
- (void)setAiGenerated:(BOOL)generated;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (BOOL)isEvergreen;
- (void)setIsEvergreen:(BOOL)evergreen;
- (BOOL)isDeleted;
- (void)setDeleted:(BOOL)deleted;
- (BOOL)isFeatureCandidate;
- (id)relatedArticleIDs;
- (id)moreFromPublisherArticleIDs;
- (id)parentIssue;
- (unsigned long long)storyType;
- (void)setStoryType:(unsigned long long)type;
- (id)storyStyle;
- (void)setStoryStyle:(id)style;
- (BOOL)needsRapidUpdates;
- (BOOL)disableTapToChannel;
- (BOOL)isBoundToContext;
- (BOOL)isHiddenFromFeeds;
- (BOOL)isPressRelease;
- (BOOL)isHiddenFromAutoFavorites;
- (BOOL)disablePrerollAds;
- (BOOL)webEmbedsEnabled;
- (BOOL)isIssueOnly;
- (BOOL)isPaid;
- (BOOL)isBundlePaid;
- (id)coverArt;
- (id)videoCallToActionTitle;
- (id)videoCallToActionURL;
- (id)videoType;
- (void)setVideoType:(id)type;
- (id)sportsEventIDs;
- (void)setSportsEventIDs:(id)ids;
- (BOOL)canBePurchased;
- (id)language;
- (unsigned long long)role;
- (void)setRole:(unsigned long long)role;
- (BOOL)showBundleSoftPaywall;
- (BOOL)useTransparentNavigationBar;
- (BOOL)disableBookmarking;
- (BOOL)hideModalCloseButton;
- (BOOL)reduceVisibility;
- (BOOL)reduceVisibilityForNonFollowers;
- (BOOL)webConverted;
- (unsigned long long)halfLife;
- (void)setHalfLife:(unsigned long long)life;
- (unsigned long long)halfLifeOverride;
- (id)linkedArticleIDs;
- (id)linkedIssueIDs;
- (long long)bodyTextLength;
- (id)narrativeTrack;
- (id)narrativeTrackSample;
- (id)narrativeTrackTextRanges;
- (id)layeredThumbnailJSON;
- (double)layeredThumbnailAspectRatio;
- (id)authors;
- (id)narrators;
- (id)excerpt;
- (void)setExcerpt:(id)excerpt;
- (id)narrativeTrackBuddyArticleIDs;
- (id)narrativeTrackPreferredUpsellVariantID;
- (id)globalExpirationTime;
- (void)setGlobalExpirationTime:(id)time;
- (id)tagsExpiration;
- (id)routeURL;
- (id)float16TitleEncoding;
- (id)float16FullBodyEncoding;
- (id)articleRecirculationConfigAssetHandle;
@end

#endif /* FCArticleHeadline_h */
