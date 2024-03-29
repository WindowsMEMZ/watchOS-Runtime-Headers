//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAuthorizationCouponCodeEntryViewController_h
#define PKPaymentAuthorizationCouponCodeEntryViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, UIScrollView, UIStackView, UITextField, UIView;

@interface PKPaymentAuthorizationCouponCodeEntryViewController : UIViewController<UITextFieldDelegate> {
  /* instance variables */
  NSString *_couponCode;
  BOOL _awaitingCouponCodeUpdate;
  NSError *_firstError;
  UIScrollView *_scrollView;
  UIStackView *_stackView;
  UITextField *_textField;
  UIView *_accessoryView;
  BOOL _active;
  BOOL _finishing;
}

@property (readonly, nonatomic) long long style;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationCouponCodeEntryViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style;
- (BOOL)isPaymentStyle;
- (BOOL)isViewTranslucent;
- (void)reloadDataItem;
- (id)canonicalizedText;
- (void)setAccessoryViewToActivityIndicator;
- (void)setAccessoryViewToError:(id)error;
- (void)setAccessoryViewToCheckmark;
- (void)clearAccessoryView;
- (void)updateAccessoryView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidLayoutSubviews;
- (void)textFieldDidEditingChanged:(id)changed;
- (BOOL)textFieldShouldReturn:(id)return;
- (BOOL)shouldUpdatePreferredContentSize;
- (void)updatePreferredContentSize;
- (void)keyboardDidShow:(id)show;
- (void)keyboardWillHide:(id)hide;
@end

#endif /* PKPaymentAuthorizationCouponCodeEntryViewController_h */
