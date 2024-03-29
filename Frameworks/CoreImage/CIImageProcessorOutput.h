//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIImageProcessorOutput_h
#define CIImageProcessorOutput_h
@import Foundation;

#include "CIImageProcessorInOut.h"
#include "CIImageProcessorOutput-Protocol.h"

@protocol MTLCommandBuffer, MTLTexture;

@interface CIImageProcessorOutput : CIImageProcessorInOut<CIImageProcessorOutput> {
  /* instance variables */
  NSObject<MTLCommandBuffer> *_cmdBuffer;
  void * _task;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) void * baseAddress;
@property (readonly, nonatomic) struct __IOSurface * surface;
@property (readonly, nonatomic) struct __CVBuffer * pixelBuffer;
@property (readonly, nonatomic) NSObject<MTLTexture> *metalTexture;
@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *metalCommandBuffer;
@property (readonly, nonatomic) unsigned long long digest;

/* instance methods */
- (id)initWithSurface:(struct __IOSurface *)surface texture:(struct Texture { union { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; struct { void * x0; void * x1; } x2; } x0; })texture digest:(unsigned long long)digest allowSRGB:(BOOL)srgb bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds context:(void *)context tileTask:(void *)task;
- (void)dealloc;
- (BOOL)metalCommandBufferRequested;
- (struct CGColorSpace *)workingColorSpace;
- (unsigned int)contextID;
- (id)metalContext;
- (void)setError:(id)error;
@end

#endif /* CIImageProcessorOutput_h */
