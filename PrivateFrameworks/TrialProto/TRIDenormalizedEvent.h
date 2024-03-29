//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIDenormalizedEvent_h
#define TRIDenormalizedEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "TRIMLRuntimeDimensions.h"
#include "TRISubject.h"
#include "TRISystemDimensions.h"
#include "TRITrialSystemTelemetry.h"

@class NSMutableArray;

@interface TRIDenormalizedEvent : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) TRISubject *subject;
@property (retain, nonatomic) NSMutableArray *treatments;
@property (readonly, nonatomic) BOOL hasSystemDimensions;
@property (retain, nonatomic) TRISystemDimensions *systemDimensions;
@property (retain, nonatomic) NSMutableArray *userDimensions;
@property (retain, nonatomic) NSMutableArray *metrics;
@property (readonly, nonatomic) BOOL hasTrialSystemTelemetry;
@property (retain, nonatomic) TRITrialSystemTelemetry *trialSystemTelemetry;
@property (readonly, nonatomic) BOOL hasMlruntimeDimensions;
@property (retain, nonatomic) TRIMLRuntimeDimensions *mlruntimeDimensions;

/* class methods */
+ (Class)treatmentType;
+ (Class)userDimensionType;
+ (Class)metricType;

/* instance methods */
- (void)clearTreatments;
- (void)addTreatment:(id)treatment;
- (unsigned long long)treatmentsCount;
- (id)treatmentAtIndex:(unsigned long long)index;
- (void)clearUserDimensions;
- (void)addUserDimension:(id)dimension;
- (unsigned long long)userDimensionsCount;
- (id)userDimensionAtIndex:(unsigned long long)index;
- (void)clearMetrics;
- (void)addMetric:(id)metric;
- (unsigned long long)metricsCount;
- (id)metricAtIndex:(unsigned long long)index;
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

#endif /* TRIDenormalizedEvent_h */
