//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIToolbar_h
#define UIToolbar_h
@import Foundation;

#include "UIView.h"
#include "UIAccessibilityHUDGestureDelegate-Protocol.h"
#include "UIAccessibilityHUDGestureManager.h"
#include "UIBarButtonItem.h"
#include "UIBarPositioning-Protocol.h"
#include "UIColor.h"
#include "UIGestureRecognizerDelegatePrivate-Protocol.h"
#include "UIToolbarAppearance.h"
#include "UIToolbarDelegate-Protocol.h"
#include "UIView.h"
#include "_UIBarPositioningInternal-Protocol.h"
#include "_UIToolbarDelegateInternal-Protocol.h"
#include "_UIToolbarVisualProvider.h"

@class NSArray, NSString;

@interface UIToolbar : UIView<UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, UIGestureRecognizerDelegatePrivate, UIBarPositioning> {
  /* instance variables */
  struct { unsigned int x :3 barStyle; unsigned int x :3 barTranslucence; unsigned int x :1 isLocked; unsigned int x :1 linkedBeforeWhitetailAndInitializedFromCoder; unsigned int x :1 disableBlurTinting; unsigned int x :1 delegateRespondsToInterfaceOrientationWindowSelector; unsigned int x :2 appearanceHint; } _toolbarFlags;
  id __appearanceStorage;
  _UIToolbarVisualProvider *_visualProvider;
  UIAccessibilityHUDGestureManager *_axHUDGestureManager;
  unsigned long long _disableAutolayoutWarnings;
  UIView *_shadowView;
}

@property (nonatomic) BOOL _locked;
@property (retain, nonatomic) UIView *_shadowView;
@property (copy, nonatomic) NSString *_backdropViewLayerGroupName;
@property (readonly, nonatomic) long long _barTranslucence;
@property (nonatomic) double _backgroundTransitionProgress;
@property (retain, nonatomic) UIBarButtonItem *centerItem;
@property (nonatomic) BOOL autoHidesToolbarInFullscreen;
@property (readonly, nonatomic) long long _hintFromCurrentAppearance;
@property (nonatomic) long long _appearanceHint;
@property (retain, nonatomic) UIView *_backgroundView;
@property (nonatomic) BOOL _hidesShadow;
@property (nonatomic) BOOL _disableBlurTinting;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (readonly, nonatomic) BOOL _shouldStretchDuringCrossfadeTransition;
@property (nonatomic) long long _itemDistribution;
@property (nonatomic) BOOL centerTextButtons;
@property (readonly, nonatomic) BOOL minibar;
@property (nonatomic) long long barStyle;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL translucent;
@property (retain, @dynamic, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) UIColor *barTintColor;
@property (copy, nonatomic) UIToolbarAppearance *standardAppearance;
@property (copy, nonatomic) UIToolbarAppearance *compactAppearance;
@property (copy, nonatomic) UIToolbarAppearance *scrollEdgeAppearance;
@property (copy, nonatomic) UIToolbarAppearance *compactScrollEdgeAppearance;
@property (weak, nonatomic) NSObject<UIToolbarDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long barPosition;

/* class methods */
+ (BOOL)_forceLegacyVisualProvider;
+ (id)_visualProviderForToolbar:(id)toolbar;
+ (Class)_visualProviderClassForToolbar:(id)toolbar;
+ (id)defaultButtonFont;
+ (double)defaultHeight;
+ (double)defaultHeightForBarSize:(int)size;

/* instance methods */
- (BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long *)attribute;
- (double)_autolayoutSpacingAtEdge:(int)edge forAttribute:(long long)attribute inContainer:(id)container isGuide:(BOOL)guide;
- (double)_defaultAutolayoutSpacing;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)_doCommonToolbarInit;
- (BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_populateArchivedSubviews:(id)subviews;
- (BOOL)_shouldDecodeSubviews;
- (void)encodeWithCoder:(id)coder;
- (BOOL)_linkedBeforeWhitetailAndInitializedFromCoder;
- (id)__appearanceStorage;
- (void)_setBarPosition:(long long)position;
- (long long)_barPosition;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)color;
- (void)_updateBarForStyle;
- (BOOL)isTranslucent;
- (void)_setBackdropViewLayerGroupName:(id)name;
- (void)backdropView:(id)view didChangeToGraphicsQuality:(long long)quality;
- (void)_setItemDistribution:(long long)distribution;
- (void)_installDefaultAppearance;
- (void)_setBackgroundTransitionProgress:(double)progress;
- (void)_setAppearanceHint:(long long)hint;
- (void)_sendAction:(id)action withEvent:(id)event;
- (void)setItems:(id)items animated:(BOOL)animated;
- (void)_customViewChangedForButtonItem:(id)item;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameOfBarButtonItem:(id)item;
- (void)_positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)adjustment;
- (BOOL)_accessibilityHUDGestureManager:(id)manager shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)_accessibilityHUDGestureManager:(id)manager gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)_accessibilityHUDGestureManager:(id)manager HUDItemForPoint:(struct CGPoint { double x0; double x1; })point;
- (id)_itemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_setupAXHUDGestureIfNecessary;
- (id)_traitCollectionForChildEnvironment:(id)environment;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)orientation;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (long long)_expectedInterfaceOrientation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (BOOL)isMinibar;
- (void)_didMoveFromWindow:(id)window toWindow:(id)window;
- (void)layoutSubviews;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(BOOL)change wasMinibar:(BOOL)minibar;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)_setBackgroundView:(id)view;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_updateBackgroundView;
- (void)setBackgroundImage:(id)image forToolbarPosition:(long long)position barMetrics:(long long)metrics;
- (id)backgroundImageForToolbarPosition:(long long)position barMetrics:(long long)metrics;
- (void)_setVisualAltitude:(double)altitude;
- (void)_setVisualAltitudeBias:(struct CGSize { double x0; double x1; })bias;
- (void)setShadowImage:(id)image forToolbarPosition:(long long)position;
- (id)shadowImageForToolbarPosition:(long long)position;
- (void)_setHidesShadow:(BOOL)shadow;
- (void)_setDisableBlurTinting:(BOOL)tinting;
- (BOOL)_subclassImplementsDrawRect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)_setLocked:(BOOL)locked;
- (BOOL)_isLocked;
- (void)_setForceTopBarAppearance:(BOOL)appearance;
- (id)initInView:(id)view withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withItemList:(id)list;
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned long long)states;
- (void)_46877859;
- (void)_setShadowView:(id)view;
@end

#endif /* UIToolbar_h */
