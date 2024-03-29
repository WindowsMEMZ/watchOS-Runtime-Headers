//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageIOSurfaceContent_h
#define _UIImageIOSurfaceContent_h
@import Foundation;

#include "_UIImageContent.h"

@interface _UIImageIOSurfaceContent : _UIImageContent {
  /* instance variables */
  struct __IOSurface * _surfaceRef;
}

/* instance methods */
- (id)initWithIOSurface:(struct __IOSurface *)iosurface scale:(double)scale;
- (id)initWithScale:(double)scale;
- (void)dealloc;
- (BOOL)isHDR;
- (id)makeSDRVersion;
- (id)imageRendererFormat;
- (id)typeName;
- (struct __IOSurface *)IOSurface;
- (BOOL)isIOSurface;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (BOOL)prefersProvidingContentsDirectly;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale inContext:(struct CGContext *)context;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale inContext:(struct CGContext *)context effect:(id)effect;
@end

#endif /* _UIImageIOSurfaceContent_h */
