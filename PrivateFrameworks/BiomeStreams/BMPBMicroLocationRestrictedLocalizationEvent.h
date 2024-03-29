//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBMicroLocationRestrictedLocalizationEvent_h
#define BMPBMicroLocationRestrictedLocalizationEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface BMPBMicroLocationRestrictedLocalizationEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 absoluteTimeStamp; unsigned int x :1 maxProbability; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimeStamp;
@property (nonatomic) double absoluteTimeStamp;
@property (readonly, nonatomic) BOOL hasClientBundleId;
@property (retain, nonatomic) NSString *clientBundleId;
@property (readonly, nonatomic) BOOL hasMaxProbabilityLabel;
@property (retain, nonatomic) NSString *maxProbabilityLabel;
@property (nonatomic) BOOL hasMaxProbability;
@property (nonatomic) double maxProbability;
@property (retain, nonatomic) NSMutableArray *probabilityVectors;
@property (retain, nonatomic) NSMutableArray *numDevicesVectors;

/* class methods */
+ (Class)probabilityVectorType;
+ (Class)numDevicesVectorType;

/* instance methods */
- (void)clearProbabilityVectors;
- (void)addProbabilityVector:(id)vector;
- (unsigned long long)probabilityVectorsCount;
- (id)probabilityVectorAtIndex:(unsigned long long)index;
- (void)clearNumDevicesVectors;
- (void)addNumDevicesVector:(id)vector;
- (unsigned long long)numDevicesVectorsCount;
- (id)numDevicesVectorAtIndex:(unsigned long long)index;
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

#endif /* BMPBMicroLocationRestrictedLocalizationEvent_h */
