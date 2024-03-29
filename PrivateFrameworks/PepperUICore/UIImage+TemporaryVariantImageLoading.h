//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef UIImage_TemporaryVariantImageLoading_h
#define UIImage_TemporaryVariantImageLoading_h
@import Foundation;

@interface UIImage (TemporaryVariantImageLoading)
/* class methods */
+ (struct CGSize { double x0; double x1; })puicSizeForApplicationIconFormat:(int)format;
+ (id)puicApplicationIconImageForBundleIdentifier:(id)identifier format:(int)format scale:(double)scale;
+ (id)puicTintedImageNamed:(id)named inBundle:(id)bundle withTint:(id)tint;
+ (id)_pepperVariantImageNamed:(id)named fromBundle:(id)bundle;

/* instance methods */
- (id)puicImageWithTintColor:(id)color;
@end

#endif /* UIImage_TemporaryVariantImageLoading_h */
