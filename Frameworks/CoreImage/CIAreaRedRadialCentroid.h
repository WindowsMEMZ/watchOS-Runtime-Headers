//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIAreaRedRadialCentroid_h
#define CIAreaRedRadialCentroid_h
@import Foundation;

#include "CIAreaRedCentroid.h"
#include "CIImage.h"

@class NSNumber;

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid

@property (retain, nonatomic) CIImage *inputCenter;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) NSNumber *inputRadialMode;
@property (retain, nonatomic) NSNumber *inputMinWeight;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)_kernelGaussian;
- (id)_kernelDisk;
- (id)_kernelCenter;
- (id)outputImage;
@end

#endif /* CIAreaRedRadialCentroid_h */
