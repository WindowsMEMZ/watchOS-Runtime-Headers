//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStackedImageContainerLayer_h
#define _UIStackedImageContainerLayer_h
@import Foundation;

#include "CALayer.h"
#include "CALayerDelegate-Protocol.h"
#include "UINamedLayerStack-Protocol.h"
#include "UIView.h"
#include "_UIStackedImageConfiguration.h"
#include "_UIStackedImageLayerDelegate.h"

@class CALayer, CATransformLayer, NSArray, NSString;

@interface _UIStackedImageContainerLayer : CALayer<CALayerDelegate> {
  /* instance variables */
  BOOL _animatingToNormalState;
  BOOL _animatingStateChange;
  double _selectionStartTime;
  double _selectionDuration;
  long long _selectionStyle;
  double _idleModeFocusSizeOffset;
  struct CGSize { double width; double height; } _radiosityImageScale;
  BOOL _radiosityNeedsLayout;
  double _scale;
  NSString *_imageStackContentsGravity;
  double _radiosityRequestTime;
  double _rotationAmount;
  struct CGPoint { double x; double y; } _translationOffset;
  double _maximumParallaxDepth;
  BOOL _nonOpaqueShadow;
  BOOL _singleLayerNoMask;
  BOOL _layerStackSupportsInflation;
  BOOL _layerStackInflated;
  unsigned long long _layerStackInflationSeed;
  BOOL _deferredInflationPending;
  id _flatImage;
  NSArray *_parallaxImages;
  NSArray *_parallaxLayerDepths;
  CALayer *_imageLayersContainer;
  NSArray *_imageLayers;
  CALayer *_flatLayer;
  CALayer *_maskLayer;
  CALayer *_radiosityLayer;
  CALayer *_selectedPlaceholderLayer;
  CALayer *_shadowLayer;
  CALayer *_unfocusedShadowLayer;
  CALayer *_specularLayer;
  CALayer *_cursorLayer;
  CALayer *_cursorLayerContainer;
  CALayer *_focusKeylineStrokeLayer;
  CALayer *_overlayLayer;
  CALayer *_overlayContainerLayer;
  CALayer *_unmaskedOverlayLayer;
  CALayer *_unmaskedOverlayContainerLayer;
  CATransformLayer *_imagePerspectiveTransformLayer;
  CATransformLayer *_imageRotationTransformLayer;
  CATransformLayer *_maskPerspectiveTransformLayer;
  CATransformLayer *_maskRotationTransformLayer;
  CATransformLayer *_unmaskedOverlayPerspectiveTransformLayer;
  CATransformLayer *_unmaskedOverlayRotationTransformLayer;
  CATransformLayer *_cursorRotationTransformLayer;
  CALayer *_frontmostPerspectiveTransformLayer;
  CATransformLayer *_frontmostRotationTransformLayer;
  _UIStackedImageLayerDelegate *_layoutDelegate;
  UIView *_animationView;
}

