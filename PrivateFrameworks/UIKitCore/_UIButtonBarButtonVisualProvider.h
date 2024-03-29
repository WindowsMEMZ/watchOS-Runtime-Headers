//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIButtonBarButtonVisualProvider_h
#define _UIButtonBarButtonVisualProvider_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIBarButtonItem.h"
#include "UIColor.h"
#include "UIView.h"
#include "_UIButtonBarButton.h"

@interface _UIButtonBarButtonVisualProvider : NSObject<NSCopying> {
  /* instance variables */
  UIBarButtonItem *_barButtonItem;
}

@property (readonly, nonatomic) _UIButtonBarButton *button;
@property (readonly, nonatomic) UIView *backIndicatorView;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) BOOL backButtonConstraintsActive;
@property (nonatomic) BOOL backButtonMaskEnabled;
@property (copy, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonLeading;
@property (readonly, nonatomic) UIView *alignmentViewForStaticNavBarButtonTrailing;

/* class methods */
+ (id)visualProviderForIdiom:(long long)idiom;
+ (void)registerPlatformVisualProviderClass:(Class)class forIdiom:(long long)idiom;

/* instance methods */
- (Class)buttonBarButtonClass;
- (Class)buttonControlClass;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)supportsBackButtons;
- (BOOL)buttonSelectionState:(id)state forRequestedState:(BOOL)state;
- (BOOL)buttonHighlitedState:(id)state forRequestedState:(BOOL)state;
- (BOOL)buttonHeldState:(id)state forRequestedState:(BOOL)state;
- (BOOL)buttonEnabledState:(id)state forRequestedState:(BOOL)state;
- (void)updateButton:(id)button forSelectedState:(BOOL)state;
- (void)updateButton:(id)button forHighlightedState:(BOOL)state;
- (void)updateButton:(id)button forHeldState:(BOOL)state;
- (void)updateButton:(id)button forEnabledState:(BOOL)state;
- (void)updateButton:(id)button forFocusedState:(BOOL)state;
- (void)configureButton:(id)button withAppearanceDelegate:(id)delegate fromBarItem:(id)item;
- (void)updateButton:(id)button appearance:(id)appearance;
- (void)updateButton:(id)button toUseButtonShapes:(BOOL)shapes;
- (void)buttonLayoutSubviews:(id)subviews baseImplementation:(id /* block */)implementation;
- (void)buttonWillMoveToWindow:(id)window;
- (void)buttonWillMoveToSuperview:(id)superview;
- (struct CGSize { double x0; double x1; })buttonIntrinsicContentSize:(id)size;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })buttonAlignmentRectInsets:(id)insets;
- (struct CGSize { double x0; double x1; })buttonImageViewSize:(id)size;
- (void)resetButtonHasHighlighted;
- (id)symbolImageView;
- (void)updateImage;
- (void)reload;
@end

#endif /* _UIButtonBarButtonVisualProvider_h */
