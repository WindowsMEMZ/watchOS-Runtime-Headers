//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef SUICFlamesViewMetal_h
#define SUICFlamesViewMetal_h
@import Foundation;

#include "MTKView.h"
#include "SUICAudioLevelSmoother.h"
#include "SUICFlameGroup.h"
#include "SUICFlamesViewProviding-Protocol.h"
#include "SUICFlamesViewProvidingDelegate-Protocol.h"

@class CADisplayLink, NSMutableArray, NSMutableSet, NSString, UIColor, UIImage, UIImageView, UIScreen;
@protocol MTLBuffer, MTLCommandQueue, [4@"<MTLRenderPipelineState>"];

@interface SUICFlamesViewMetal : MTKView<SUICFlamesViewProviding> {
  /* instance variables */
  CADisplayLink *_displayLink;
  long long _currentContextCount;
  NSMutableSet *_renderingDisabledReasons;
  unsigned int _framebufferHandle;
  unsigned int _renderbufferHandle;
  int _flameProgramHandle;
  int _auraProgramHandle;
  int _vShadID;
  int _fShadID;
  unsigned int _vertexArrayObjectHandle;
  unsigned int _vertexBufferHandle;
  unsigned int _elementArrayHandle;
  unsigned long long _numIndices;
  unsigned long long _numVertices;
  unsigned int _numAuraIndices;
  unsigned int _numAuraIndicesCulled;
  unsigned int _numWaveIndices;
  unsigned int _maxVertexCircles;
  unsigned int _auraVertexCircles;
  float _maxSubdivisionLevel;
  float _auraMinSubdivisionLevel;
  float _auraMaxSubdivisionLevel;
  NSMutableArray *_flameGroups;
  SUICFlameGroup *_currentFlameGroup;
  float _viewWidth;
  float _viewHeight;
  float _dictationUnitSize;
  UIScreen *_screen;
  UIImageView *_overlayImageView;
  double _startTime;
  double _dictationRedColor;
  double _dictationGreenColor;
  double _dictationBlueColor;
  SUICAudioLevelSmoother *_levelSmoother;
  long long _fidelity;
  double _frameRateScalingFactor;
  BOOL _transitionFinished;
  BOOL _isInitialized;
  BOOL _hasCustomActiveFrame;
  BOOL _shadersAreCompiled;
  BOOL _reduceMotionEnabled;
  <MTLRenderPipelineState> * _pipelineState[4];
  NSObject<MTLCommandQueue> *_commandQueue;
  NSObject<MTLBuffer> *_vertexBuffer;
  NSObject<MTLBuffer> *_indexBuffer;
   _viewportSize;
}

@property (readonly, nonatomic) BOOL isRenderingEnabled;
@property (weak, nonatomic) NSObject<SUICFlamesViewProvidingDelegate> *flamesDelegate;
@property (nonatomic) long long mode;
@property (nonatomic) long long state;
@property (nonatomic) BOOL showAura;
@property (nonatomic) BOOL freezesAura;
@property (nonatomic) BOOL reduceFrameRate;
@property (nonatomic) BOOL reduceThinkingFramerate;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeFrame;
@property (retain, nonatomic) UIImage *overlayImage;
@property (retain, nonatomic) UIColor *dictationColor;
@property (nonatomic) BOOL renderInBackground;
@property (nonatomic) BOOL flamesPaused;
@property (nonatomic) double horizontalScaleFactor;
@property (nonatomic) BOOL accelerateTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)layerClass;
+ (BOOL)_supportsAdaptiveFramerate;
+ (void)prewarmShadersForScreen:(id)screen size:(struct CGSize { double x0; double x1; })size;
+ (void)prewarmShadersForScreen:(id)screen size:(struct CGSize { double x0; double x1; })size fidelity:(long long)fidelity;
+ (void)prewarmShadersForScreen:(id)screen size:(struct CGSize { double x0; double x1; })size fidelity:(long long)fidelity prewarmInBackground:(BOOL)background;
+ (void)prewarmShadersForScreen:(id)screen activeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame fidelity:(long long)fidelity;
+ (void)prewarmShadersForScreen:(id)screen initialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame activeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame fidelity:(long long)fidelity prewarmInBackground:(BOOL)background;
+ (id)_indexCache;
+ (void)setIndexCacheSize:(unsigned long long)size;

/* instance methods */
- (void)_setValuesForFidelity:(long long)fidelity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame screen:(id)screen fidelity:(long long)fidelity;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame screenScale:(double)scale fidelity:(long long)fidelity;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)fadeOutCurrentAura;
- (void)_setPreferredFramesPerSecond;
- (long long)_preferredFramesPerSecond;
- (void)_updateDisplayLinkPausedState;
- (void)setHidden:(BOOL)hidden;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setRenderingEnabled:(BOOL)enabled forReason:(id)reason;
- (void)prewarmShadersForCurrentMode;
- (void)_prewarmShaders;
- (void)resetAndReinitialize:(BOOL)reinitialize;
- (void)_reduceMotionStatusChanged:(id)changed;
- (void)_applicationWillResignActive:(id)active;
- (void)_applicationWillEnterForeground:(id)foreground;
- (void)_applicationDidBecomeActive:(id)active;
- (void)_setupDisplayLink;
- (unsigned int)_numVerticesPerCircle;
- (2)_predeterminedVertexPositionForAuraWithPolarVertex:;
- (int)_generateIndicesForNumCircleShapes:(int)shapes withMaxSubdivisionLevel:(float)level startingWithNumSubdivisionLevel:(float)level forIndices:(unsigned int * *)indices atStartIndex:(int)index withFill:(BOOL)fill withCullingForAura:(BOOL)aura forVertices:(struct  *)vertices;
- (BOOL)_setupVertexBuffer;
- (BOOL)_initMetalAndSetupDisplayLink:(BOOL)link;
- (BOOL)_loadPipelineLibraries;
- (BOOL)_resizeFromLayer:(id)layer;
- (void)_updateOrthoProjection;
- (void)layoutSubviews;
- (double)_currentDisplayScale;
- (BOOL)_deviceNeeds2xFlamesWithCurrentScale:(double)scale;
- (void)_tearDownDisplayLink;
- (BOOL)inSiriMode;
- (BOOL)inDictationMode;
- (BOOL)_isOriginatingProcessInBackground;
- (id)_metalLayer;
- (void)_didSkipFrameUpdateWithReason:(id)reason andCount:(unsigned long long)count;
- (id)_lazy_commandQueue;
- (void)_updateCurveLayer:(id)layer;
- (void)_didFinishTransition;
- (float)_currentMicPowerLevel;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* SUICFlamesViewMetal_h */
