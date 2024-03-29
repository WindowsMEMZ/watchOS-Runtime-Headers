//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIButtonConfigurationVisualProvider_h
#define UIButtonConfigurationVisualProvider_h
@import Foundation;

#include "UIActivityIndicatorView.h"
#include "UIButton.h"
#include "UIButtonModernVisualProvider-Protocol.h"
#include "UIImageView.h"
#include "UILabel.h"
#include "_UISystemBackgroundView.h"

@class NSString;

@interface UIButtonConfigurationVisualProvider : NSObject<UIButtonModernVisualProvider> {
  /* instance variables */
  UIImageView *_imageView;
  UIImageView *_indicatorView;
  UIActivityIndicatorView *_progressIndicatorView;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } buttonBounds; struct CGSize { double width; double height; } idealSize; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } indicatorFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } titleFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } subtitleFrame; struct { double firstFromTop; double lastFromBottom; } baselineOffsets; struct { unsigned int x :1 isValid; unsigned int x :1 hasImage; unsigned int x :1 hasIndicator; unsigned int x :1 hasProgressIndicator; unsigned int x :1 hasTitle; unsigned int x :1 hasSubtitle; } flags; } _layoutData;
  unsigned long long _accessibilityButtonShapesChangedToken;
  struct { unsigned int x :1 needsUpdateConfiguration; } _flags;
  _UISystemBackgroundView *_backgroundView;
}

@property (nonatomic) double widthForMultilineTextLayout;
@property (readonly, nonatomic) BOOL hasMultilineText;
@property (readonly, nonatomic) BOOL hasBaseline;
@property (nonatomic) BOOL vendsBaselineInformationToAutoLayout;
@property (nonatomic) double previousFirstBaselineOffsetForAttributeLowering;
@property (nonatomic) double previousLastBaselineOffsetForAttributeLowering;
@property (nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)visualProviderForButton:(id)button;
+ (BOOL)requiresNewVisualProviderForChanges;
+ (BOOL)wantsConfigurationUpdateForButtonShapes;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)cleanupForVisualProvider:(id)provider;
- (void)setTitle:(id)title forState:(unsigned long long)state;
- (void)setAttributedTitle:(id)title forState:(unsigned long long)state;
- (void)setReversesTitleShadowWhenHighlighted:(BOOL)highlighted;
- (BOOL)adjustsFontForContentSizeCategory;
- (void)setImage:(id)image forState:(unsigned long long)state;
- (void)setPreferredSymbolConfiguration:(id)configuration forImageInState:(unsigned long long)state;
- (void)setSemanticContentAttribute:(long long)attribute;
- (void)setSelected:(BOOL)selected;
- (void)setEnabled:(BOOL)enabled;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (BOOL)isOn;
- (void)setOn:(BOOL)on;
- (void)setShowsTouchWhenHighlighted:(BOOL)highlighted;
- (void)updatedAppliedCornerRadius:(double)radius;
- (void)updatedAppliedCornersAreContinuous:(BOOL)continuous;
- (void)_accessibilityButtonShapesChangedNotification:(id)notification;
- (void)touchesBegan;
- (void)touchesEnded;
- (void)setRole:(long long)role;
- (id)backgroundViewCreateIfNeeded:(BOOL)needed;
- (id)imageViewCreateIfNeeded:(BOOL)needed;
- (id)titleViewCreateIfNeeded:(BOOL)needed;
- (id)subtitleViewCreateIfNeeded:(BOOL)needed;
- (id)effectiveContentView;
- (id)contentBackdropView;
- (id)selectionIndicatorView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)useTitleForSelectedIndicatorBounds;
- (void)didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (BOOL)canBecomeFocused;
- (id)preferredConfigurationForFocusAnimation:(long long)animation inContext:(id)context;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct { double x0; double x1; })baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })size;
- (void)updateBaselineInformationDependentOnBounds;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)view;
- (void)alignmentRectInsetsHaveChangedForChildImageView:(id)view;
- (void)traitCollectionDidChange:(id)change;
- (void)tintColorDidChange;
- (void)didChangeFromIdiom:(long long)idiom onScreen:(id)screen traverseHierarchy:(BOOL)hierarchy;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setContentHorizontalAlignment:(long long)alignment;
- (void)setContentVerticalAlignment:(long long)alignment;
- (void)setContentHuggingPriorities:(struct CGSize { double x0; double x1; })priorities;
- (void)willMoveToWindow:(id)window;
- (void)automaticallyUpdateConfigurationIfNecessary:(id)necessary;
- (void)setNeedsUpdateConfiguration;
- (void)updateConfigurationIfNecessary;
- (void)applyConfiguration;
- (struct CGSize { double x0; double x1; })intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)invalidateLayoutData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutBounds;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct { double x0; double x1; } x6; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; } x7; })_debugLayoutData;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct { double x0; double x1; } x6; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; } x7; })_layoutDataUpdatingIfNecessary;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct { double x0; double x1; } x6; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; } x7; })_layoutDataInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGSize { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x5; struct { double x0; double x1; } x6; struct { unsigned int x0 :1; unsigned int x1 :1; unsigned int x2 :1; unsigned int x3 :1; unsigned int x4 :1; unsigned int x5 :1; } x7; })_layoutDataInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forConfiguration:(id)configuration;
- (void)_layoutContent;
- (void)_applyButtonValuesToConfiguration:(id)configuration;
- (void)_updateImageViewWithConfiguration:(id)configuration;
- (void)_updateIndicatorWithConfiguration:(id)configuration;
- (void)_updateProgressIndicatorWithConfiguration:(id)configuration;
- (void)_updateTitleLabelWithConfiguration:(id)configuration;
- (void)_updateSubtitleLabelWithConfiguration:(id)configuration;
- (void)_updateBackgroundViewWithConfiguration:(id)configuration;
@end

#endif /* UIButtonConfigurationVisualProvider_h */
