//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INImageSizeProvider_Protocol_h
#define INImageSizeProvider_Protocol_h
@import Foundation;

@protocol INImageSizeProvider <NSObject>
/* class methods */
+ (id)downscaledPNGImageForImage:(id)image size:(struct { double x0; double x1; })size error:(id *)error;
+ (struct { double x0; double x1; })imageSizeForImage:(id)image;
@end

#endif /* INImageSizeProvider_Protocol_h */
