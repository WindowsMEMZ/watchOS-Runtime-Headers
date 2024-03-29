//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVVideoCompositionRenderContext_h
#define AVVideoCompositionRenderContext_h
@import Foundation;

#include "AVVideoComposition.h"
#include "AVVideoCompositionRenderContextInternal.h"

@interface AVVideoCompositionRenderContext : NSObject {
  /* instance variables */
  AVVideoCompositionRenderContextInternal *_internal;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } renderTransform;
@property (readonly, nonatomic) float renderScale;
@property (readonly, nonatomic) struct { long long x0; long long x1; } pixelAspectRatio;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; } edgeWidths;
@property (readonly, nonatomic) BOOL highQualityRendering;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;

/* class methods */
+ (id)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor *)compositor;

/* instance methods */
- (id)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor *)compositor clientRequiredPixelBufferAttributes:(id)attributes videoComposition:(id)composition pixelBufferPool:(struct __CVPixelBufferPool *)pool;
- (BOOL)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor *)compositor;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (BOOL)isBufferYCbCr:(struct __CVBuffer *)cr;
- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (struct __CVBuffer *)newPixelBuffer;
@end

#endif /* AVVideoCompositionRenderContext_h */
