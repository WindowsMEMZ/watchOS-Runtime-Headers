//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUISpritesParticleRenderer_h
#define ARUISpritesParticleRenderer_h
@import Foundation;

#include "ARUISpriteParticleRenderState.h"

@protocol MTLBuffer;

@interface ARUISpritesParticleRenderer : NSObject {
  /* instance variables */
  NSObject<MTLBuffer> *_spriteVertexBuffer;
  NSObject<MTLBuffer> *_spriteIndexBuffer;
  unsigned long long _numIndicies;
  NSObject<MTLBuffer> *_vertexAttributesBuffer;
  NSObject<MTLBuffer> *_uniformsBuffer;
  ARUISpriteParticleRenderState *_spriteRenderState;
  unsigned long long _bufferSize;
}

/* instance methods */
- (id)initWithDevice:(id)device library:(id)library bufferSize:(unsigned long long)size;
- (id)initWithDeviceSPI:(id)spi librarySPI:(id)spi bufferSize:(unsigned long long)size;
- (void)_sharedInitWithDevice:(id)device bufferSize:(unsigned long long)size;
- (void)renderSpriteSheet:(id)sheet intoContext:(id)context withCommandEncoder:(id)encoder;
@end

#endif /* ARUISpritesParticleRenderer_h */
