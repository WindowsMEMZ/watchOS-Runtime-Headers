//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyVerificationSMSOTPViewController_h
#define PKApplyVerificationSMSOTPViewController_h
@import Foundation;

#include "PKApplyExplanationViewController.h"
#include "PKOneTimeCodeView.h"
#include "PKOneTimeCodeViewDelegate-Protocol.h"

@class NSString, PKApplyVerificationPage, UIBarButtonItem;

@interface PKApplyVerificationSMSOTPViewController : PKApplyExplanationViewController<PKOneTimeCodeViewDelegate> {
  /* instance variables */
  PKApplyVerificationPage *_verificationPage;
  PKOneTimeCodeView *_otpView;
  UIBarButtonItem *_activityButton;
  UIBarButtonItem *_nextButton;
  BOOL _isBodyButtonSkipToDocUpload;
  BOOL _showingSpinner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithController:(id)controller setupDelegate:(id)delegate context:(long long)context verificationPage:(id)page;
- (void)showNavigationBarSpinner:(BOOL)spinner;
- (id)analyticsPageTag;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)oneTimeCodeView:(id)view didEnterCode:(id)code;
- (void)_nextButtonPressed;
- (void)_requestNewCode;
- (void)_submitCode:(id)code skippedVerification:(BOOL)verification;
- (unsigned long long)_smsOTPViewEntryErrorFromError:(id)error;
- (void)_cancelApplication;
- (void)_withdrawApplication;
- (void)_terminateFlow;
- (void)_updateViewWithEntryError:(unsigned long long)error source:(unsigned long long)source;
- (BOOL)_shouldDisplayErrorForEntryError:(unsigned long long)error;
@end

#endif /* PKApplyVerificationSMSOTPViewController_h */
