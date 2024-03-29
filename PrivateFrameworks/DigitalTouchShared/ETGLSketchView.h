//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 571.0.0.0.0
//
#ifndef ETGLSketchView_h
#define ETGLSketchView_h
@import Foundation;

#include "UIView.h"
#include "ETBoxcarFilterPointFIFO.h"
#include "ETGLSketchRenderer.h"
#include "ETGLSketchRendererDelegate-Protocol.h"
#include "ETPointFIFO.h"
#include "ETQuadCurvePointFIFO.h"
#include "ETSketchMessage.h"

@class CADisplayLink, EAGLContext, UIColor;
@protocol struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {  * x0; } * * x0; }, struct vector<std::vector<float __attribute__((ext_vector_type(2)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>> { void * x0; void * x1; struct __compressed_pair<std::vector<float __attribute__((ext_vector_type(2)))> *, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>> { void * x0; } x2; }, struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long * x0; unsigned long long * x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long * x0; } x2; }, {vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^}}, {vector<std::vector<float __attribute__((ext_vector_type(2)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::vector<float __attribute__((ext_vector_type(2)))> *, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>>="__value_"^v}}, {vector<unsigned long, std::allocator<unsigned long>>="__begin_"^Q"__end_"^Q"__end_cap_"{__compressed_pair<unsigned long *, std::allocator<unsigned long>>="__value_"^Q}};

@interface ETGLSketchView : UIView<ETGLSketchRendererDelegate> {
  /* instance variables */
  CADisplayLink *_displayLink;
  UIColor *_currentStrokeColor;
  double _lastDisplayLinkTime;
  BOOL _renderingOffscreen;
  unsigned long long _currentStrokeIndex;
  unsigned long long _currentPointIndex;
  unsigned long long _numberOfDrawnStrokes;
  double _renderingDelay;
  double _renderingStartTime;
  double _pauseTime;
}

@property (retain, nonatomic) EAGLContext *context;
@property (retain, nonatomic) ETGLSketchRenderer *renderer;
@property (retain, nonatomic) ETQuadCurvePointFIFO *interpolatingFIFO;
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *smoothingFIFO;
@property (retain, nonatomic) ETPointFIFO *pointFIFO;
@property (retain, nonatomic) ETQuadCurvePointFIFO *secondaryInterpolatingFIFO;
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *secondarySmoothingFIFO;
@property (retain, nonatomic) ETPointFIFO *secondaryPointFIFO;
@property (nonatomic) float unitSize;
@property (nonatomic) struct vector<std::vector<float __attribute__((ext_vector_type(2)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>> { void * x0; void * x1; struct __compressed_pair<std::vector<float __attribute__((ext_vector_type(2)))> *, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>> { void * x0; } x2; } vertexBatches;
@property (nonatomic) struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> {  * x0; } * * x0; } controlBatches;
@property (nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long * x0; unsigned long long * x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long * x0; } x2; } vertexBatchCount;
@property (nonatomic) struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long * x0; unsigned long long * x1; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long * x0; } x2; } secondaryVertexBatchCount;
@property (nonatomic) unsigned long long vertexOffset;
@property (nonatomic) double delayBetweenStrokes;
@property (retain, nonatomic) ETSketchMessage *messageData;
@property (nonatomic) BOOL playing;
@property (nonatomic) BOOL paused;
@property (nonatomic) double wispDelay;
@property (nonatomic) double timestampForLastDrawnPoint;
@property (nonatomic) BOOL playbackCompleted;
@property (nonatomic) BOOL useFastVerticalWisp;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)setGLContextAsCurrent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)animateOutWithCompletion:(id /* block */)completion;
- (void)beginStrokeWithColor:(id)color;
- (void)_drawCurrentPointAdvancingPlayback;
- (void)drawFrameBeforeWisp;
- (BOOL)_doesPoint:(struct { struct { unsigned short x0; unsigned short x1; } x0; struct { unsigned short x0; } x1; } *)point predateTime:(double)time;
- (void)drawView:(id)view;
- (BOOL)_getCurrentSketchPoint:(struct { struct { unsigned short x0; unsigned short x1; } x0; struct { unsigned short x0; } x1; } *)point;
- (struct CGImage *)createRenderedFrameImage;
- (struct CGImage *)createImageForTime:(double)time;
- (void)_endPlayback;
- (void)clear;
- (void)layoutSubviews;
- (void)handleTapAtPosition:(struct CGPoint { double x0; double x1; })position;
- (void)updateRendererWithPoints:(1 *)points count:(unsigned long long)count controlPoint:(3 *)point flush:(BOOL)flush;
- (void)updateRendererWithSecondaryPoints:(1 *)points count:(unsigned long long)count controlPoint:(3 *)point flush:(BOOL)flush;
- (void)handleSketchAtPosition:(struct CGPoint { double x0; double x1; })position;
- (void)didCompleteStroke;
- (void)clearAllPoints;
- (void)sketchRendererDidReachVertexLimit:(id)limit;
- (BOOL)isPlaying;
- (BOOL)isPaused;
@end

#endif /* ETGLSketchView_h */
