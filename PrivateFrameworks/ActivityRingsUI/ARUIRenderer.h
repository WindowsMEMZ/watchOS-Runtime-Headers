//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUIRenderer_h
#define ARUIRenderer_h
@import Foundation;

#include "ARUIRingsRenderPipelineFactory.h"
#include "ARUIRingsRenderer.h"
#include "ARUISpritesRenderer.h"

@protocol MTLCommandQueue, MTLDeviceSPI;

@interface ARUIRenderer : NSObject {
  /* instance variables */
  NSObject<MTLDeviceSPI> *_device;
  NSObject<MTLCommandQueue> *_commandQueue;
  ARUIRingsRenderPipelineFactory *_ringsRenderPipelineFactory;
  ARUIRingsRenderer *_ringsRenderer;
  ARUISpritesRenderer *_spritesRenderer;
}

@property (readonly, nonatomic) unsigned long long renderStyle;

/* class methods */
+ (void)load;

/* instance methods */
- (id)sim_snapshotRings:(id)rings spriteSheet:(id)sheet withContext:(id)context;
- (void)sim_renderRings:(id)rings spriteSheet:(id)sheet intoTexture:(id)texture presentingDrawable:(id)drawable withContext:(id)context waitUntilCompleted:(BOOL)completed completion:(id /* block */)completion;
- (id)init;
- (id)initWithCommandQueue:(id)queue;
- (id)initWithRenderStyle:(unsigned long long)style;
- (id)initWithRenderStyle:(unsigned long long)style commandQueue:(id)queue;
- (id)renderPipelineFactoryWithDeviceSPI:(id)spi librarySPI:(id)spi;
- (id)renderPipelineFactoryWithDevice:(id)device library:(id)library;
- (id)ringsRenderPipelineConfigurationForRings:(id)rings context:(id)context;
- (void)renderRings:(id)rings intoDrawable:(id)drawable withContext:(id)context;
- (void)renderRings:(id)rings intoDrawable:(id)drawable withContext:(id)context completion:(id /* block */)completion;
- (void)renderRings:(id)rings spriteSheet:(id)sheet intoDrawable:(id)drawable withContext:(id)context;
- (void)renderRings:(id)rings spriteSheet:(id)sheet intoDrawable:(id)drawable withContext:(id)context completion:(id /* block */)completion;
- (void)_renderRings:(id)rings spriteSheet:(id)sheet intoTexture:(id)texture presentingDrawable:(id)drawable withContext:(id)context waitUntilCompleted:(BOOL)completed completion:(id /* block */)completion;
- (void)_renderRings:(id)rings passDescriptor:(id)descriptor commandBuffer:(id)buffer withContext:(id)context;
- (void)_renderRings:(id)rings commandEncoder:(id)encoder passDescriptor:(id)descriptor commandBuffer:(id)buffer withContext:(id)context;
- (id)snapshotRings:(id)rings withContext:(id)context;
- (id)snapshotRings:(id)rings spriteSheet:(id)sheet withContext:(id)context;
- (id)_snapshotRings:(id)rings spriteSheet:(id)sheet withContext:(id)context;
- (void)clearCaches;
- (void)renderRingGroupControllers:(id)controllers withSize:(id)size intoTexture:(id)texture withDrawable:(BOOL)drawable waitUntilCompleted:(id /* block */)completed;
- (id)snapshotRingGroupControllers:(id)controllers;
@end

#endif /* ARUIRenderer_h */
