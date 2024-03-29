//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCLocalArticleHeadline_h
#define FCLocalArticleHeadline_h
@import Foundation;

#include "FCHeadline.h"
#include "FCChannelProviding-Protocol.h"
#include "FCHeadlineThumbnail.h"

@class NSDictionary, NSString;

@interface FCLocalArticleHeadline : FCHeadline {
  /* instance variables */
  BOOL _webEmbedsEnabled;
  FCHeadlineThumbnail *_thumbnail;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSObject<FCChannelProviding> *channel;

/* instance methods */
- (id)contentWithContext:(id)context;
- (id)initWithDictionary:(id)dictionary path:(id)path channel:(id)channel;
- (id)identifier;
- (id)articleID;
- (unsigned long long)contentType;
- (id)primaryAudience;
- (id)title;
- (id)publishDate;
- (id)sourceChannel;
- (id)sourceName;
- (BOOL)hasThumbnail;
- (id)thumbnail;
- (id)thumbnailAssetHandle;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)shortExcerpt;
- (id)accessoryText;
- (id)contentURL;
- (id)lastModifiedDate;
- (id)topicIDs;
- (id)videoURL;
- (double)videoDuration;
- (BOOL)isFeatureCandidate;
- (BOOL)isSponsored;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)blockedStorefrontIDs;
- (id)allowedStorefrontIDs;
- (BOOL)isDeleted;
- (BOOL)isDraft;
- (BOOL)isLocalDraft;
- (id)surfacedByBinID;
- (id)localDraftPath;
- (BOOL)isPremium;
- (BOOL)useTransparentNavigationBar;
- (BOOL)webEmbedsEnabled;
@end

#endif /* FCLocalArticleHeadline_h */
