//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFeedTransformationHideInAutoFavorites_h
#define FCFeedTransformationHideInAutoFavorites_h
@import Foundation;

#include "FCFeedTransforming-Protocol.h"

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationHideInAutoFavorites : NSObject<FCFeedTransforming>

@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) NSSet *autoFavoriteTagIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)transformationWithFeedContextByFeedID:(id)id autoFavoriteTagIDs:(id)ids;

/* instance methods */
- (id)transformFeedItems:(id)items;
@end

#endif /* FCFeedTransformationHideInAutoFavorites_h */
