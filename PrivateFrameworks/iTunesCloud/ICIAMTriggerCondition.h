//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICIAMTriggerCondition_h
#define ICIAMTriggerCondition_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface ICIAMTriggerCondition : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 comparisonType; unsigned int x :1 dataType; unsigned int x :1 kind; unsigned int x :1 triggerConditionType; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) int dataType;
@property (nonatomic) BOOL hasComparisonType;
@property (nonatomic) int comparisonType;
@property (readonly, nonatomic) BOOL hasTriggerValue;
@property (retain, nonatomic) NSString *triggerValue;
@property (nonatomic) BOOL hasTriggerConditionType;
@property (nonatomic) int triggerConditionType;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) int kind;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;

/* instance methods */
- (id)dataTypeAsString:(int)string;
- (int)StringAsDataType:(id)type;
- (id)comparisonTypeAsString:(int)string;
- (int)StringAsComparisonType:(id)type;
- (id)triggerConditionTypeAsString:(int)string;
- (int)StringAsTriggerConditionType:(id)type;
- (id)kindAsString:(int)string;
- (int)StringAsKind:(id)kind;
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

#endif /* ICIAMTriggerCondition_h */
