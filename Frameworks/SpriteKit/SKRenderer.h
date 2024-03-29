//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKRenderer_h
#define SKRenderer_h
@import Foundation;

#include "SKScene.h"
#include "SKTransition.h"

@class NSMapTable, NSMutableDictionary;

@interface SKRenderer : NSObject {
  /* instance variables */
  BOOL _needsInitialUpdate;
  BOOL _disableInput;
  BOOL _hasRenderedForCurrentUpdate;
  double _currentTime;
  double _previousTime;
  void * _skcRenderer;
  SKScene *_nextScene;
  SKTransition *_transition;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _renderBounds;
  NSMapTable *_touchMap;
  NSMutableDictionary *_renderOptions;
}

@property (retain, nonatomic) SKScene *scene;
@property (nonatomic) BOOL ignoresSiblingOrder;
@property (nonatomic) BOOL shouldCullNonVisibleNodes;
@property (nonatomic) BOOL showsDrawCount;
@property (nonatomic) BOOL showsNodeCount;
@property (nonatomic) BOOL showsQuadCount;
@property (nonatomic) BOOL showsPhysics;
@property (nonatomic) BOOL showsFields;

/* class methods */
+ (id)rendererWithDevice:(id)device;

/* instance methods */
- (id)initWithSKCRenderer:(void *)skcrenderer;
- (void)_initialize;
- (void)dealloc;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport renderCommandEncoder:(id)encoder renderPassDescriptor:(id)descriptor commandQueue:(id)queue;
- (void)renderWithViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewport commandBuffer:(id)buffer renderPassDescriptor:(id)descriptor;
- (void)_notifyWillRenderContent;
- (void)updateAtTime:(double)time;
- (void)_update:(double)_update;
- (id)_getOptions;
@end

#endif /* SKRenderer_h */
