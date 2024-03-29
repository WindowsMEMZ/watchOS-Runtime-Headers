//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIToolbarVisualProviderModernIOS_h
#define _UIToolbarVisualProviderModernIOS_h
@import Foundation;

#include "_UIToolbarVisualProvider.h"
#include "UIView.h"
#include "_UIBarAppearanceChangeObserver-Protocol.h"
#include "_UIBarBackground.h"
#include "_UIBarBackgroundLayout.h"
#include "_UIBarButtonItemViewOwner-Protocol.h"
#include "_UIToolbarContentView.h"

@class NSString;

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider<_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver> {
  /* instance variables */
  _UIBarBackground *_backgroundView;
  _UIBarBackgroundLayout *_backgroundViewLayout;
  UIView *_customBackgroundView;
  _UIToolbarContentView *_contentView;
  long long _itemDistribution;
  BOOL _useModernAppearance;
  double _backgroundTransitionProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)prepare;
- (long long)itemDistribution;
- (void)setItemDistribution:(long long)distribution;
- (void)_setViewOwnersAndUpdateContentViewForItems:(id)items withOldItems:(id)items animated:(BOOL)animated;
- (void)_updateContentView;
- (void)updateWithItems:(id)items fromOldItems:(id)items animate:(BOOL)animate;
- (void)layoutSubviews;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })contentViewMargins;
- (void)_itemCustomViewDidChange:(id)change fromView:(id)view;
- (void)_itemStandardViewNeedsUpdate:(id)update;
- (void)_itemDidChangeSelectionState:(id)state;
- (void)_itemDidChangeHiddenState:(id)state;
- (void)_itemDidChangeEnabledState:(id)state;
- (void)_itemDidChangeWidth:(id)width;
- (void)appearance:(id)appearance categoriesChanged:(long long)changed;
- (void)setBackgroundTransitionProgress:(double)progress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundFrame;
- (void)updateBarBackgroundSize;
- (void)setCustomBackgroundView:(id)view;
- (id)currentBackgroundView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backgroundFrame;
- (void)updateBarForStyle:(long long)style;
- (BOOL)useModernAppearance;
- (void)setUseModernAppearance:(BOOL)appearance;
- (id)appearanceObserver;
- (void)updateAppearance;
- (void)_updateBackgroundLegacyForPosition:(long long)position;
- (void)_updateBackgroundModern;
- (void)updateBarBackground;
- (void)updateBackgroundGroupName;
- (id)_currentCustomBackground;
- (void)updateArchivedSubviews:(id)subviews;
- (id)traitCollectionForChild:(id)child baseTraitCollection:(id)collection;
- (struct CGSize { double x0; double x1; })defaultSizeForOrientation:(long long)orientation;
- (BOOL)toolbarIsSmall;
- (double)backgroundTransitionProgress;
@end

#endif /* _UIToolbarVisualProviderModernIOS_h */
