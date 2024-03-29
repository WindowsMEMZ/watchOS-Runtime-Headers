//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBSportsEventRecord_h
#define NTPBSportsEventRecord_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBRecordBase.h"

@class NSMutableArray, NSString;

@interface NTPBSportsEventRecord : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 minimumNewsVersion; unsigned int x :1 isDeprecated; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL hasSuperfeedConfigResourceID;
@property (retain, nonatomic) NSString *superfeedConfigResourceID;
@property (retain, nonatomic) NSMutableArray *eventCompetitorTagIDs;
@property (readonly, nonatomic) BOOL hasHighlightsArticleListID;
@property (retain, nonatomic) NSString *highlightsArticleListID;
@property (readonly, nonatomic) BOOL hasEventArticleListID;
@property (retain, nonatomic) NSString *eventArticleListID;
@property (readonly, nonatomic) BOOL hasSportsData;
@property (retain, nonatomic) NSString *sportsData;
@property (readonly, nonatomic) BOOL hasSportsTheme;
@property (retain, nonatomic) NSString *sportsTheme;
@property (readonly, nonatomic) BOOL hasEventLeagueTagID;
@property (retain, nonatomic) NSString *eventLeagueTagID;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL isDeprecated;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;

/* class methods */
+ (Class)eventCompetitorTagIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)allowedStorefrontIDsType;

/* instance methods */
- (void)dealloc;
- (void)clearEventCompetitorTagIDs;
- (void)addEventCompetitorTagIDs:(id)ids;
- (unsigned long long)eventCompetitorTagIDsCount;
- (id)eventCompetitorTagIDsAtIndex:(unsigned long long)index;
- (void)clearBlockedStorefrontIDs;
- (void)addBlockedStorefrontIDs:(id)ids;
- (unsigned long long)blockedStorefrontIDsCount;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)index;
- (void)clearAllowedStorefrontIDs;
- (void)addAllowedStorefrontIDs:(id)ids;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBSportsEventRecord_h */
