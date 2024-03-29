//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLActivateUIApplicationView_h
#define CSLActivateUIApplicationView_h
@import Foundation;

#include "CUISActivatingView.h"
#include "CSLModernStatusBarView.h"
#include "CSLStatusBarContextView.h"

@class CUISApplicationPlaceholderItem, NSString, UILabel;
@protocol UIView<CSLActivateUIApplicationViewAnimatingDelegate;

@interface CSLActivateUIApplicationView : CUISActivatingView {
  /* instance variables */
  BOOL _activityIndicatorSpinUpComplete;
  UIView<CSLActivateUIApplicationViewAnimatingDelegate> *_applicationSpinnerView;
  BOOL _showStatusBar;
  BOOL _debugActivationViews;
  BOOL _observingBacklightChanges;
  CSLModernStatusBarView *_statusBarView;
}

@property (nonatomic) unsigned long long viewControllerState;
@property (readonly, nonatomic) CSLStatusBarContextView *statusBarGlobalContextView;
@property (readonly, nonatomic) UILabel *loadingView;
@property (nonatomic) BOOL displayLoadingTextEnabled;
@property (readonly, nonatomic) NSString *bundleID;
@property (retain, nonatomic) CUISApplicationPlaceholderItem *placeholderItem;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame bundleID:(id)id;
- (void)dealloc;
- (void)setShowStatusBar:(BOOL)bar;
- (void)layoutSubviews;
- (BOOL)_shouldHideStatusBarForNavigationFrame;
- (void)setApplicationSpinnerView:(id)view;
- (void)animateSpinnerInIfNeeded;
- (void)showDimmer;
- (void)pauseAnimations;
- (void)resetView:(BOOL)view completion:(id /* block */)completion;
- (unsigned long long)contentType;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* CSLActivateUIApplicationView_h */
