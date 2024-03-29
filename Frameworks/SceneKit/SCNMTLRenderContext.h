//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNMTLRenderContext_h
#define SCNMTLRenderContext_h
@import Foundation;

#include "MTLBuffer-Protocol.h"
#include "MTLDevice-Protocol.h"
#include "MTLTexture-Protocol.h"
#include "SCNBufferStream-Protocol.h"
#include "SCNMTLRenderContextCommandBufferStatusMonitor-Protocol.h"
#include "SCNMTLRenderContextResourceManagerMonitor-Protocol.h"
#include "SCNMTLRenderPipeline.h"
#include "SCNMTLResourceManager.h"

@class CAMetalLayer, MTLRenderPassDescriptor, NSMutableArray, NSString;
@protocol CAMetalDrawable, MTLCommandBuffer, MTLCommandQueue, MTLDepthStencilState, MTLRenderCommandEncoder, MTLSamplerState, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, {?="backgroundTexture"@"<MTLTexture>""overlayTexture"@"<MTLTexture>""stencilDepthTexture"@"<MTLTexture>"}, {?="buffer"@"<MTLBuffer>""offset"Q"size"Q"shadowMaps"[256@"<MTLTexture>"]"textureMaps"[256@"<MTLTexture>"]"samplerStates"[256@"<MTLSamplerState>"]}, {?="buffer"@"<MTLBuffer>""offset"Q}, {?="currentLightingSet"{?="lights"[8C]}"currentShadowMaps"[8@"<MTLTexture>"]"currentGoboMaps"[8@"<MTLTexture>"]"frameLightingSetDatas"{unordered_map<unsigned long long, SCNMTLLightSetData, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, SCNMTLLightSetData>>>="__table_"{__hash_table<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>>>="__bucket_list_"{unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>>="__ptr_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>>="__value_"^^v"__value_"{__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>="__data_"{__compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>="__value_"Q}}}}"__p1_"{__compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *>>>="__value_"{__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>="__next_"^v}}"__p2_"{__compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>>="__value_"Q}"__p3_"{__compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>>="__value_"f}}}"currentLightingHashKey"Q"currentLightingDesc"{?="count"q"lights"[8^{__C3DLight}]"lightsData"[8^{__C3DLightRuntimeData}]}"currentLightingSpace"{?="columns"[4]}"currentLightingSpaceShadow"{?="columns"[4]}"needLightingSpaceTransformation"B"clusterSystem"{SCNMTLClusterSystem="clustersCount""tileSize""selectedDebugClusterIndex""_debugClusterTilesPipeline"@"SCNMTLRenderPipeline""_debugLightIndicesBufferPipeline"@"SCNMTLRenderPipeline""_debugClusterSlicesPipeline"@"SCNMTLRenderPipeline""_debugProgram"[7^{__C3DFXMetalProgram}]"_debugShapes"[7^{__C3DMesh}]}"clusterInfo"{Info="clusterBuffer"{?="memory"*"buffer"@"<MTLBuffer>""offset"Q}"clusterTexture"@"<MTLTexture>""lightIndicesTexture"@"<MTLTexture>""cellSize""clusterScale""cellPixelSize""omniLightsRange""spotLightsRange""probeLightsRange""lightsBuffer"{?="memory"*"buffer"@"<MTLBuffer>""offset"Q}"lightsBufferLightCount"I"shadowTextures"[8@"<MTLTexture>"]"iesOrGoboTextures"[8@"<MTLTexture>"]"samplerStates"[8@"<MTLSamplerState>"]"areaBuffer"@"<MTLBuffer>""areaBufferOffset"Q"areaBufferOffsets"[8Q]}"reflectionProbesTextureArray"@"<MTLTexture>"}, {SCNMTLBlitCommandEncoder="_encoder"@"<MTLBlitCommandEncoder>""_commandBuffer"@"<MTLCommandBuffer>"}, {SCNMTLComputeCommandEncoder="_buffers"[31@"<MTLBuffer>"]"_offsets"[31Q]"_textures"[128@"<MTLTexture>"]"_samplers"[16@"<MTLSamplerState>"]"_computePipelineState"@"<MTLComputePipelineState>""_encoder"@"<MTLComputeCommandEncoder>""_commandBuffer"@"<MTLCommandBuffer>""_bufferPool"^{SCNMTLBufferPool}"_features"I"_texturesToBind"[2Q]"_buffersToBind"[1Q]}, {atomic<int>="__a_"{__cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>>="__a_value"Ai}};

@interface SCNMTLRenderContext : NSObject<SCNBufferStream> {
  /* instance variables */
  long long _currentFrameIndex;
  struct __C3DEngineStats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; double x56; unsigned int x57; double x58; unsigned int x59; double x60; double x61; double x62; double x63; double x64[60] unsigned int x65; double x66; double x67; } * __engineStats;
  double _superSamplingFactor;
  struct SCNMatrix4 { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } _screenTransform;
  long long _sampleCount;
  BOOL _needSuperSampling;
  SCNMTLResourceManager *_resourceManager;
  NSObject<MTLDevice> *_device;
  BOOL _isValidationEnabled;
  int _profile;
  unsigned int _features;
  struct __C3DEngineContext * _engineContext;
  unsigned int x :1 _wantsWideGamut;
  unsigned int x :1 _isOpaque;
  unsigned int x :1 _disableLinearRendering;
  unsigned int x :1 _useFunctionConstants;
  unsigned int x :1 _reverseZ;
  unsigned int x :1 _forceAsyncShaderCompilation;
  NSObject<MTLCommandQueue> *_ownedCommandQueue;
  NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
  struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { atomic  __a_value; int x0; } __a_; } _pendingGPUFrameCount;
  NSObject<MTLTexture> *_textureTarget;
  CAMetalLayer *_layerTarget;
  NSObject<CAMetalDrawable> *_drawable;
  float _targetedFrameInterval;
  BOOL _shouldPresentAfterMinimumDuration;
  BOOL _shouldPresentWithTransaction;
  MTLRenderPassDescriptor *_currentRenderPassDescriptor;
  MTLRenderPassDescriptor *_originalRenderPassDescriptor;
   _renderSize;
  NSObject<MTLCommandBuffer> *_currentCommandBuffer;
  struct SCNMTLRenderCommandEncoder { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned char x11; BOOL x12; BOOL x13; struct { id x140; unsigned long long x1; } x[31] id x15[128] id x16[16] struct { id x170; unsigned long long x1; } x[31] id x18[128] id x19[16] id x20; id x21; id x22; struct SCNMTLBufferPool * x23; unsigned long long x24[2] unsigned long long x25[2] } * _renderEncoder;
  NSObject<MTLCommandBuffer> *_resourceCommandBuffer;
  struct SCNMTLBlitCommandEncoder { <MTLBlitCommandEncoder> *_encoder; <MTLCommandBuffer> *_commandBuffer; } _resourceBlitEncoder;
  struct SCNMTLComputeCommandEncoder { <MTLBuffer> * x[31] _buffers; unsigned long long x[31] _offsets; <MTLTexture> * x[128] _textures; <MTLSamplerState> * x[16] _samplers; <MTLComputePipelineState> *_computePipelineState; <MTLComputeCommandEncoder> *_encoder; <MTLCommandBuffer> *_commandBuffer; struct SCNMTLBufferPool *_bufferPool; unsigned int _features; unsigned long long x[2] _texturesToBind; unsigned long long x[1] _buffersToBind; } _resourceComputeEncoder;
  struct { unsigned char renderSliceIndex; unsigned char eyeCount; unsigned char renderMode; unsigned char multiVertexOutputStreamGenerator; BOOL isMainPass; BOOL isFinalTechnique; } _renderPassParameters;
  struct { char vertexIndex; char fragmentIndex; } _currentStreamBufferIndices;
  struct SCNMTLBufferPool * _volatileBufferPools[3];
  void * _frameVolatileBufferPool;
  NSMutableArray *_volatileMeshes;
  NSMutableArray *_bufferPool;
  NSMutableArray *_usedVolatileMeshElements;
  NSMutableArray *_freeVolatileMeshElements;
  struct SCNMTLBufferPool * _constantBufferPools[3];
  void * _frameConstantBufferPool;
  void * _frameTexturePool;
  NSObject<MTLDepthStencilState> *_defaultDepthStencilState;
  NSObject<MTLSamplerState> *_defaultSamplerState;
  DFXMetalProgram} x[3^{__C3] _background2DProgram;
  DFXMetalProgram} x[3^{__C3] _backgroundCubeProgram;
  struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; void * x1; struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __C3DScene * x5; long long x6; } x0; int x1; unsigned int x2 :1; unsigned int x3 :1; struct __C3DFXProgramDelegate * x4; } x0; struct __CFString * x1[2] struct __CFString * x2; struct __CFString * x3; struct __CFDictionary * x4; struct __CFSet * x5; void * x6; struct __CFDictionary * x7; void * x8; unsigned long long x9; unsigned int x10; } * _backgroundVideoProgram;
  struct __C3DRasterizerStates * _backgroundRasterizerStates;
  double _initialTime;
  NSObject<OS_dispatch_queue> *_resourceQueue;
  NSObject<OS_dispatch_group> *_resourceGroup;
  NSObject<MTLBuffer> *_shadowKernelBuffer;
  struct { struct __C3DFXPassInstance *passInstance; struct __C3DLightingSystem *lightingSystem; struct __C3DDynamicBatchingSystem *dynamicBatchingSystem; struct __C3DFXPass *pass; void *renderGraphPass; BOOL passRequiresLighting; struct __C3DTransformTree *transformTree; } _processingContext;
  unsigned int _seed;
  ]}"clusterScale"} x[6{SCNSceneBuffer="viewTransform"{float4x4="columns"[4]}"inverseViewTransform"{float4x4="columns"[4]}"projectionTransform"{float4x4="columns"[4]}"viewProjectionTransform"{float4x4="columns"[4]}"viewToCubeTransform"{float4x4="columns"[4]}"lastFrameViewProjectionTransform"{float4x4="columns"[4]}"ambientLightingColor""fogColor""fogParameters""inverseResolution""time"f"sinTime"f"cosTime"f"random01"f"motionBlurIntensity"f"environmentIntensity"f"inverseProjectionTransform"{float4x4="columns"[4]}"inverseViewProjectionTransform"{float4x4="columns"[4]}"nearFar""viewportSize""inverseTransposeViewTransform"{float4x4="columns"[4] _frameUniforms;
  struct { <MTLBuffer> *buffer; unsigned long long offset; } _sceneUniforms;
  struct { <MTLBuffer> *buffer; unsigned long long offset; unsigned long long size; <MTLTexture> * x[256] shadowMaps; <MTLTexture> * x[256] textureMaps; <MTLSamplerState> * x[256] samplerStates; } _lightsData;
  struct { struct float4x4 { x[4] columns; } modelTransform; struct float4x4 { x[4] columns; } lastFrameModelTransform; ]} x[6{float4x4="columns"[4] normalTransforms; ]} x[6{float4x4="columns"[4] modelViewTransforms; ]} x[6{float4x4="columns"[4] modelViewProjectionTransforms; struct float2x3 { x[2] columns; } boundingBox; struct float2x3 { x[2] columns; } worldBoundingBox; struct __C3DNode *instanceNode; unsigned int flags; unsigned int *probeCacheIndex; } _nodeUniforms;
  struct { struct { unsigned char x[8] lights; } currentLightingSet; <MTLTexture> * x[8] currentShadowMaps; <MTLTexture> * x[8] currentGoboMaps; struct unordered_map<unsigned long long, SCNMTLLightSetData, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, SCNMTLLightSetData>>> { struct __hash_table<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> { void * *__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { float __value_; } __p3_; } __table_; } frameLightingSetDatas; unsigned long long currentLightingHashKey; struct { long long count; DLight} x[8^{__C3] lights; DLightRuntimeData} x[8^{__C3] lightsData; } currentLightingDesc; struct { x[4] columns; } currentLightingSpace; struct { x[4] columns; } currentLightingSpaceShadow; BOOL needLightingSpaceTransformation; struct SCNMTLClusterSystem { " clustersCount; int128 x0; int x1; long x2; e x3; unsigned short x4; int x5; size_t x6; e x7; short x8; e x9; long x10; e x11; char x12; int128 x13; e x14; double x15; long double x16; e x17; unsigned int x18 :0; u x19; g x20; unsigned char x21; long x22; u x23; short x24; int128 x25; e x26; const unsigned int x27; in double x28; e x29; x x30; _ x31; double x32; e x33; unsigned int x34 :0; u x35; g x36; unsigned char x37; long x38; u x39; short x40; int128 x41; e x42; const unsigned int128 x43; int x44; long x45; e x46; short x47; P x48; int x49; p x50; e x51; long x52; int x53; in e x54; unsigned short @; unsigned char x55; inout M x56; unsigned int128 x57; unsigned long x58; by ref  x59; e x60; in double x61; e x62; const P x63; int x64; p x65; e x66; long x67; int x68; in e x69; _ x70; double x71; e x72; unsigned int x73 :0; u x74; g x75; unsigned long x76; int x77; g x78; h x79; int128 x80; unsigned int x81; in double x82; int x83; char x84; e x85; short x86; BOOL x87; u x88; float x89; float x90; e x91; const P x92; int x93; p x94; e x95; long x96; int x97; in e x98; unsigned short @; unsigned char x99; inout M x100; unsigned int128 x101; unsigned long x102; by ref  x103; e x104; in double x105; e x106; const P x107; int x108; p x109; e x110; long x111; int x112; in e x113; _ x114; double x115; e x116; unsigned int x117 :0; u x118; g x119; unsigned char x120; long x121; u x122; short x123; int128 x124; e x125; const unsigned short x126; long x127; int x128; char x129; e x130; short x131; P x132; int x133; p x134; e x135; long x136; int x137; in e x138; unsigned short @; unsigned char x139; inout M x140; unsigned int128 x141; unsigned long x142; by ref  x143; e x144; in double x145; e x146; const P x147; int x148; p x149; e x150; long x151; int x152; in e x153; _ x154; double x155; e x156; unsigned int x157 :0; u x158; g x159; P x160; const out g x161; const a x162; m x163; _ [7^{__C3DFXMetalProgram}]; double x164; e x165; unsigned int x166 :0; u x167; g x168; unsigned short x169; h x170; a x171; p x172; e x173; short x174; " x175; DMesh} x176[7^{__C3] } clusterSystem; struct Info { struct { char *memory; <MTLBuffer> *buffer; unsigned long long offset; } clusterBuffer; <MTLTexture> *clusterTexture; <MTLTexture> *lightIndicesTexture; " cellSize; char x0; long x1; u x2; short x3; int128 x4; e x5; const unsigned short x6; char x7; a x8; long x9; e x10; char x11; e x12; long x13; long x14; P x15; int x16; x x17; e x18; long x19; unsigned short x20; int x21; size_t x22; e x23; out m x24; in int x25; unsigned long x26; int x27; g x28; h x29; int128 x30; short x31; by ref  x32; a x33; in g x34; e x35; short x36; p x37; out int128 x38; unsigned long x39; int x40; g x41; h x42; int128 x43; short x44; by ref  x45; a x46; in g x47; e x48; p x49; const out bit field x50; e x51; unsigned long x52; int x53; g x54; h x55; int128 x56; short x57; by ref  x58; a x59; in g x60; e x61; long x62; int x63; g x64; h x65; int128 x66; short x67; BOOL x68; u x69; float x70; float x71; e x72; const " x73; struct { char *memory; <MTLBuffer> *buffer; unsigned long long offset; } x74; unsigned int lightsBufferLightCount; <MTLTexture> * x[8] shadowTextures; <MTLTexture> * x[8] iesOrGoboTextures; <MTLSamplerState> * x[8] samplerStates; <MTLBuffer> *areaBuffer; unsigned long long areaBufferOffset; unsigned long long x[8] areaBufferOffsets; } clusterInfo; <MTLTexture> *reflectionProbesTextureArray; } _lighting;
  struct Cache { struct __C3DRasterizerStates *rasterizerStates; struct __C3DMesh *mesh; SCNMTLMesh *metalMesh; struct __C3DMeshElement *meshElement; SCNMTLMeshElement *metalMeshElement; struct __C3DFXMetalProgram *program; struct __C3DMaterial *material; struct __C3DGeometry *geometry; SCNMTLShadable *metalShadable; struct __C3DEffectCommonProfile *commonProfile; struct __C3DBlendStates *blendStates; unsigned char colorBufferWriteMask; struct __C3DNode *node; struct __C3DDeformerStack *deformers; unsigned long long vertexDescriptorHash; unsigned char tessellationPipelineStateHash; SCNMTLRenderPipeline *renderPipeline; } _cache;
  struct { unsigned long long hash; SCNMTLRenderPipeline *pipeline; } _compositeRendering[2];
  SCNMTLRenderPipeline *_downSamplePipeline;
  struct { <MTLTexture> *backgroundTexture; <MTLTexture> *overlayTexture; <MTLTexture> *stencilDepthTexture; } _skCompositing;
  struct { unsigned long long pixelFormat; unsigned long long sampleCount; SCNMTLRenderPipeline *displayCubemapPipeline; SCNMTLRenderPipeline *displayTexture2DPipeline; SCNMTLRenderPipeline *displayDepth2DPipeline; SCNMTLRenderPipeline *displayDepthCubePipeline; } _debug;
  BOOL _showsAuthoringEnvironment;
  struct { BOOL collectEnabled; NSMutableDictionary *errors; } _compilationIssues;
  struct { unsigned int modelTransformBindingCount; unsigned int modelViewTransformBindingCount; unsigned int normalTransformBindingCount; unsigned int nodeOpacityBindingCount; } _counters;
  struct { unsigned long long passHash; struct __C3DMaterial *material; } _renderGraph;
  NSObject<SCNMTLRenderContextResourceManagerMonitor> *_resourceManagerMonitor;
  NSObject<SCNMTLRenderContextCommandBufferStatusMonitor> *_commandBufferStatusMonitor;
  id _commandBufferScheduledHandlers;
  id _commandBufferCompletedHandlers;
  id _drawablePresentedHandlers;
  BOOL _enableARMode;
  BOOL _shouldDelegateARCompositing;
  MTLRenderPassDescriptor *_clientRenderPassDescriptor;
  NSObject<MTLRenderCommandEncoder> *_clientRenderCommandEncoder;
  NSObject<MTLCommandBuffer> *_clientCommandBuffer;
  unsigned long long _debugOptions;
  double _contentScaleFactor;
  NSObject<MTLCommandQueue> *_clientCommandQueue;
  NSString *_generatedTexturePath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)vrrEnabled;
- (unsigned long long)depthStencilPixelFormat;
- (unsigned long long)colorPixelFormatAtIndex:(long long)index;
- (id)texture:(int)texture;
- (id)buffer:(int)buffer;
- (id)sampler:(int)sampler;
- (const char *)constantData:(int)data;
- (BOOL)constantOffsetAndSize:(int)size;
- (void)viewports:(const void * *)viewports;
- (void)_reduceStatsOfConstantBuffer:(id)buffer;
- (void)dealloc;
- (void)_clearUnusedBindingPoints;
- (void)_createResourceCommandBufferIfNeeded;
- (void)_logLightingInformation;
- (void)_updateProjectionMatrixForOrthographicSkyboxRenderingIfNeeded:(union C3DMatrix4x4 { float x0[16] x1[4] struct { x0[4] } x2; } *)needed;
- (float)_zFarForSkyboxRenderingProjectionMatrix:(const union C3DMatrix4x4 { float x0[16] x1[4] struct { x0[4] } x2; } *)matrix defaultZFar:(float)zfar;
- (void)_prepareMaterialTextures:(struct __C3DMaterial *)textures;
- (void)_executeDrawCommand:(struct { struct __C3DFXMetalProgram * x0; struct __C3DMaterial * x1; struct __C3DGeometry * x2; struct __C3DNode * x3; struct __C3DMesh * x4; struct __C3DMeshElement * x5; struct { unsigned char x0[8] } x6; struct __C3DFXPass * x7; unsigned int * x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; BOOL x13; unsigned int x14 :3; })command;
- (void)resetVolatileMeshes;
- (id)_newMTLBufferFromPoolWithLength:(unsigned long long)length;
- (void)_recycleMTLBufferToPool:(id)pool;
- (void)resetVolatileMeshElements;
- (void)_drawPBRTextures;
- (void)_drawShadowMaps;
- (void)writeBytes:(const void *)bytes length:(unsigned long long)length;
@end

#endif /* SCNMTLRenderContext_h */
