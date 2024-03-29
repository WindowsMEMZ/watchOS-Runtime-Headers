//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountInvitationOnboardingViewController_h
#define PKAccountInvitationOnboardingViewController_h
@import Foundation;

#include "PKExplanationViewController.h"
#include "PKAccountInvitationController.h"

@interface PKAccountInvitationOnboardingViewController : PKExplanationViewController {
  /* instance variables */
  PKAccountInvitationController *_controller;
  BOOL _didBeginOnboardingSubject;
}

/* instance methods */
- (id)initWithController:(id)controller;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (id)_listItemConfigWithTitle:(id)title body:(id)body image:(id)image;
- (void)explanationViewDidSelectContinue:(id)continue;
- (void)_reportContinueTapped;
- (void)_beginReportingIfNecessary;
- (void)_endReportingIfNecessary;
@end

#endif /* PKAccountInvitationOnboardingViewController_h */
