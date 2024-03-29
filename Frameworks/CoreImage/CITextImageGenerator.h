//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CITextImageGenerator_h
#define CITextImageGenerator_h
@import Foundation;

#include "CIFilter.h"

@class NSNumber, NSString;

@interface CITextImageGenerator : CIFilter

@property (retain, nonatomic) NSString *inputText;
@property (retain, nonatomic) NSString *inputFontName;
@property (retain, nonatomic) NSNumber *inputFontSize;
@property (retain, nonatomic) NSNumber *inputScaleFactor;
@property (retain, nonatomic) NSNumber *inputPadding;

/* class methods */
+ (id)customAttributes;

/* instance methods */
- (id)outputImage;
@end

#endif /* CITextImageGenerator_h */
