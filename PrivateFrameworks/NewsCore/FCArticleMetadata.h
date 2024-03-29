//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCArticleMetadata_h
#define FCArticleMetadata_h
@import Foundation;

#include "FCHeadlineMetadata-Protocol.h"
#include "FCHeadlineThumbnailMetadata.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface FCArticleMetadata : NSObject<FCHeadlineMetadata>

@property (retain, nonatomic) NSDictionary *dictionary;
@property (retain, nonatomic) NSDate *displayDate;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL isTreatedAsNew;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) NSString *thumbnailTextColor;
@property (readonly, nonatomic) NSString *thumbnailBackgroundColor;
@property (readonly, nonatomic) NSString *sourceChannelTagID;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSString *thumbnailAccentColor;
@property (readonly, nonatomic) NSString *thumbnailPrimaryColor;
@property (readonly, nonatomic) BOOL isPaid;
@property (readonly, nonatomic) NSString *rapidUpdate;
@property (readonly, nonatomic) NSString *thumbnail;
@property (readonly, nonatomic) long long thumbnailMetadata;
@property (readonly, nonatomic) NSString *thumbnailMedium;
@property (readonly, nonatomic) long long thumbnailMediumMetadata;
@property (readonly, nonatomic) NSString *thumbnailHQ;
@property (readonly, nonatomic) long long thumbnailHQMetadata;
@property (readonly, nonatomic) NSString *thumbnailUltraHQ;
@property (readonly, nonatomic) long long thumbnailUltraHQMetadata;
@property (readonly, nonatomic) long long thumbnailFocalFrame;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NSString *contentURL;
@property (readonly, nonatomic) NSString *videoURL;
@property (readonly, nonatomic) NSString *videoType;
@property (readonly, nonatomic) NSArray *sportsEventIDs;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly, nonatomic) FCHeadlineThumbnailMetadata *formatThumbnail;
@property (readonly, nonatomic) NSURL *routeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithDictionary:(id)dictionary identifier:(id)identifier;
- (id)publisherID;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FCArticleMetadata_h */
