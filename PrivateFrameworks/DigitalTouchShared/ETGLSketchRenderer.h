//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef ETGLSketchRenderer_h
#define ETGLSketchRenderer_h
@import Foundation;

#include "ETGLSketchRendererDelegate-Protocol.h"

@class CAEAGLLayer, EAGLContext;

@interface ETGLSketchRenderer : NSObject {
  /* instance variables */
  BOOL _useThisRendererOnlyForWarmup;
}

@property (nonatomic) struct  * allVertices;
@property (nonatomic) int vertexBufferCount;
@property (nonatomic) int vertexBufferBegin;
@property (nonatomic) unsigned long long vertexCount;
@property (nonatomic) float deathTime;
@property (nonatomic) float lastBirth;
@property (nonatomic)  brushColorForInitialColor;
@property (nonatomic)  brushColorForFinalColor;
@property (nonatomic) unsigned int shaderProgram;
@property (nonatomic) unsigned int vboVertLineId;
@property (nonatomic) unsigned int vaoLineID;
@property (nonatomic) unsigned int viewRenderbuffer;
@property (nonatomic) unsigned int viewFramebuffer;
@property (nonatomic) unsigned int backingWidth;
@property (nonatomic) unsigned int backingHeight;
@property (nonatomic) double cometScaleFactor;
@property (nonatomic) unsigned int allocatedWidth;
@property (nonatomic) unsigned int allocatedHeight;
@property (nonatomic) EAGLContext *context;
@property (nonatomic) CAEAGLLayer *cachedLayer;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) float currentTimeClock;
@property (readonly, nonatomic) float currentTimeIndex;
@property (nonatomic) BOOL isDying;
@property (nonatomic) double wispDelay;
@property (weak, nonatomic) NSObject<ETGLSketchRendererDelegate> *delegate;
@property (nonatomic) BOOL renderingOffscreen;
@property (nonatomic) double lineWidthScaleFactor;
@property (nonatomic) BOOL useFastVerticalWisp;

/* class methods */
+ (void)warmupShaders;

/* instance methods */
- (id)initWithContext:(id)context andDrawable:(id)drawable;
- (void)dealloc;
- (void)animateOutWithCompletion:(id /* block */)completion;
- (void)updateGLWithTime:(float)time;
- (void)updateGLWithCurrentTime;
- (void)setInitialDrawingColor:(1 *)color;
- (void)setFinalDrawingColor:(1 *)color;
- (void)setupFBOs:(id)fbos;
- (void)setupTexture;
- (void)setupShaders;
- (int)loadOneShaderOfType:(unsigned int)type withCString:(const char *)cstring length:(int)length;
- (int)linkProgramWithVShader:(int)vshader FShader:(int)fshader;
- (void)setupVAOs;
- (BOOL)resizeFromCachedLayer;
- (BOOL)resizeFromLayer:(id)layer;
- (void)reset;
- (void)erase;
- (void)appendPointArray:(1 *)array length:(unsigned long long)length;
- (void)appendDualPointArray:(1 *)array length:(unsigned long long)length controlPoint:(4 *)point alternatePoints:(unsigned long long)points alternateLength:(float)length alternateControlPoint:(unsigned long long)point unitSize:(unsigned long long)size;
- (void)updateVertexBufferWithVertexCount:(unsigned long long)count;
- (void)_warmupShaders;
- (struct CGImage *)createRenderedFrameImageUsingAlpha:(BOOL)alpha;
- (void)render;
@end

#endif /* ETGLSketchRenderer_h */
