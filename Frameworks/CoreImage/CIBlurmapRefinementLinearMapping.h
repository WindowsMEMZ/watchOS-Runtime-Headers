//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIBlurmapRefinementLinearMapping_h
#define CIBlurmapRefinementLinearMapping_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"

@class NSNumber;

@interface CIBlurmapRefinementLinearMapping : CIFilter

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputSecondaryImage;
@property (retain) NSNumber *inputScalingFactor;

/* instance methods */
- (id)kernelNoSecondaryImage;
- (id)kernel;
- (id)outputImage;
@end

#endif /* CIBlurmapRefinementLinearMapping_h */
