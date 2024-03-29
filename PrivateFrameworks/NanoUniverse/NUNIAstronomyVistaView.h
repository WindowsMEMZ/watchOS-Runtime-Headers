//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NUNIAstronomyVistaView_h
#define NUNIAstronomyVistaView_h
@import Foundation;

#include "UIView.h"
#include "CLKUIQuadViewDelegate-Protocol.h"
#include "NUNIAstronomyVistaConfiguration.h"
#include "NUNIQuad.h"
#include "NUNIRenderer.h"
#include "NUNIScene.h"
#include "NUNISceneObserver-Protocol.h"

@class CALayer, CAPortalLayer, CLKDevice, CLKUIQuadView, NSArray, NSString, UIImageView, UIView;
@protocol NUNIAstronomyVistaViewObserver;

@interface NUNIAstronomyVistaView : UIView<NUNISceneObserver, CLKUIQuadViewDelegate> {
  /* instance variables */
  CLKUIQuadView *_quadView0;
  UIView *_quadView1;
  NUNIQuad *_quad;
  NUNIRenderer *_renderer;
  unsigned long long _preferredCarouselLighting;
  CALayer *_contentMaskLayer;
  CAPortalLayer *_portalLayer;
  UIImageView *_fallbackImageView;
  unsigned long long _fallbackVista;
  unsigned long long _transitionStyle;
  unsigned long long _vista;
  unsigned int x :1 _isSupplemental;
  unsigned int x :1 _isDisplayOn;
  unsigned int x :1 _isAnimating;
  NUNIAstronomyVistaConfiguration *_configuration;
}

@property (readonly, nonatomic) CLKDevice *device;
@property (weak, nonatomic) NSObject<NUNIAstronomyVistaViewObserver> *observer;
@property (retain, nonatomic) NUNIScene *scene;
@property (readonly, nonatomic) NSArray *quadViews;
@property (nonatomic) float supplementalSpheroidSize;
@property (nonatomic) float supplementalHorizontalInset;
@property (nonatomic) float supplementalTopInset;
@property (nonatomic) float supplementalBottomInset;
@property (nonatomic) long long frameInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame configuration:(id)configuration;
- (void)discardContents;
- (void)removeBackBuffers;
- (void)setTritiumBrightness:(double)brightness;
- (void)dealloc;
- (void)purgeUnused;
- (void)setCacheDirectory:(id)directory;
- (void)disableCloudDataFetch:(BOOL)fetch;
- (id)snapshotImage;
- (float)computeDimming;
- (id)_mtlQuadView;
- (void)setAPLFilterAmount:(double)amount;
- (id)_fallbackImageForVista:(unsigned long long)vista;
- (void)setOpaque:(BOOL)opaque;
- (void)updateSunLocationAnimated:(BOOL)animated;
- (void)updateSunLocationAnimated:(BOOL)animated adjustEarthRotation:(BOOL)rotation;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)startAnimation;
- (void)stopAnimation;
- (void)_updateAnimation;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)discard inGroup:(id)group;
- (void)layoutSubviews;
- (void)updatePortalLayerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)rotatable:(unsigned long long)rotatable;
- (void)showSupplemental:(BOOL)supplemental animated:(BOOL)animated;
- (id)generateAnimationArrayFromVista:(unsigned long long)vista toVista:(unsigned long long)vista transitionStyle:(unsigned long long)style;
- (id)generateAnimationArrayFromVista:(unsigned long long)vista fromSceneBlock:(id /* block */)block toVista:(unsigned long long)vista toSceneBlock:(id /* block */)block transitionStyle:(unsigned long long)style;
- (id)generateAnimationArrayFromSceneDescription:(id)description toSceneDescription:(id)description transitionStyle:(unsigned long long)style;
- (id)_panAnimationArrayFromSceneDescription:(id)description toSceneDescription:(id)description;
- (id)_zoomAnimationArrayFromSceneDescription:(id)description toSceneDescription:(id)description;
- (void)applyVista:(unsigned long long)vista transitionStyle:(unsigned long long)style;
- (void)astronomySceneAnimationFinished:(id)finished;
- (void)quadViewWillDisplay:(id)display forTime:(double)time;
- (void)handleBacklightWillTurnOff;
- (void)handleBacklightDidTurnOn;
- (id)contentMaskLayer;
- (id)spheroidAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)updateLightingPreference:(BOOL)preference;
@end

#endif /* NUNIAstronomyVistaView_h */
