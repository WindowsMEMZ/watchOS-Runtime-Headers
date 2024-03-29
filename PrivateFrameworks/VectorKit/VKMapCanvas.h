//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKMapCanvas_h
#define VKMapCanvas_h
@import Foundation;

#include "VKScreenCanvas.h"
#include "VKInteractiveMap-Protocol.h"
#include "VKPuckAnimator.h"
#include "VKTimedAnimation.h"

@class NSArray, NSString;
@protocol VKInteractiveMapDelegate, {optional<float>="_hasValue"B"_value"(ValueUnion="data"[4C]"type"f)}, {shared_ptr<md::OverlayContainer>="__ptr_"^{OverlayContainer}"__cntrl_"^{__shared_weak_count}};

@interface VKMapCanvas : VKScreenCanvas<VKInteractiveMap> {
  /* instance variables */
  struct CGSize { double width; double height; } _lastCanvasSize;
  struct optional<float> { BOOL _hasValue; union ValueUnion { unsigned char x[4] data; float type; } _value; } _lastValidCanvasSizeZoomLevel;
  VKTimedAnimation *_horizontalOffsetAnimation;
  struct shared_ptr<md::OverlayContainer> { struct OverlayContainer *__ptr_; struct __shared_weak_count *__cntrl_; } _overlayContainer;
  int _consoleFpsUpdateTicker;
  float _consoleFps;
}

@property (weak, nonatomic) NSObject<VKInteractiveMapDelegate> *delegate;
@property (weak, nonatomic) VKPuckAnimator *puckAnimator;
@property (nonatomic) BOOL trafficEnabled;
@property (nonatomic) double canonicalSkyHeight;
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly, nonatomic) NSArray *visibleTileSets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsMapType:(int)type scale:(int)scale;

/* instance methods */
- (BOOL)_isGlobeEnabled;
- (id)attributionsForCurrentRegion;
- (void)setMapType:(int)type;
- (void)setMapType:(int)type animated:(BOOL)animated;
- (void)setContentsScale:(double)scale;
- (void)transferStateFromCanvas:(id)canvas;
- (id)initWithMapEngine:(void *)engine inBackground:(BOOL)background;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)detailedDescription;
- (id)consoleString:(BOOL)string;
- (void)updateWithTimestamp:(double)timestamp withContext:(void *)context;
- (struct optional<float> { BOOL x0; union ValueUnion { unsigned char x0[4] float x1; } x1; })_zoomLevelForCanvasSize:(struct CGSize { double x0; double x1; })size;
- (void)updateCameraForFrameResize;
- (struct { double x0; double x1; })convertPointToMapPoint:(struct CGPoint { double x0; double x1; })point;
- (struct { double x0; double x1; })convertPointToCoordinate:(struct CGPoint { double x0; double x1; })coordinate;
- (struct CGPoint { double x0; double x1; })convertMapPointToPoint:(struct { double x0; double x1; })point;
- (struct CGPoint { double x0; double x1; })convertCoordinateToPoint:(struct { double x0; double x1; })point;
- (struct CGPoint { double x0; double x1; })convertCoordinateToCameraModelPoint:(struct { double x0; double x1; })point;
- (void)updateOverlays;
- (void)addOverlay:(id)overlay;
- (void)removeOverlay:(id)overlay;
- (void)insertOverlay:(id)overlay aboveOverlay:(id)overlay;
- (void)insertOverlay:(id)overlay belowOverlay:(id)overlay;
- (id /* block */)annotationRectTest;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)globeAnnotationRectTest;
- (id /* block */)globeAnnotationCoordinateTest;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (BOOL)isPointValidForGesturing:(struct CGPoint { double x0; double x1; })gesturing;
- (void)goToTileX:(int)x Y:(int)y Z:(int)z tileSize:(int)size;
- (void)debugHighlightObjectAtPoint:(struct CGPoint { double x0; double x1; })point highlightTarget:(unsigned char)target;
- (void)clearScene;
- (id)markerAtScreenPoint:(struct CGPoint { double x0; double x1; })point enableExtendedFeatureMarkers:(BOOL)markers;
- (void)transitionToTracking:(BOOL)tracking mapMode:(long long)mode startLocation:(struct { double x0; double x1; })location startCourse:(double)course cameraController:(id)controller pounceCompletionHandler:(id /* block */)handler;
- (void)setCameraHorizontalOffset:(double)offset duration:(double)duration timingFunction:(id)function;
- (long long)tileSize;
- (void)populateDebugNode:(void *)node withOptions:(const void *)options;
- (void)didBecomeActive;
- (void)didBecomeInActive;
@end

#endif /* VKMapCanvas_h */
