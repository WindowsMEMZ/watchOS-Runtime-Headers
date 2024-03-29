//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 160.0.2.0.0
//
#ifndef CLPLOGENTRYVISIONVIOEstimation_h
#define CLPLOGENTRYVISIONVIOEstimation_h
@import Foundation;

#include "PBCodable.h"
#include "CLPLOGENTRYVISIONCGSize.h"
#include "CLPLOGENTRYVISIONSimdFloatMxN.h"
#include "CLPLOGENTRYVISIONTimeStamp.h"
#include "CLPLOGENTRYVISIONVIOInertialCovarianceInfo.h"
#include "CLPLOGENTRYVISIONVIOInertialStateInfo.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface CLPLOGENTRYVISIONVIOEstimation : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 trackingState; } _has;
}

@property (nonatomic) BOOL hasTrackingState;
@property (nonatomic) int trackingState;
@property (readonly, nonatomic) BOOL hasOriginTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *originTimestamp;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) BOOL hasInertialStateInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialStateInfo *inertialStateInfo;
@property (readonly, nonatomic) BOOL hasInertialState;
@property (retain, nonatomic) NSData *inertialState;
@property (readonly, nonatomic) BOOL hasInertialCovarianceInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialCovarianceInfo *inertialCovarianceInfo;
@property (readonly, nonatomic) BOOL hasInertialCovariance;
@property (retain, nonatomic) NSData *inertialCovariance;
@property (readonly, nonatomic) BOOL hasCameraPose;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraPose;
@property (readonly, nonatomic) BOOL hasCameraIntrinsics;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraIntrinsics;
@property (readonly, nonatomic) BOOL hasCameraImageResolution;
@property (retain, nonatomic) CLPLOGENTRYVISIONCGSize *cameraImageResolution;

/* instance methods */
- (id)trackingStateAsString:(int)string;
- (int)StringAsTrackingState:(id)state;
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

#endif /* CLPLOGENTRYVISIONVIOEstimation_h */
