//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKApprovalConfirmationViewController_h
#define NPKApprovalConfirmationViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NPKApprovalConfirmationView.h"

@class NSString, PUICApplicationStatusBarItem, UIView;
@protocol NPKApprovalConfirmationViewControllerDelegate;

@interface NPKApprovalConfirmationViewController : UIViewController

@property (retain, nonatomic) NPKApprovalConfirmationView *approvalConfirmationView;
@property (retain, nonatomic) PUICApplicationStatusBarItem *leftStatusBarItem;
@property (weak, nonatomic) NSObject<NPKApprovalConfirmationViewControllerDelegate> *delegate;
@property (copy, nonatomic) NSString *instructionText;
@property (readonly, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSString *leftStatusBarItemTitle;
@property (retain, nonatomic) UIView *rightStatusBarItemView;

/* class methods */
+ (id)approvalConfirmationViewController;
+ (id)approvalConfirmationViewControllerWithInstructionText:(id)text viewToPinToContentView:(id)view withContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets rightStatusBarItemView:(id)view;

/* instance methods */
- (id)initWithInstructionText:(id)text viewToPinToContentView:(id)view withContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets rightStatusBarItemView:(id)view;
- (void)viewDidLoad;
- (void)startBounceAnimation;
- (void)stopBounceAnimationIfNecessary;
- (void)_setUpView;
- (void)_setUpLeftStatusBarItem;
- (void)_setUpRightStatusBarItemView;
- (void)_setUpApprovalConfirmationViewWithInstructionText:(id)text viewToPinToContentView:(id)view withContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)_pinView:(id)view toParentView:(id)view withContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)_handleLeftStatusBarItemTappedNotification:(id)notification;
@end

#endif /* NPKApprovalConfirmationViewController_h */
