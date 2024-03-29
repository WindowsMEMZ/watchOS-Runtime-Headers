//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 54.1.2.0.0
//
#ifndef AAFImage_h
#define AAFImage_h
@import Foundation;

@interface AAFImage : NSObject
/* class methods */
+ (id)circularImageData:(id)data withDiameter:(double)diameter;
+ (id)circularImageData:(id)data withDiameter:(double)diameter crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop;
+ (struct CGImage *)circularImage:(struct CGImage *)image withDiameter:(double)diameter crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tranformedRectForImageSize:(struct CGSize { double x0; double x1; })size withDiameter:(double)diameter crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })crop;
@end

#endif /* AAFImage_h */
