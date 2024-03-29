//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKApplicationIconImage_h
#define NPKApplicationIconImage_h
@import Foundation;

@interface NPKApplicationIconImage : NSObject
/* class methods */
+ (id)iconForImage:(struct CGImage *)image size:(unsigned long long)size;
+ (id)iconForImage:(struct CGImage *)image dimension:(double)dimension;
+ (id)_iconForImage:(struct CGImage *)image scale:(double)scale descriptor:(id)descriptor;
+ (struct CGSize { double x0; double x1; })_sizeForIconSize:(unsigned long long)size;
+ (id)_iconImageDescriptorForSize:(unsigned long long)size scale:(double)scale;
+ (id)_iconImageDescriptorForDimension:(double)dimension scale:(double)scale;
+ (double)_sizeForIconSizeQuickLook;
+ (double)_sizeForIconSizeLongLook;
+ (double)_sizeForIconSizeNotificationCenter;
+ (long long)_deviceVariant;
@end

#endif /* NPKApplicationIconImage_h */
