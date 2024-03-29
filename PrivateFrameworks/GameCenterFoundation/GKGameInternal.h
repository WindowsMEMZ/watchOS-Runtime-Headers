//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKGameInternal_h
#define GKGameInternal_h
@import Foundation;

#include "GKGameDescriptor.h"
#include "GKGameDescriptor.h"

@class NSDictionary, NSSet, NSString, NSURL;

@interface GKGameInternal : GKGameDescriptor

@property (readonly, @dynamic, nonatomic) NSURL *storeURL;
@property (@dynamic, nonatomic) unsigned int flags;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *icons;
@property (@dynamic, nonatomic) BOOL prerendered;
@property (@dynamic, nonatomic) BOOL supportsLeaderboards;
@property (nonatomic) BOOL hasAggregateLeaderboard;
@property (nonatomic) unsigned short numberOfLeaderboards;
@property (retain, nonatomic) NSString *defaultLeaderboardIdentifier;
@property (@dynamic, nonatomic) BOOL supportsLeaderboardSets;
@property (nonatomic) unsigned short numberOfLeaderboardSets;
@property (@dynamic, nonatomic) BOOL supportsAchievements;
@property (nonatomic) unsigned short numberOfAchievements;
@property (nonatomic) unsigned short maxAchievementPoints;
@property (@dynamic, nonatomic) BOOL supportsMultiplayer;
@property (@dynamic, nonatomic) BOOL supportsTurnBasedMultiplayer;
@property (retain, nonatomic) NSSet *compatiblePlatforms;
@property (retain, nonatomic) NSSet *supportedTransports;
@property (readonly, nonatomic) BOOL canBeIndexed;
@property (@dynamic, nonatomic) BOOL valid;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (@dynamic, nonatomic) BOOL isArcadeGame;
@property (@dynamic, nonatomic) BOOL supportsChallenges;

/* class methods */
+ (id)secureCodedPropertyKeys;
+ (id)createGamedGameInternal;
+ (id)createGameControllerDaemonGameInternal;

/* instance methods */
- (id)storeItemURLForURL:(id)url gamePlatform:(long long)platform extraQueryParams:(id)params;
- (void)storeItemURLForGamePlatform:(long long)platform withContext:(id)context withHandler:(id /* block */)handler;
- (unsigned short)numberOfCategories;
- (id)defaultCategory;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)serverRepresentation;
- (id)description;
- (BOOL)isPrerendered;
- (BOOL)isValid;
@end

#endif /* GKGameInternal_h */
