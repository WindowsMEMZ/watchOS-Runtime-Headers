//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIRoundedRectangleGenerator_h
#define CIRoundedRectangleGenerator_h
@import Foundation;

#include "CIFilter.h"
#include "CIColor.h"
#include "CIVector.h"

@class NSNumber;

@interface CIRoundedRectangleGenerator : CIFilter

@property (retain, nonatomic) CIVector *inputExtent;
@property (retain, nonatomic) NSNumber *inputRadius;
@property (retain, nonatomic) CIColor *inputColor;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)outputImage;
@end

#endif /* CIRoundedRectangleGenerator_h */
