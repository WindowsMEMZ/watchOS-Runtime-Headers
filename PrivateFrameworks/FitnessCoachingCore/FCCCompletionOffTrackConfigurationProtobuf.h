//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCCCompletionOffTrackConfigurationProtobuf_h
#define FCCCompletionOffTrackConfigurationProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "FCCPercentageOfDayRuleProtobuf.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface FCCCompletionOffTrackConfigurationProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 goalBufferPercentage; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasGoalBufferPercentage;
@property (nonatomic) double goalBufferPercentage;
@property (retain, nonatomic) NSMutableArray *coalescingRules;
@property (readonly, nonatomic) BOOL hasPercentageOfDayRule;
@property (retain, nonatomic) FCCPercentageOfDayRuleProtobuf *percentageOfDayRule;
@property (readonly, nonatomic) unsigned long long allowedGoalTypesCount;
@property (readonly, nonatomic) int * allowedGoalTypes;

/* class methods */
+ (Class)coalescingRulesType;

/* instance methods */
- (void)dealloc;
- (void)clearCoalescingRules;
- (void)addCoalescingRules:(id)rules;
- (unsigned long long)coalescingRulesCount;
- (id)coalescingRulesAtIndex:(unsigned long long)index;
- (void)clearAllowedGoalTypes;
- (void)addAllowedGoalTypes:(int)types;
- (int)allowedGoalTypesAtIndex:(unsigned long long)index;
- (void)setAllowedGoalTypes:(int *)types count:(unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* FCCCompletionOffTrackConfigurationProtobuf_h */
