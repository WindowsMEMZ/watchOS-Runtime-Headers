//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPLocation_h
#define CLPLocation_h
@import Foundation;

#include "PBCodable.h"
#include "CLPBaroCalibrationIndication.h"
#include "CLPLocationProcessingMetadata.h"
#include "CLPMotionActivity.h"
#include "CLPPipelineDiagnosticReport.h"
#include "CLPSatelliteReport.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface CLPLocation : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 altitude; unsigned int x :1 context; unsigned int x :1 course; unsigned int x :1 courseAccuracy; unsigned int x :1 floor; unsigned int x :1 horzUncSemiMaj; unsigned int x :1 horzUncSemiMajAz; unsigned int x :1 horzUncSemiMin; unsigned int x :1 modeIndicator; unsigned int x :1 motionActivityConfidence; unsigned int x :1 motionActivityType; unsigned int x :1 provider; unsigned int x :1 speed; unsigned int x :1 speedAccuracy; unsigned int x :1 verticalAccuracy; unsigned int x :1 isFromLocationController; unsigned int x :1 motionVehicleConnected; unsigned int x :1 motionVehicleConnectedStateChanged; } _has;
}

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) float horizontalAccuracy;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasAltitude;
@property (nonatomic) float altitude;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) float verticalAccuracy;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) float speed;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) float course;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) int context;
@property (nonatomic) BOOL hasMotionActivityType;
@property (nonatomic) int motionActivityType;
@property (nonatomic) BOOL hasMotionActivityConfidence;
@property (nonatomic) int motionActivityConfidence;
@property (nonatomic) BOOL hasProvider;
@property (nonatomic) int provider;
@property (nonatomic) BOOL hasFloor;
@property (nonatomic) int floor;
@property (retain, nonatomic) NSMutableArray *appBundleIdIndices;
@property (nonatomic) BOOL hasMotionVehicleConnectedStateChanged;
@property (nonatomic) BOOL motionVehicleConnectedStateChanged;
@property (nonatomic) BOOL hasMotionVehicleConnected;
@property (nonatomic) BOOL motionVehicleConnected;
@property (readonly, nonatomic) BOOL hasRawMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *rawMotionActivity;
@property (readonly, nonatomic) BOOL hasMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *motionActivity;
@property (readonly, nonatomic) BOOL hasDominantMotionActivity;
@property (retain, nonatomic) CLPMotionActivity *dominantMotionActivity;
@property (nonatomic) BOOL hasCourseAccuracy;
@property (nonatomic) float courseAccuracy;
@property (nonatomic) BOOL hasSpeedAccuracy;
@property (nonatomic) float speedAccuracy;
@property (nonatomic) BOOL hasModeIndicator;
@property (nonatomic) int modeIndicator;
@property (nonatomic) BOOL hasHorzUncSemiMaj;
@property (nonatomic) float horzUncSemiMaj;
@property (nonatomic) BOOL hasHorzUncSemiMin;
@property (nonatomic) float horzUncSemiMin;
@property (nonatomic) BOOL hasHorzUncSemiMajAz;
@property (nonatomic) float horzUncSemiMajAz;
@property (readonly, nonatomic) BOOL hasSatReport;
@property (retain, nonatomic) CLPSatelliteReport *satReport;
@property (nonatomic) BOOL hasIsFromLocationController;
@property (nonatomic) BOOL isFromLocationController;
@property (readonly, nonatomic) BOOL hasPipelineDiagnosticReport;
@property (retain, nonatomic) CLPPipelineDiagnosticReport *pipelineDiagnosticReport;
@property (readonly, nonatomic) BOOL hasBaroCalibrationIndication;
@property (retain, nonatomic) CLPBaroCalibrationIndication *baroCalibrationIndication;
@property (readonly, nonatomic) BOOL hasProcessingMetadata;
@property (retain, nonatomic) CLPLocationProcessingMetadata *processingMetadata;

/* class methods */
+ (Class)appBundleIdIndicesType;

/* instance methods */
- (void)clearAppBundleIdIndices;
- (void)addAppBundleIdIndices:(id)indices;
- (unsigned long long)appBundleIdIndicesCount;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)index;
- (id)modeIndicatorAsString:(int)string;
- (int)StringAsModeIndicator:(id)indicator;
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

#endif /* CLPLocation_h */
