//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBPersonalizedTodaySectionSpecificConfig_h
#define NTPBPersonalizedTodaySectionSpecificConfig_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBPersonalizedTodaySectionSpecificConfig : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 maxArticlesShown; } _has;
}

@property (retain, nonatomic) NSMutableArray *mandatoryArticles;
@property (retain, nonatomic) NSMutableArray *personalizedArticles;
@property (nonatomic) BOOL hasMaxArticlesShown;
@property (nonatomic) unsigned long long maxArticlesShown;

/* class methods */
+ (Class)mandatoryArticlesType;
+ (Class)personalizedArticlesType;

/* instance methods */
- (void)dealloc;
- (void)clearMandatoryArticles;
- (void)addMandatoryArticles:(id)articles;
- (unsigned long long)mandatoryArticlesCount;
- (id)mandatoryArticlesAtIndex:(unsigned long long)index;
- (void)clearPersonalizedArticles;
- (void)addPersonalizedArticles:(id)articles;
- (unsigned long long)personalizedArticlesCount;
- (id)personalizedArticlesAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBPersonalizedTodaySectionSpecificConfig_h */
