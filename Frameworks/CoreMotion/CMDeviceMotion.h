//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMDeviceMotion_h
#define CMDeviceMotion_h
@import Foundation;

#include "CMLogItem.h"
#include "CMAttitude.h"

@interface CMDeviceMotion : CMLogItem {
  /* instance variables */
  id _internal;
}

@property (readonly, nonatomic) BOOL usingVisionCorrections;
@property (readonly, nonatomic) BOOL doingYawCorrection;
@property (readonly, nonatomic) BOOL doingBiasEstimation;
@property (readonly, nonatomic) int magneticFieldCalibrationLevel;
@property (readonly, nonatomic) double headingAccuracy;
@property (readonly, nonatomic) BOOL fusedWithVision;
@property (readonly, nonatomic) CMAttitude *attitude;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } rotationRate;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } gravity;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; } userAcceleration;
@property (readonly, nonatomic) struct { struct { double x0; double x1; double x2; } x0; int x1; } magneticField;
@property (readonly, nonatomic) double heading;
@property (readonly, nonatomic) long long sensorLocation;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDeviceMotion:(struct { struct { double x0; double x1; double x2; double x3; } x0; struct { float x0; float x1; float x2; } x1; struct { float x0; float x1; float x2; } x2; struct { float x0; float x1; float x2; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; float x8; BOOL x9; BOOL x10; int x11; })motion internal:(struct { float x0; })internal timestamp:(double)timestamp;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* CMDeviceMotion_h */
