//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKFriendRecommendationInternal_h
#define GKFriendRecommendationInternal_h
@import Foundation;

#include "GKFamiliarPlayerInternal.h"

@class NSString;

@interface GKFriendRecommendationInternal : GKFamiliarPlayerInternal

@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

/* instance methods */
- (int)defaultFamiliarity;
@end

#endif /* GKFriendRecommendationInternal_h */
