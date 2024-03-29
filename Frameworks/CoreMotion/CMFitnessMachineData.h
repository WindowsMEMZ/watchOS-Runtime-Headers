//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMFitnessMachineData_h
#define CMFitnessMachineData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString;

@interface CMFitnessMachineData : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  double fTimestamp;
}

@property (nonatomic) int externalFitnessType;
@property (nonatomic) NSString *deviceIdentifier;
@property (nonatomic) NSString *manufacturer;
@property (nonatomic) NSString *model;
@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double totalEnergy;
@property (nonatomic) double totalDistance;
@property (nonatomic) double totalElevationAscended;
@property (nonatomic) long long totalStrideCount;
@property (nonatomic) long long totalStrokeCount;
@property (nonatomic) long long totalFloorsClimbed;
@property (nonatomic) double instantaneousSpeed;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;
@property (nonatomic) double inclination;
@property (nonatomic) double resistanceLevel;

/* class methods */
+ (BOOL)isAvailable;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTimestamp:(id)timestamp;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (void)convertToCLFitnessMachineData:(struct _CLFitnessMachineData { double x0; double x1; double x2; double x3; double x4; long long x5; long long x6; long long x7; double x8; double x9; int x10; double x11; double x12; int x13; double x14; double x15; int x16; double x17; double x18; double x19; int x20; BOOL x21; } *)data deviceId:(int)id;
- (id)initWithExernalBikeSensorData:(double)data speed:(double)speed cadence:(double)cadence power:(double)power model:(id)model deviceIdentifier:(id)identifier manufacturer:(id)manufacturer externalFitnessType:(int)type;
- (void)initializeVariables;
@end

#endif /* CMFitnessMachineData_h */
