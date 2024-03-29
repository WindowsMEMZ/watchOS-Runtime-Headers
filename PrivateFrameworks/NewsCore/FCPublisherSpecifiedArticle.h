//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPublisherSpecifiedArticle_h
#define FCPublisherSpecifiedArticle_h
@import Foundation;

#include "FCHeadlineMetadata-Protocol.h"
#include "FCHeadlineThumbnailMetadata.h"

@class NSDate, NSString, NSURL;

@interface FCPublisherSpecifiedArticle : NSObject<FCHeadlineMetadata>

@property (copy, nonatomic) NSString *articleID;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *displayDate;
@property (readonly, nonatomic) NSString *storyType;
@property (readonly, nonatomic) NSString *shortExcerpt;
@property (readonly, nonatomic) FCHeadlineThumbnailMetadata *formatThumbnail;
@property (readonly, nonatomic) NSURL *routeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FCPublisherSpecifiedArticle_h */
