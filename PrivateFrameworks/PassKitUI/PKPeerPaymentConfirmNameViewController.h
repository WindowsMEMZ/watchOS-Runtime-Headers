//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentConfirmNameViewController_h
#define PKPeerPaymentConfirmNameViewController_h
@import Foundation;

#include "PKPaymentSetupFieldsViewController.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKPeerPaymentConfirmNameViewControllerDelegate-Protocol.h"

@class NSString, PKFamilyMember, UIBarButtonItem;

@interface PKPeerPaymentConfirmNameViewController : PKPaymentSetupFieldsViewController<PKPaymentSetupViewControllerDelegate> {
  /* instance variables */
  PKFamilyMember *_familyMember;
  long long _context;
  UIBarButtonItem *_cancelButton;
  UIBarButtonItem *_doneButton;
  UIBarButtonItem *_spinnerButton;
  BOOL _showSpinner;
}

@property (weak, nonatomic) NSObject<PKPeerPaymentConfirmNameViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFamilyMember:(id)member delegate:(id)delegate context:(long long)context;
- (void)viewDidLoad;
- (void)showSpinner:(BOOL)spinner;
- (void)_donePressed;
- (void)viewControllerDidTerminateSetupFlow:(id)flow;
- (void)viewControllerDidCancelSetupFlow:(id)flow;
- (void)_continue;
- (void)_cancelPressed;
@end

#endif /* PKPeerPaymentConfirmNameViewController_h */
