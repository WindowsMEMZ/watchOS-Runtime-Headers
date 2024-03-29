//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCNewsTabiEventAggregationConditions_h
#define FCNewsTabiEventAggregationConditions_h
@import Foundation;

#include "FCNewsTabiEventAggregationArticleDislikedConditions.h"
#include "FCNewsTabiEventAggregationArticleLikedConditions.h"
#include "FCNewsTabiEventAggregationArticleReadConditions.h"
#include "FCNewsTabiEventAggregationArticleSavedConditions.h"
#include "FCNewsTabiEventAggregationArticleSeenConditions.h"
#include "FCNewsTabiEventAggregationArticleSharedConditions.h"
#include "FCNewsTabiEventAggregationArticleUndislikedConditions.h"
#include "FCNewsTabiEventAggregationArticleUnlikedConditions.h"
#include "FCNewsTabiEventAggregationArticleUnsavedConditions.h"
#include "FCNewsTabiEventAggregationArticleVisitedConditions.h"
#include "FCNewsTabiEventAggregationTrackFinishedConditions.h"
#include "FCNewsTabiEventAggregationTrackListenedConditions.h"
#include "FCNewsTabiEventAggregationTrackVisitedConditions.h"

@class NSDictionary;

@interface FCNewsTabiEventAggregationConditions : NSObject

@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleSeenConditions *articleSeenConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleReadConditions *articleReadConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleVisitedConditions *articleVisitedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleSharedConditions *articleSharedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleLikedConditions *articleLikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleDislikedConditions *articleDislikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleSavedConditions *articleSavedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationTrackVisitedConditions *trackVisitedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationTrackListenedConditions *trackListenedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationTrackFinishedConditions *trackFinishedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleUnlikedConditions *articleUnlikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleUndislikedConditions *articleUndislikedConditions;
@property (readonly, nonatomic) FCNewsTabiEventAggregationArticleUnsavedConditions *articleUnsavedConditions;
@property (readonly, nonatomic) NSDictionary *dictionary;

/* class methods */
+ (id)readOnlyConditions;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* FCNewsTabiEventAggregationConditions_h */
