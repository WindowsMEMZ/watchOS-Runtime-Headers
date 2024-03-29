//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKTitledBuddyViewController_h
#define HKTitledBuddyViewController_h
@import Foundation;

#include "HKViewController.h"
#include "HKTitledBuddyHeaderViewDelegate-Protocol.h"
#include "HKTitledLogoBuddyHeaderView.h"

@class NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIStackView, UIVisualEffectView;

@interface HKTitledBuddyViewController : HKViewController<HKTitledBuddyHeaderViewDelegate> {
  /* instance variables */
  UIScrollView *_scrollView;
  UIStackView *_bodyStackView;
  UIVisualEffectView *_anchoredButtonContainerView;
  UIStackView *_containerStackView;
  HKTitledLogoBuddyHeaderView *_header;
  NSArray *_buttonStackConstraints;
}

@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)embedView:(id)view inContainerViewWithMinimumEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;

/* instance methods */
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)shouldCustomizeNavigationBar;
- (id)titleImage;
- (id)titleString;
- (id)bodyString;
- (long long)bodyTextAlignment;
- (void)updateBodyTextAttributesWithMutableString:(id)string;
- (id)linkButtonTitle;
- (id)subsequentViews;
- (id)bottomAnchoredButtons;
- (BOOL)shouldHideNavigationBar;
- (void)reloadViews;
- (id)_createHeaderView;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)button;
- (void)linkButtonTapped:(id)tapped;
- (id)headerView;
- (void)_createAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)tapped;
- (void)_anchoredButtonTapped:(id)tapped;
- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* HKTitledBuddyViewController_h */