@property (retain, nonatomic) _UIStackedImageConfiguration *configuration;
@property (retain, nonatomic) NSObject<UINamedLayerStack> *layerStack;
@property (nonatomic) unsigned long long controlState;
@property (nonatomic) BOOL pressed;
@property (nonatomic) BOOL selected;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_layerStackObservingKeys;
+ (struct CGSize { double x0; double x1; })_scaledSizeForSize:(struct CGSize { double x0; double x1; })size focusSizeIncrease:(double)increase selectionStyle:(long long)style;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)actionForLayer:(id)layer forKey:(id)key;
- (void)removeAllAnimations;
- (void)setContentsScale:(double)scale;
- (void)setRasterizationScale:(double)scale;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)layoutSublayers;
- (void)_updateOverlayLayout;
- (void)_layoutRadiosityLayer;
- (void)_setupFrontmostTransformLayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cursorBounds;
- (id)_preferredLayoutDelegateForLayer:(id)layer;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_updateCornerRadiusFromConfig;
- (void)_setLayerStack:(id)stack;
- (BOOL)_aspectMatchesLayerStack;
- (void)_updateSingleLayerNoMaskFromLayerStack;
- (BOOL)_configuredForNonOpaqueShadow;
- (void)_updateNonOpaqueShadowStateFromLayerStack;
- (void)_updateRadiosityFromLayerStack;
- (void)setControlState:(unsigned long long)state animated:(BOOL)animated;
- (void)setControlState:(unsigned long long)state animated:(BOOL)animated focusAnimationCoordinator:(id)coordinator;
- (void)_setControlState:(unsigned long long)state animated:(BOOL)animated focusAnimationCoordinator:(id)coordinator completion:(id /* block */)completion;
- (BOOL)isPressed;
- (void)setPressed:(BOOL)pressed animated:(BOOL)animated;
- (void)setPressed:(BOOL)pressed animated:(BOOL)animated completion:(id /* block */)completion;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated focusAnimationCoordinator:(id)coordinator;
- (void)setFocusDirection:(struct CGPoint { double x0; double x1; })direction animated:(BOOL)animated;
- (struct CGSize { double x0; double x1; })_focusCursorInsetSizeForSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })_scaledSizeForCurrentState;
- (struct CGSize { double x0; double x1; })_roundedBoundsSize;
- (id)_imageLayersContainer;
- (id)_layerBelowTitles;
- (id)_flatLayer;
- (id)_shadowLayer;
- (long long)_selectionStyle;
- (void)_setSelectionStyle:(long long)style;
- (id)_imageStackContentsGravity;
- (void)_setImageStackContentsGravity:(id)gravity;
- (id)_overlayLayer;
- (void)_setOverlayLayer:(id)layer;
- (id)_unmaskedOverlayLayer;
- (void)_setUnmaskedOverlayLayer:(id)layer;
- (void)_removeLayerFromSuperlayer:(id)superlayer;
- (void)_wrapLayerInView:(id)view;
- (id)_parallaxLayerDepths;
- (void)_setParallaxLayerDepths:(id)depths;
- (void)_setDefaultParallaxLayerDepths;
- (struct CGImage *)_cgImageForLayeredImage:(id)image;
- (void)_setLayerStackInflated:(BOOL)inflated seed:(unsigned long long)seed;
- (id)_contentLayers;
- (void)_updateSpecularLayerContents;
- (double)_focusedScaleFactorForCurrentBounds;
- (BOOL)_radiosityEnabled;
- (struct CGPoint { double x0; double x1; })_layerStackToDisplayScaleFactor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_displayFrameForModelFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_positionAndSizeForLayerImage:(id)image;
- (void)_applyFocusDirectionTransform;
- (void)_applyFocusDirectionTransformWithAnimationCoordinator:(id)coordinator;
- (void)_updateOverlayContainerLayerHierarchy:(BOOL)hierarchy;
- (void)_showImageLayers;
- (void)_deselect;
- (double)_idleModeFocusSizeOffset;
- (BOOL)_isFocused;
- (BOOL)_isFocusedIdle;
- (BOOL)_isFocusedOrFocusedIdle;
- (BOOL)_isHighlighted;
- (BOOL)_isNormal;
- (BOOL)_isSelected;
- (unsigned long long)_primaryControlStateForState:(unsigned long long)state;
- (void)_resetAnimatingToNormalState;
- (void)_setFlatImage:(id)image;
- (void)_setIdleModeFocusSizeOffset:(double)offset;
- (id)_randomImage;
- (void)_setParallaxImages:(id)images;
- (void)_setFocusDirection:(struct CGPoint { double x0; double x1; })direction duration:(double)duration;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_scaleTransformForCurrentState;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_rotationTransformForCurrentFocusDirection;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_perspectiveTransformForCurrentState;
- (void)_updatePerspective;
- (void)_updateRotationAndTranslation:(id)translation;
- (void)_updateFocusKeylineStrokeTranslation:(struct CGPoint { double x0; double x1; })translation;
- (void)_updateFocusKeylineStrokeScale;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_fixedFrameTransformForDepth:(double)depth fudgeFactor:(double)factor;
- (void)_updateNormalImageLayers;
- (void)_updateFullBleedImageLayers;
- (void)_updateSpecularLayerContentsRect;
- (void)_updateContentProviderLayerFocusDirection;
- (void)_updateImageLayerFilterChains;
- (void)_updateImageLayerFilterValues;
- (void)_updateLayerForSelection;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_specularTransformForCurrentState;
- (void)_updateLayerForSelectionWithAnimationCoordinator:(id)coordinator;
- (double)_focusedShadowRadius;
- (double)_unfocusedShadowRadius;
- (double)_getShadowOpacity;
- (void)_updateShadowBounds;
- (void)_updateShadowPositionWithOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)_updateShadowWithAnimationCoordinator:(id)coordinator;
@end

#endif /* _UIStackedImageContainerLayer_h */
