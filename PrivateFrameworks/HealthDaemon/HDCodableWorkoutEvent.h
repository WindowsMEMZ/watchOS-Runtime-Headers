//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableWorkoutEvent_h
#define HDCodableWorkoutEvent_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableMetadataDictionary.h"
#include "NSCopying-Protocol.h"

@interface HDCodableWorkoutEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 date; unsigned int x :1 duration; unsigned int x :1 swimmingStrokeStyle; unsigned int x :1 type; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) long long type;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasSwimmingStrokeStyle;
@property (nonatomic) long long swimmingStrokeStyle;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HDCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;

/* instance methods */
- (id)decodedDateIntervalStartDate;
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

#endif /* HDCodableWorkoutEvent_h */
