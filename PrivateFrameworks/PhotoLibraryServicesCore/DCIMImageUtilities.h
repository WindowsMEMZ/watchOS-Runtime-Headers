//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef DCIMImageUtilities_h
#define DCIMImageUtilities_h
@import Foundation;

@interface DCIMImageUtilities : NSObject
/* class methods */
+ (BOOL)generateThumbnailsFromData:(id)data inputSize:(struct CGSize { double x0; double x1; })size preCropLargeThumbnailSize:(struct CGSize { double x0; double x1; })size postCropLargeThumbnailSize:(struct CGSize { double x0; double x1; })size preCropSmallThumbnailSize:(struct CGSize { double x0; double x1; })size postCropSmallThumbnailSize:(struct CGSize { double x0; double x1; })size outSmallThumbnailImageRef:(struct CGImage * *)ref outLargeThumbnailImageRef:(struct CGImage * *)ref outLargeThumbnailJPEGData:(id *)jpegdata;
@end

#endif /* DCIMImageUtilities_h */
