//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryVisionPrescriptionValue_h
#define HKCodableSummaryVisionPrescriptionValue_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodablePrescriptionType.h"
#include "HKCodableQuantity.h"
#include "NSCopying-Protocol.h"

@interface HKCodableSummaryVisionPrescriptionValue : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryVisionPrescriptionValue_1 { unsigned int x :1 timestampData; unsigned int x :1 hasImage; } _has;
}

@property (nonatomic) BOOL hasTimestampData;
@property (nonatomic) double timestampData;
@property (readonly, nonatomic) BOOL hasPrescriptionType;
@property (retain, nonatomic) HKCodablePrescriptionType *prescriptionType;
@property (nonatomic) BOOL hasHasImage;
@property (nonatomic) BOOL hasImage;
@property (readonly, nonatomic) BOOL hasLeftEyeSphere;
@property (retain, nonatomic) HKCodableQuantity *leftEyeSphere;
@property (readonly, nonatomic) BOOL hasRightEyeSphere;
@property (retain, nonatomic) HKCodableQuantity *rightEyeSphere;

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

#endif /* HKCodableSummaryVisionPrescriptionValue_h */
