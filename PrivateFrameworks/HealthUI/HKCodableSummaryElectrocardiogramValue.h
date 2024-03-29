//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryElectrocardiogramValue_h
#define HKCodableSummaryElectrocardiogramValue_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodableQuantity.h"
#include "NSCopying-Protocol.h"

@interface HKCodableSummaryElectrocardiogramValue : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryElectrocardiogramValue_1 { unsigned int x :1 algorithmVersionRawValue; unsigned int x :1 classificationRawValue; unsigned int x :1 timestampData; } _has;
}

@property (nonatomic) BOOL hasAlgorithmVersionRawValue;
@property (nonatomic) long long algorithmVersionRawValue;
@property (nonatomic) BOOL hasClassificationRawValue;
@property (nonatomic) long long classificationRawValue;
@property (readonly, nonatomic) BOOL hasAverageHeartRate;
@property (retain, nonatomic) HKCodableQuantity *averageHeartRate;
@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;

/* instance methods */
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

#endif /* HKCodableSummaryElectrocardiogramValue_h */
