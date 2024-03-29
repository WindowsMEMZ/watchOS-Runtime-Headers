//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateMapsFeatures_h
#define GEOLogMsgStateMapsFeatures_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOLogMsgStateMapsFeatures : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_favoritesCount; unsigned int x :1 has_followedPublisherCount; unsigned int x :1 has_personalCollectionsCount; unsigned int x :1 has_savedCollectionsCount; unsigned int x :1 has_submittedPhotosCount; unsigned int x :1 has_submittedRatingsCount; unsigned int x :1 has_homeFavoriteSet; unsigned int x :1 has_schoolFavoriteSet; unsigned int x :1 has_transitFavoriteSet; unsigned int x :1 has_workFavoriteSet; } _flags;
}

@property (nonatomic) BOOL hasHomeFavoriteSet;
@property (nonatomic) BOOL homeFavoriteSet;
@property (nonatomic) BOOL hasWorkFavoriteSet;
@property (nonatomic) BOOL workFavoriteSet;
@property (nonatomic) BOOL hasSchoolFavoriteSet;
@property (nonatomic) BOOL schoolFavoriteSet;
@property (nonatomic) BOOL hasFavoritesCount;
@property (nonatomic) int favoritesCount;
@property (nonatomic) BOOL hasPersonalCollectionsCount;
@property (nonatomic) int personalCollectionsCount;
@property (nonatomic) BOOL hasSavedCollectionsCount;
@property (nonatomic) int savedCollectionsCount;
@property (nonatomic) BOOL hasFollowedPublisherCount;
@property (nonatomic) int followedPublisherCount;
@property (nonatomic) BOOL hasSubmittedRatingsCount;
@property (nonatomic) int submittedRatingsCount;
@property (nonatomic) BOOL hasSubmittedPhotosCount;
@property (nonatomic) int submittedPhotosCount;
@property (nonatomic) BOOL hasTransitFavoriteSet;
@property (nonatomic) BOOL transitFavoriteSet;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOLogMsgStateMapsFeatures_h */
