//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICandidateViewController_h
#define UICandidateViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIPredictiveViewController-Protocol.h"
#include "UIView.h"

@class NSArray, NSString;

@interface UICandidateViewController : UIViewController<UIPredictiveViewController>

@property (retain, nonatomic) UIView *candidateView;
@property (readonly, nonatomic) NSArray *displayedCandidates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)preferredCandidateBarHeightForTraitCollection:(id)collection;

/* instance methods */
- (BOOL)_canShowWhileLocked;
- (BOOL)isVisibleForInputDelegate:(id)delegate inputViews:(id)views;
- (double)preferredHeightForTraitCollection:(id)collection;
- (BOOL)hidesExpandableButton;
- (BOOL)requiresKeyboard;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
@end

#endif /* UICandidateViewController_h */
