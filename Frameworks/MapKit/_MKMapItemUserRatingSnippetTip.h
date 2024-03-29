//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKMapItemUserRatingSnippetTip_h
#define _MKMapItemUserRatingSnippetTip_h
@import Foundation;

#include "MKMapItem.h"
#include "MKMapItemProviderRatingSnippet-Protocol.h"

@class GEOMapItemTip, NSDate, NSString, NSURL;
@protocol GEOMapItemReview;

@interface _MKMapItemUserRatingSnippetTip : NSObject<MKMapItemProviderRatingSnippet> {
  /* instance variables */
  MKMapItem *_mapItem;
  GEOMapItemTip *_tip;
}

@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double maxScore;
@property (readonly, nonatomic) double normalizedScore;
@property (readonly, nonatomic) NSString *localizedSnippet;
@property (readonly, nonatomic) NSString *localizedSnippetLocale;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *reviewerName;
@property (readonly, nonatomic) NSURL *reviewerImageURL;
@property (readonly, nonatomic) NSObject<GEOMapItemReview> *geoReview;
@property (readonly, nonatomic) GEOMapItemTip *geoMapItemTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMapItem:(id)item review:(id)review;
- (double)_normalizedScore;
- (double)_maxScore;
- (double)_score;
- (id)_geoReview;
- (id)_reviewerName;
- (id)_localizedSnippet;
- (id)_localizedSnippetLocale;
- (id)_reviewerImageURL;
- (id)_geoMapItemTIp;
- (id)_date;
- (void)showWithCompletionHandler:(id /* block */)handler;
@end

#endif /* _MKMapItemUserRatingSnippetTip_h */
