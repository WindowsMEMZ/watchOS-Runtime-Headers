//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIPortraitBlurDirectionalBlur_h
#define CIPortraitBlurDirectionalBlur_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"

@class NSNumber;

@interface CIPortraitBlurDirectionalBlur : CIFilter

@property (retain) CIImage *inputImage;
@property (copy, nonatomic) NSNumber *inputMaxBlur;
@property (copy, nonatomic) NSNumber *inputHorizontalBlur;
@property (copy, nonatomic) NSNumber *inputAntiAliasBlurStrength;
@property (copy, nonatomic) NSNumber *inputUseMetal;

/* instance methods */
- (id)_kernel;
- (id)_kernelMetal;
- (id)outputImage;
@end

#endif /* CIPortraitBlurDirectionalBlur_h */
