//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIPerspectiveCorrection_h
#define CIPerspectiveCorrection_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"
#include "CIVector.h"

@class NSNumber;

@interface CIPerspectiveCorrection : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) CIVector *inputTopLeft;
@property (retain, nonatomic) CIVector *inputTopRight;
@property (retain, nonatomic) CIVector *inputBottomRight;
@property (retain, nonatomic) CIVector *inputBottomLeft;
@property (retain, nonatomic) NSNumber *inputCrop;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)_kernel;
- (id)outputImage;
@end

#endif /* CIPerspectiveCorrection_h */
