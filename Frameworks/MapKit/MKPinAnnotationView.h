//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKPinAnnotationView_h
#define MKPinAnnotationView_h
@import Foundation;

#include "MKAnnotationView.h"
#include "_MKPinAnnotationViewDelegate-Protocol.h"

@class UIColor, UIImageView;

@interface MKPinAnnotationView : MKAnnotationView {
  /* instance variables */
  UIImageView *_shadowView;
  NSObject<_MKPinAnnotationViewDelegate> *_delegate;
  int _state;
}

@property (weak, nonatomic) NSObject<_MKPinAnnotationViewDelegate> *_delegate;
@property (retain, nonatomic) UIColor *pinTintColor;
@property (nonatomic) BOOL animatesDrop;
@property (nonatomic) unsigned long long pinColor;

/* class methods */
+ (Class)layerClass;
+ (Class)_mapkitLeafClass;
+ (struct CGSize { double x0; double x1; })_perceivedSize;
+ (id)redPinColor;
+ (id)greenPinColor;
+ (id)purplePinColor;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pinFrameForPosition:(struct CGPoint { double x0; double x1; })position;
+ (id)_bounceAnimation;
+ (id)_dropBounceAnimation;
+ (id)_imageForLayer:(long long)layer state:(long long)state mapType:(unsigned long long)type traits:(id)traits;
+ (id)_imageForState:(long long)state mapType:(unsigned long long)type pinColor:(id)color traits:(id)traits;
+ (id)_imageCache;
+ (id)_pinsWithMapType:(unsigned long long)type pinColor:(id)color traits:(id)traits;
+ (id)_reuseIdentifier;
+ (id)_shadowImage;
+ (struct CGPoint { double x0; double x1; })_perceivedAnchorPoint;
+ (struct CGPoint { double x0; double x1; })_shadowAnchorPoint;
+ (struct CGPoint { double x0; double x1; })_calloutOffset;
+ (struct CGPoint { double x0; double x1; })_leftCalloutOffset;
+ (struct CGPoint { double x0; double x1; })_rightCalloutOffset;

/* instance methods */
- (struct CGPoint { double x0; double x1; })_draggingDropOffset;
- (id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_significantBounds;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_setMapType:(unsigned long long)type;
- (id)description;
- (id)_pins;
- (void)traitEnvironment:(id)environment didChangeTraitCollection:(id)collection;
- (id)_image;
- (id)_highlightedImage;
- (id)_floatingImage;
- (id)_pinBounceImages;
- (id)_pinJumpImages;
- (void)_invalidateImage;
- (void)_setRotationRadians:(double)radians withAnimation:(id)animation;
- (void)_updateShadowLayer;
- (void)setCenter:(struct CGPoint { double x0; double x1; })center;
- (void)_didUpdatePosition;
- (void)_removeAllAnimations;
- (void)_stopDrop;
- (void)_cleanupAfterPinDropAnimation;
- (id)_bounceAnimation:(BOOL)animation withDelay:(double)delay addToLayer:(BOOL)layer;
- (void)_dropFromDistance:(double)distance maxDistance:(double)distance withDelay:(double)delay;
- (void)_dropAfterDraggingAndRevertPosition:(BOOL)position animated:(BOOL)animated;
- (void)setDragState:(unsigned long long)state animated:(BOOL)animated;
- (void)_liftForDraggingAnimated:(BOOL)animated;
- (void)_liftForDraggingAfterBounceAnimated:(BOOL)animated;
- (void)_liftDidEnd:(id)end;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (void)animationDidStart:(id)start;
- (void)setHighlighted:(BOOL)highlighted;
- (BOOL)isHighlighted;
- (int)_state;
- (void)_updateAnchorPosition:(struct CGPoint { double x0; double x1; })position alignToPixels:(BOOL)pixels;
- (void)_setDelegate:(id)delegate;
@end

#endif /* MKPinAnnotationView_h */
