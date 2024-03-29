//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIConvolution9Horizontal_h
#define CIConvolution9Horizontal_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"
#include "CIVector.h"

@class NSNumber;

@interface CIConvolution9Horizontal : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputWeights;
@property (retain, nonatomic) NSNumber *inputBias;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (BOOL)_isIdentity;
- (id)outputImage;
@end

#endif /* CIConvolution9Horizontal_h */
