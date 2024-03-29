//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIButtonBarButtonVisualProviderIOS_h
#define _UIButtonBarButtonVisualProviderIOS_h
@import Foundation;

#include "_UIButtonBarButtonVisualProvider.h"
#include "UIButton.h"
#include "UIColor.h"
#include "UIImageView.h"
#include "UITapGestureRecognizer.h"
#include "_UIBackButtonMaskView.h"
#include "_UIButtonBarAppearanceDelegate-Protocol.h"
#include "_UIModernBarButton.h"

@class NSArray, NSLayoutConstraint, NSMutableDictionary;

@interface _UIButtonBarButtonVisualProviderIOS : _UIButtonBarButtonVisualProvider {
  /* instance variables */
  NSMutableDictionary *_currentConstraints;
  NSMutableDictionary *_oldConstraints;
  UIButton *_backIndicatorButton;
  _UIBackButtonMaskView *_backButtonMask;
  _UIModernBarButton *_titleButton;
  _UIModernBarButton *_imageButton;
  UIImageView *_backgroundView;
  NSObject<_UIButtonBarAppearanceDelegate> *_appearanceDelegate;
  NSArray *_barButtonTitleAttributes;
  NSArray *_finalTitleAttributes;
  UIColor *_tintColor;
  NSMutableDictionary *_backgroundImages;
  NSArray *_titleContent;
  NSMutableDictionary *_titleLookup;
  NSLayoutConstraint *_backButtonTitleMaxWidthConstraint;
  UITapGestureRecognizer *_pressTapRecognizer;
  long long _systemItem;
  struct { unsigned int x :1 imageHasBaseline; unsigned int x :1 backButtonMaskEnabled; unsigned int x :3 style; unsigned int x :1 isSystemItem; } _flags;
}

/* instance methods */
- (id)textButton;
- (id)imageButton;
- (id)backgroundImageView;
- (Class)buttonControlClass;
- (id)symbolConfigurationCompact:(BOOL)compact;
- (id)backgroundImageForState:(unsigned long long)state compact:(BOOL)compact;
- (id)backButtonBackgroundImageForState:(unsigned long long)state compact:(BOOL)compact;
- (struct UIOffset { double x0; double x1; })backgroundVerticalAdjustmentForCompact:(BOOL)compact;
- (struct UIOffset { double x0; double x1; })backButtonBackgroundVerticalAdjustmentForCompact:(BOOL)compact;
- (id)tintColor;
- (struct UIOffset { double x0; double x1; })titlePositionOffsetForCompact:(BOOL)compact;
- (struct UIOffset { double x0; double x1; })backButtonTitlePositionOffsetForCompact:(BOOL)compact;
- (id)_backIndicatorImageForCompact:(BOOL)compact;
- (id)_backIndicatorSymbolConfigurationForCompact:(BOOL)compact;
- (id)_backIndicatorMaskForCompact:(BOOL)compact;
- (id)_backIndicatorMaskSymbolConfigurationForCompact:(BOOL)compact;
- (void)resetButtonHasHighlighted;
- (void)updateActiveConstraints:(id /* block */)constraints;
- (void)addActiveConstraint:(id)constraint named:(id)named;
- (void)activateWidthMinimizer;
- (void)activateHeightMinimizer;
- (BOOL)backButtonMaskEnabled;
- (void)setBackButtonMaskEnabled:(BOOL)enabled;
- (BOOL)buttonSelectionState:(id)state forRequestedState:(BOOL)state;
- (void)updateButton:(id)button forSelectedState:(BOOL)state;
- (void)updateButton:(id)button forHighlightedState:(BOOL)state;
- (void)updateButton:(id)button forHeldState:(BOOL)state;
- (void)updateButton:(id)button forEnabledState:(BOOL)state;
- (BOOL)supportsBackButtons;
- (id)backIndicatorView;
- (id)contentView;
- (void)_computeTextAttributesForBarButtonItem:(id)item;
- (void)_computeTextAttributes;
- (void)_setTitle:(id)title;
- (void)_removeTitleButton;
- (void)_configureImageOrTitleCompact:(BOOL)compact;
- (void)_prepareBackgroundViewFromBarButtonItem:(id)item isBackButton:(BOOL)button;
- (void)_addConstraintsForBackgroundViewWithOffset:(double)offset isBackButton:(BOOL)button resizesImage:(BOOL)image;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_insetsForCompact:(BOOL)compact;
- (double)_defaultBackIndicatorBaselineInsetCompact:(BOOL)compact;
- (double)_defaultPaddingForInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)alignmentViewForStaticNavBarButtonLeading;
- (id)alignmentViewForStaticNavBarButtonTrailing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_imageInsetsForBarButtonItem:(id)item compact:(BOOL)compact isBackButton:(BOOL)button;
- (double)contentButtonTrailingOffset:(double)offset;
- (void)configureButton:(id)button withAppearanceDelegate:(id)delegate fromBarItem:(id)item;
- (void)_addHorizontalConstraintsForContentButton:(id)button titleOffset:(double)offset backButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)_addHorizontalConstraintsForTextWithOffset:(double)offset additionalPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (void)_addHorizontalConstraintsForImageWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets paddingEdges:(unsigned long long)edges additionalPadding:(double)padding;
- (void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(double)offset bottomOffset:(double)offset useBaselineAlignment:(BOOL)alignment;
- (void)_addVerticalConstraintsForTextWithOffset:(double)offset;
- (void)_addVerticalConstraintsForImageWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)_configureImageWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets paddingEdges:(unsigned long long)edges additionalPadding:(double)padding;
- (void)_configureTextWithOffset:(struct UIOffset { double x0; double x1; })offset additionalPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })padding;
- (void)_configureBackButtonMask;
- (void)_configureImageBackButtonWithImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets backButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insets useBaselineAlignment:(BOOL)alignment;
- (void)_configureTextBackButtonWithTitlePositionAdjustment:(struct UIOffset { double x0; double x1; })adjustment backButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insets useBaselineAlignment:(BOOL)alignment;
- (void)_configureBackButtonWithBackButtonLayoutInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insets useBaselineAlignment:(BOOL)alignment;
- (id)_titleContentForTitle:(id)title;
- (void)_setupAlternateTitles;
- (struct CGSize { double x0; double x1; })buttonImageViewSize:(id)size;
- (void)configureButton:(id)button fromBarButtonItem:(id)item;
- (void)_updateViewsForMaskingEnabled;
- (void)updateButton:(id)button appearance:(id)appearance;
- (void)_updateTextContent;
- (void)buttonLayoutSubviews:(id)subviews baseImplementation:(id /* block */)implementation;
- (void)_handlePressGesture:(id)gesture;
@end

#endif /* _UIButtonBarButtonVisualProviderIOS_h */
