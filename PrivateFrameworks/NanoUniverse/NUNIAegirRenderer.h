//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIAegirRenderer_h
#define NUNIAegirRenderer_h
@import Foundation;

#include "NUNIRenderer.h"
#include "NUNAegirOffscreen.h"
#include "NUNIAegirResourceManager.h"
#include "NUNIAegirTextureGroup.h"

@class CALayer;
@protocol MTLDevice, NUNIRendererOptions, [3@"<MTLTexture>"];

@interface NUNIAegirRenderer : NUNIRenderer {
  /* instance variables */
  NSObject<MTLDevice> *_device;
  BOOL _supportsMTLGPUFamilyApple6;
  NUNIAegirTextureGroup *_textureGroup;
  NSMutableArray * _renderUniformsBuffers[3];
  int _renderUniformBuffersCounts[3];
  NUNAegirOffscreen * _offscreenScenes[3];
  NUNAegirOffscreen *_offscreenBlooms;
  NUNAegirOffscreen *_offscreenPosts;
  <MTLTexture> * _contentMaskTextures[3];
  IOSurface * _contentMaskSurfaces[3];
  CALayer *_contentMaskLayer;
  unsigned long long _frame;
  struct NUNIAegirRendererState { struct NUNIViewport { int width; int height; } viewport; float cameraRoll; float aspect; float fovY; " cameraOffset; char x0; a x1; m x2; e x3; const a x4; P x5; out short x6; int x7; int128 x8; int x9; out in " x10; " cameraTarget; char x11; a x12; m x13; e x14; const a x15; U x16; p x17; char x18; a x19; m x20; e x21; const a x22; unsigned long x23; e x24; float x25; int128 x26; char x27; a x28; m x29; e x30; const a x31; F x32; out const wchar_t x33; a x34; const double x35; char x36; a x37; m x38; e x39; const a x40; unsigned long x41; out out k x42; atomic  x43; int128 x44; char {?=; out long x45; u x46; m x47; in short x48; char [4]}; a x49; m x50; e x51; const a x52; one way int x53; e x54; wchar_t x55; char {?=; out long x56; u x57; m x58; in short x59; char [4]}; a x60; m x61; e x62; const a x63; P x64; const out _Complex  x65; one way int x66; e x67; wchar_t x68; char {?=; out long x69; u x70; m x71; in short x72; " x73; x74[4] } x75; } _state;
  struct NUNIAegirRenderUniforms { " sprite; short x0; p x1; h x2; e x3; const e x4; long x5; int x6; g x7; h x8; int128 x9; long double x10; int x11; const e x12; char x13; int128 x14; int x15; out in " x16; struct { x[3] columns; } lookModelInverseMatrixFull; " lookModelPositionFull; long x17; out out k x18; M x19; out double x20; e x21; long x22; unsigned int x23; in void x24; e x25; const short x26; e x27; M x28; a x29; int128 x30; const int x31; x x32; char {?=; out long x33; u x34; m x35; in short x36; long [3]}; out out k x37; M x38; out double x39; e x40; long x41; P x42; out short x43; int x44; int128 x45; int x46; out in " x47; struct { x[4] columns; } viewModelInverseMatrix; struct { x[4] columns; } viewModelMatrix; struct { x[4] columns; } projectionViewModelMatrix; " offset; a x48; short x49; p x50; e x51; char x52; int128 x53; int x54; in void x55; by ref  x56; e x57; short x58; out long x59; u x60; int128 x61; int x62; out in " x63; float x64; float nearPlane; float opacity; float falloff; float falloffOverrideOpacity; float sunExpMin; float sunExpRange; float sunDistanceSqr; float sunEquatorialRadiusSqr; float sunGlowRadiusScale; float sunDistance; float sunEquatorialRadius; float floorRadiusSqr; float cloudHiRadiusSqr; float cloudMdRadiusSqr; float cloudLoRadiusSqr; float cloudAltitude; float cloudAlpha; float atmosRadiusOuter; float atmosRadiusInner; } _baseUniforms;
  unsigned int _rendererOptionsChangeSequence;
  struct NUNIAegirPipelineConstants {   bloomRadius;   bloomStrength;   bloomThreshold;   sunDistance;   sunEquatorialRadius;   sunGlowRadiusScale;   sunExpMin;   sunColorRed;   sunColorGreen;   sunColorBlue;   earthLightPower;   earthSpecularPower;   earthSpecularStrength;   earthSpecularBreakup;   earthSurfaceAmbientStrength;   earthIlluminationRed;   earthIlluminationGreen;   earthIlluminationBlue;   earthIlluminationStrength;   earthCloudShadowStrength;   earthCloudShadowEaseFrom;   earthCloudShadowEaseTo;   earthCloudAmbientStrength;   earthCloudAlpha;   earthAtmosphereRed;   earthAtmosphereGreen;   earthAtmosphereBlue;   earthAtmosphereStrength;   earthAtmosphereGlowExpMin;   earthAtmosphereTerminatorEaseFrom;   earthAtmosphereTerminatorEaseTo;   lunaLightPower;   lunaSpecularPower;   lunaSpecularStrength;   lunaSurfaceAmbientStrength; } _pipelineConstants;
}

