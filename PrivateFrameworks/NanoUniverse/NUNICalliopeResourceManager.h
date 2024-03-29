//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNICalliopeResourceManager_h
#define NUNICalliopeResourceManager_h
@import Foundation;

#include "CLKUIResourceProviderDelegate-Protocol.h"

@class CLKUIResourceProviderKey, MTLFunctionConstantValues, NSMapTable, NSString, _TtC12NanoUniverse22AegirCloudCoverService;
@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLLibrary, MTLRenderPipelineState, [2[24[2@"<MTLRenderPipelineState>"]]], [4@"<MTLBuffer>"];

@interface NUNICalliopeResourceManager : NSObject<CLKUIResourceProviderDelegate> {
  /* instance variables */
  NSObject<MTLDevice> *_device;
  CLKUIResourceProviderKey *_resourceProviderKey;
  unsigned long long _clients;
  unsigned long long _displayPixelFormat;
  NSObject<MTLLibrary> *_library;
  NSObject<MTLRenderPipelineState> *_pipelineStateLocationDot;
  NSObject<MTLRenderPipelineState> *_pipelineStatePost;
  NSObject<MTLRenderPipelineState> *_pipelineStateDisplay;
  NSObject<MTLRenderPipelineState> *_pipelineStateStarfield;
  NSObject<MTLRenderPipelineState> *_pipelineStateStar;
  NSObject<MTLRenderPipelineState> *_pipelineStateSaturnRing;
  NSObject<MTLRenderPipelineState> *_pipelineStateAtmosphere;
  <MTLRenderPipelineState>"]] * x[2[24[2] _pipelineStateSpheroids;
  NSObject<MTLRenderPipelineState> *_pipelineStateDebugDraw;
  NSObject<MTLRenderPipelineState> *_pipelineStateForBloomDownsampleUsingTileShader;
  NSObject<MTLRenderPipelineState> *_pipelineStateForBloomDownsample;
  NSObject<MTLComputePipelineState> *_pipelineStateForBloomChainDownsample;
  NSObject<MTLComputePipelineState> *_pipelineStateForBloomChainUpsample;
  NSObject<MTLBuffer> *_rectVerticesBuffer;
  NSObject<MTLBuffer> *_discVerticesBuffer;
  NSObject<MTLBuffer> *_starVerticesBuffer;
  NSObject<MTLBuffer> *_atmosphereRingVerticesBuffer;
  NSObject<MTLBuffer> *_saturnRingVerticesBuffer;
  NSObject<MTLBuffer> *_starfieldVerticesBuffer;
  NSObject<MTLBuffer> *_starfieldIndicesBuffer;
  MTLFunctionConstantValues *_pipelineConstants;
  NSMapTable *_textureGroupHashTable;
  NSObject<MTLBuffer> *_patchVerticesBuffer;
  <MTLBuffer> * _patchIndicesBuffer[4];
  struct { CLKUITexture *albedo; CLKUITexture *normal; CLKUITexture *emissive; CLKUITexture *cloud; } x[24[24] _patchTextureGroupTable;
  struct { " min; m x0; a x1; x x2; " x3; } _patchBoundingBoxes[24];
  struct { " min; m x0; a x1; x x2; " x3; } _patchBoundingBoxForSpheroid;
}

@property (readonly, nonatomic) NanoUniverse.AegirCloudCoverService *cloudsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstanceWithDisplayPixelFormat:(unsigned long long)format;
+ (void)_deallocInstance:(id)instance;

/* instance methods */
- (id)initWithDisplayPixelFormat:(unsigned long long)format;
- (void)dealloc;
- (void)_asyncDeallocInstance;
- (void)addClient;
- (void)removeClient;
- (void)setPipelineConstants:(union NUNICalliopePipelineConstants { struct {   x0;   x1;   x2;   x3;   x4;   x5;   x6;   x7;   x8;   x9;   x10;   x11;   x12;   x13;   x14;   x15;   x16;   x17;   x18;   x19;   x20;   x21;   x22;   x23;   x24;   x25;   x26;   x27;   x28;   x29;   x30;   x31;   x32;   x33;   x34; } x0; x1[35] })constants;
- (void)_loadGeometry;
- (id)rectVerticesBuffer;
- (id)discVerticesBuffer;
- (id)starVerticesBuffer;
- (id)starfieldVerticesBuffer;
- (id)starfieldIndicesBuffer;
- (id)atmosphereRingVerticesBuffer;
- (id)saturnRingVerticesBuffer;
- (id)patchVerticesBuffer;
- (id)patchIndicesBufferForLod:(unsigned long long)lod;
- (unsigned short)patchIndexCountForLod:(unsigned long long)lod;
- (const struct  *)patchBoundingBoxes;
- (const struct  *)patchBoundingBoxForSpheroid;
- (struct { id x0; id x1; id x2; id x3; } *)patchTextureGroupForSpheroid:(unsigned long long)spheroid index:(unsigned long long)index suffix:(id)suffix;
- (id)textureGroupWithSuffix:(id)suffix;
- (id)renderDisplayPipeline;
- (id)renderOffscreenPipelineForPost;
- (id)renderOffscreenPipelineForStarfield;
- (id)renderOffscreenPipelineForStar;
- (id)renderOffscreenPipelineForSaturnRing;
- (id)renderOffscreenPipelineForAtmosphere;
- (id)renderOffscreenPipelineForLocationDot;
- (id)renderOffscreenPipelineForSpheroid:(unsigned long long)spheroid layer:(int)layer config:(unsigned long long)config;
- (id)renderOffscreenPipelineForDebugDraw;
- (id)renderOffscreenPipelineForBloomDownsampleUsingTileShader;
- (id)renderOffscreenPipelineForBloomDownsample;
- (id)computePipelineForBloomChainDownsample;
- (id)computePipelineForBloomChainUpsample;
- (id)_generatePipelineVshName:(id)name fshName:(id)name config:(unsigned long long)config blend0:(unsigned long long)blend0 blend1:(unsigned long long)blend1 pixelFormat0:(unsigned long long)format0 pixelFormat1:(unsigned long long)format1;
- (id)_generatePipelineTshName:(id)name pixelFormat0:(unsigned long long)format0 pixelFormat1:(unsigned long long)format1;
- (id)_generatePipelineCshName:(id)name;
- (void)_handleCloudCoverTextureExpired;
- (void)purgeAllCloudCoverTextures;
- (void)_deferredCloudDataFetchIfNeeded;
- (id)_provideEarthCloudsAtlasBacking:(id)backing;
- (id)provideAtlasBacking:(id)backing;
- (id)resourceProviderKey;
@end

#endif /* NUNICalliopeResourceManager_h */
