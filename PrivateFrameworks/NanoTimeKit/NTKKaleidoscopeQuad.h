//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKKaleidoscopeQuad_h
#define NTKKaleidoscopeQuad_h
@import Foundation;

#include ".h"
#include "NTKKaleidoscopeResourceManager.h"

@class CLKUITexture;
@protocol MTLBuffer, MTLRenderPipelineState;

@interface NTKKaleidoscopeQuad :  {
  /* instance variables */
  NTKKaleidoscopeResourceManager *_loader;
  NSObject<MTLBuffer> *_geomBuffer;
  NSObject<MTLRenderPipelineState> *_mtlPipelineOpaque;
  NSObject<MTLRenderPipelineState> *_mtlPipelineBlend;
   _aspect;
}

@property (retain, nonatomic) CLKUITexture *primaryLumaTexture;
@property (retain, nonatomic) CLKUITexture *primaryChromaTexture;
@property (retain, nonatomic) CLKUITexture *secondaryTexture;
@property (readonly, nonatomic) unsigned long long shaderType;
@property (nonatomic) float alpha;
@property (nonatomic)  sampleCenter;
@property (nonatomic)  sampleRadius;
@property (nonatomic) float rotation;
@property (nonatomic) float dialRadius;
@property (nonatomic) float lineThickness;

/* class methods */
+ (id)quadWithShaderType:(unsigned long long)type;

/* instance methods */
- (id)initWithShaderType:(unsigned long long)type;
- (void)dealloc;
- (void)setupForQuadView:(id)view;
- (id)geomBuffer;
- (id)mtlPipelineOpaque;
- (id)mtlPipelineBlend;
- (void)purge;
- (void)renderForDisplayWithEncoder:(id)encoder;
- (BOOL)prepareForTime:(double)time;
@end

#endif /* NTKKaleidoscopeQuad_h */
