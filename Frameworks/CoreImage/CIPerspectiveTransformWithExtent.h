//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIPerspectiveTransformWithExtent_h
#define CIPerspectiveTransformWithExtent_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"
#include "CIVector.h"

@interface CIPerspectiveTransformWithExtent : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) CIVector *inputTopLeft;
@property (retain, nonatomic) CIVector *inputTopRight;
@property (retain, nonatomic) CIVector *inputBottomRight;
@property (retain, nonatomic) CIVector *inputBottomLeft;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)_kernel;
- (id)outputImage;
@end

#endif /* CIPerspectiveTransformWithExtent_h */
