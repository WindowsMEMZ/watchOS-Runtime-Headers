//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIDroste_h
#define CIDroste_h
@import Foundation;

#include "CIFilter.h"
#include "CIImage.h"
#include "CIVector.h"

@class NSNumber;

@interface CIDroste : CIFilter {
  /* instance variables */
  CIVector *inputInsetPoint0;
  CIVector *inputInsetPoint1;
  NSNumber *inputStrands;
  NSNumber *inputPeriodicity;
  NSNumber *inputRotation;
  NSNumber *inputZoom;
}

@property (retain, nonatomic) CIImage *inputImage;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)_CIDroste;
- (id)outputImage;
@end

#endif /* CIDroste_h */
