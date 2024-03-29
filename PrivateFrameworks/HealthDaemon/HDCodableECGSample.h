//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableECGSample_h
#define HDCodableECGSample_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableSample.h"
#include "HDDecoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HDCodableECGSample : PBCodable<HDDecoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 averageHeartRateInBPM; unsigned int x :1 privateClassification; unsigned int x :1 symptomsStatus; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) BOOL hasPrivateClassification;
@property (nonatomic) long long privateClassification;
@property (nonatomic) BOOL hasAverageHeartRateInBPM;
@property (nonatomic) double averageHeartRateInBPM;
@property (readonly, nonatomic) BOOL hasVoltagePayload;
@property (retain, nonatomic) NSData *voltagePayload;
@property (nonatomic) BOOL hasSymptomsStatus;
@property (nonatomic) long long symptomsStatus;

/* instance methods */
- (BOOL)applyToObject:(id)object;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
@end

#endif /* HDCodableECGSample_h */
