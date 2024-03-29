//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHCodableAchievementProgressUpdate_h
#define ACHCodableAchievementProgressUpdate_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface ACHCodableAchievementProgressUpdate : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 goalQuantityValue; unsigned int x :1 progressQuantityValue; } _has;
}

@property (readonly, nonatomic) BOOL hasTemplateUniqueName;
@property (retain, nonatomic) NSString *templateUniqueName;
@property (nonatomic) BOOL hasProgressQuantityValue;
@property (nonatomic) double progressQuantityValue;
@property (readonly, nonatomic) BOOL hasProgressQuantityUnit;
@property (retain, nonatomic) NSString *progressQuantityUnit;
@property (nonatomic) BOOL hasGoalQuantityValue;
@property (nonatomic) double goalQuantityValue;
@property (readonly, nonatomic) BOOL hasGoalQuantityUnit;
@property (retain, nonatomic) NSString *goalQuantityUnit;

/* instance methods */
- (id)initWithSerializedData:(id)data error:(id *)error;
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

#endif /* ACHCodableAchievementProgressUpdate_h */
