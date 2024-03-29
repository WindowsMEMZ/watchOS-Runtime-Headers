//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CISpotColor_h
#define CISpotColor_h
@import Foundation;

#include "CIFilter.h"
#include "CIColor.h"
#include "CIImage.h"

@class NSNumber;

@interface CISpotColor : CIFilter {
  /* instance variables */
  CIColor *inputCenterColor1;
  CIColor *inputReplacementColor1;
  NSNumber *inputCloseness1;
  NSNumber *inputContrast1;
  CIColor *inputCenterColor2;
  CIColor *inputReplacementColor2;
  NSNumber *inputCloseness2;
  NSNumber *inputContrast2;
  CIColor *inputCenterColor3;
  CIColor *inputReplacementColor3;
  NSNumber *inputCloseness3;
  NSNumber *inputContrast3;
}

@property (retain, nonatomic) CIImage *inputImage;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)_CISpotColor;
- (id)outputImage;
@end

#endif /* CISpotColor_h */
