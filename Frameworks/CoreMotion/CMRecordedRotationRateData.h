//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMRecordedRotationRateData_h
#define CMRecordedRotationRateData_h
@import Foundation;

#include "CMRotationRateData.h"

@class NSDate;

@interface CMRecordedRotationRateData : CMRotationRateData {
  /* instance variables */
  double _startDateValue;
  struct { double x; double y; double z; } _rotationRate;
  double _timestampValue;
}

@property (readonly) NSDate *startDate;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithData:(struct CMGyro200 { float x0; float x1; float x2; float x3; unsigned long long x4; } *)data timestamp:(unsigned long long)timestamp walltime:(double)walltime;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (struct { double x0; double x1; double x2; })rotationRate;
- (double)timestamp;
- (id)description;
@end

#endif /* CMRecordedRotationRateData_h */
