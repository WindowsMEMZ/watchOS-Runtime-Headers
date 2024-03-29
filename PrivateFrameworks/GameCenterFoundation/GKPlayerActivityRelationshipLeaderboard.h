//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKPlayerActivityRelationshipLeaderboard_h
#define GKPlayerActivityRelationshipLeaderboard_h
@import Foundation;

#include "GKPlayerActivityRelationshipBase.h"
#include "GKLeaderboardInternal.h"

@class NSArray;

@interface GKPlayerActivityRelationshipLeaderboard : GKPlayerActivityRelationshipBase

@property (retain, nonatomic) NSArray *scores;
@property (nonatomic) long long leaderboardType;
@property (retain, nonatomic) GKLeaderboardInternal *leaderboardInternal;

/* class methods */
+ (id)secureCodedPropertyKeys;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;
@end

#endif /* GKPlayerActivityRelationshipLeaderboard_h */
