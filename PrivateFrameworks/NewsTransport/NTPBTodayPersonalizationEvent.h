//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBTodayPersonalizationEvent_h
#define NTPBTodayPersonalizationEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface NTPBTodayPersonalizationEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 createdAt; unsigned int x :1 groupType; unsigned int x :1 orderInGroup; unsigned int x :1 overallOrder; unsigned int x :1 sectionOrder; unsigned int x :1 action; } _has;
}

@property (nonatomic) BOOL hasAction;
@property (nonatomic) int action;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (retain, nonatomic) NSMutableArray *headlineTopics;
@property (readonly, nonatomic) BOOL hasHeadlinePublisher;
@property (retain, nonatomic) NSString *headlinePublisher;
@property (nonatomic) BOOL hasCreatedAt;
@property (nonatomic) double createdAt;
@property (nonatomic) BOOL hasOrderInGroup;
@property (nonatomic) long long orderInGroup;
@property (nonatomic) BOOL hasOverallOrder;
@property (nonatomic) long long overallOrder;
@property (nonatomic) BOOL hasSectionOrder;
@property (nonatomic) long long sectionOrder;
@property (readonly, nonatomic) BOOL hasPersonalizationSectionFeatureId;
@property (retain, nonatomic) NSString *personalizationSectionFeatureId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) long long groupType;

/* class methods */
+ (Class)headlineTopicsType;

/* instance methods */
- (void)clearHeadlineTopics;
- (void)addHeadlineTopics:(id)topics;
- (unsigned long long)headlineTopicsCount;
- (id)headlineTopicsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBTodayPersonalizationEvent_h */
