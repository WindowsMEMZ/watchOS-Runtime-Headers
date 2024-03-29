//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBPuzzleRecord_h
#define NTPBPuzzleRecord_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBDate.h"
#include "NTPBRecordBase.h"

@class NSMutableArray, NSString;

@interface NTPBPuzzleRecord : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 behaviorFlags; unsigned int x :1 difficultyLevel; unsigned int x :1 minimumNewsVersion; unsigned int x :1 isDeprecated; unsigned int x :1 isDraft; unsigned int x :1 isPaid; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasPuzzleDescription;
@property (retain, nonatomic) NSString *puzzleDescription;
@property (readonly, nonatomic) BOOL hasPuzzleTypeId;
@property (retain, nonatomic) NSString *puzzleTypeId;
@property (readonly, nonatomic) BOOL hasDataResourceId;
@property (retain, nonatomic) NSString *dataResourceId;
@property (retain, nonatomic) NSMutableArray *authors;
@property (nonatomic) BOOL hasIsPaid;
@property (nonatomic) BOOL isPaid;
@property (readonly, nonatomic) BOOL hasPublishedDate;
@property (retain, nonatomic) NTPBDate *publishedDate;
@property (nonatomic) BOOL hasDifficultyLevel;
@property (nonatomic) long long difficultyLevel;
@property (readonly, nonatomic) BOOL hasThumbnailImageCompactURL;
@property (retain, nonatomic) NSString *thumbnailImageCompactURL;
@property (readonly, nonatomic) BOOL hasThumbnailImageLargeURL;
@property (retain, nonatomic) NSString *thumbnailImageLargeURL;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSMutableArray *blockedStorefrontIDs;
@property (retain, nonatomic) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic) BOOL hasMinimumNewsVersion;
@property (nonatomic) long long minimumNewsVersion;
@property (readonly, nonatomic) BOOL hasTeaserConfiguration;
@property (retain, nonatomic) NSString *teaserConfiguration;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL hasBehaviorFlags;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic) BOOL hasIsDeprecated;
@property (nonatomic) BOOL isDeprecated;
@property (nonatomic) BOOL hasIsDraft;
@property (nonatomic) BOOL isDraft;

/* class methods */
+ (Class)authorsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)allowedStorefrontIDsType;

/* instance methods */
- (void)dealloc;
- (void)clearAuthors;
- (void)addAuthors:(id)authors;
- (unsigned long long)authorsCount;
- (id)authorsAtIndex:(unsigned long long)index;
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

#endif /* NTPBPuzzleRecord_h */
