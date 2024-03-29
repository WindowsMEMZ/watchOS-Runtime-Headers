//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIConvertLabToRGB_h
#define CIConvertLabToRGB_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"

@class NSNumber;

@interface CIConvertLabToRGB : CIFilter

@property (retain, nonatomic) CIImage *inputImage;
@property (retain, nonatomic) NSNumber *inputNormalize;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)outputImage;
@end

#endif /* CIConvertLabToRGB_h */
