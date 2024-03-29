//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceGalleryRoundedButton_h
#define NTKFaceGalleryRoundedButton_h
@import Foundation;

#include "PUICButton.h"

@class BOOL *;

@interface NTKFaceGalleryRoundedButton : PUICButton
/* class methods */
+ (id)_buttonImageWithTitle:(id)title maximumWidth:(double)width backgroundColor:(id)color textColor:(id)color forDevice:(id)device;
+ (id)_buttonImageCache;
+ (struct CGSize { double x0; double x1; })sizeWithTitle:(id)title maximumWidth:(double)width forDevice:(id)device;
+ (struct CGSize { double x0; double x1; })_buttonSizeWithTitle:(id)title maximumWidth:(double)width forDevice:(id)device usesSymbolImage:(BOOL *)image buttonContentSize:(struct CGSize { double x0; double x1; } *)size;
+ (id)_titleFontAttributesForDevice:(id)device;
+ (id)_titleFontAttributesWithTextColor:(id)color forDevice:(id)device;

/* instance methods */
- (id)initWithTitle:(id)title maximumWidth:(double)width forDevice:(id)device;
- (void)_applyButtonImage:(id)image;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* NTKFaceGalleryRoundedButton_h */
