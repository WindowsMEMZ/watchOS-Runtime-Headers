//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKSiriInteraction_h
#define MKSiriInteraction_h
@import Foundation;

#include "MKMapItem.h"

@class GEOSearchCategory, NSString;

@interface MKSiriInteraction : NSObject

@property (nonatomic) int action;
@property (nonatomic) int target;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) int resultIndex;
@property (retain, nonatomic) GEOSearchCategory *searchCategory;
@property (retain, nonatomic) NSString *searchQueryString;

/* class methods */
+ (void)removeRecentIntentWithPlacemark:(id)placemark;
+ (void)removeRecentIntentWithSearchText:(id)text;
+ (void)generateHashForNavigationURL:(id)url;
+ (id)_siriIntentMurmurHash:(id)hash;
+ (id)navigationHash;
+ (void)setNavigationHash:(id)hash;

/* instance methods */
- (id)initWithGEOUIAction:(int)geouiaction target:(int)target mapItem:(id)item resultIndex:(int)index searchCategory:(id)category searchQueryString:(id)string;
- (id)intentIfWanted;
- (void)donateIfWanted;
- (id)_siriIntentHash:(id)hash;
- (BOOL)_isIntentDeletable;
- (BOOL)_isValidTargetForNavUI:(int)ui;
- (id)_whiteListedPlaceCardActionAsString:(int)string;
- (id)_whiteListedSiriListActionAsString:(int)string;
- (id)_whiteListedBrowseCategoryActionAsString:(int)string;
- (id)_whiteListedSearchActionAsString:(int)string;
- (id)_whiteListedNavigationActionAsString:(int)string;
- (BOOL)_isStartNavigationAction:(int)action;
- (void)_navTimerFired:(id)fired;
@end

#endif /* MKSiriInteraction_h */
