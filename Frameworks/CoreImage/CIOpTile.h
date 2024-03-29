//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIOpTile_h
#define CIOpTile_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"
#include "CIVector.h"

@class NSNumber;

@interface CIOpTile : CIFilter {
  /* instance variables */
  CIVector *inputCenter;
  NSNumber *inputScale;
  NSNumber *inputAngle;
  NSNumber *inputWidth;
}

@property (retain, nonatomic) CIImage *inputImage;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)_CIOpTile;
- (id)outputImage;
@end

#endif /* CIOpTile_h */