@property (readonly, nonatomic) NUNIAegirResourceManager *resourceManager;
@property (retain, nonatomic) NSObject<NUNIRendererOptions> *rendererOptions;

/* instance methods */
- (id)initWithPixelFormat:(unsigned long long)format textureSuffix:(id)suffix rendererStyle:(unsigned long long)style;
- (void)dealloc;
- (void)discard;
- (void)purgeUnusedWithScene:(id)scene;
- (id)contentMaskLayer;
- (void)setContentMaskLayer:(id)layer;
- (void)_updateStateWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport;
- (void)_updateBaseUniformsForViewport:(struct NUNIViewport { int x0; int x1; })viewport;
- (id)getOrCreateUniformBufferforFrameBufferIndex:(unsigned long long)index;
- (void)_renderOffscreenBackgroundWithRenderEncoder:(id)encoder frameBufferIndex:(unsigned long long)index;
- (void)_renderRaytraceSpheroid:(id)spheroid uniPtr:(struct NUNIAegirRenderUniforms { struct { x0[3] } x0; struct { x0[3] } x1; struct { x0[4] } x2; struct { x0[4] } x3; struct { x0[4] } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; } *)ptr renderEncoder:(id)encoder;
- (void)_renderLocationDot:(id)dot uniPtr:(struct NUNIAegirRenderUniforms { struct { x0[3] } x0; struct { x0[3] } x1; struct { x0[4] } x2; struct { x0[4] } x3; struct { x0[4] } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; } *)ptr viewport:(struct NUNIViewport { int x0; int x1; })viewport renderEncoder:(id)encoder;
- (void)_renderSpriteSpheroid:(id)spheroid uniPtr:(struct NUNIAegirRenderUniforms { struct { x0[3] } x0; struct { x0[3] } x1; struct { x0[4] } x2; struct { x0[4] } x3; struct { x0[4] } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; float x23; float x24; } *)ptr renderEncoder:(id)encoder;
- (void)_renderOffscreenSceneWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport commandBuffer:(id)buffer frameBufferIndex:(unsigned long long)index drawableTexture:(id)texture;
- (void)_renderOffscreenBloomWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport commandBuffer:(id)buffer frameBufferIndex:(unsigned long long)index;
- (void)_renderOffscreenPostWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport commandBuffer:(id)buffer frameBufferIndex:(unsigned long long)index;
- (void)renderOffscreenWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport commandBuffer:(id)buffer;
- (void)renderWithScene:(id)scene viewport:(struct NUNIViewport { int x0; int x1; })viewport commandBuffer:(id)buffer passDescriptor:(id)descriptor;
@end

#endif /* NUNIAegirRenderer_h */
