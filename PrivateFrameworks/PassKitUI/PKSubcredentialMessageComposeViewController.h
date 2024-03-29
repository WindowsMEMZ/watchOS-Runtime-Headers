//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSubcredentialMessageComposeViewController_h
#define PKSubcredentialMessageComposeViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PKRemoteSubcredentialMessageComposeViewController.h"

@class PKAppletSubcredentialSharingRequest, _UIAsyncInvocation;
@protocol PKSubcredentialMessageComposeViewControllerDelegate;

@interface PKSubcredentialMessageComposeViewController : UIViewController {
  /* instance variables */
  _UIAsyncInvocation *_remoteVCRequest;
  PKAppletSubcredentialSharingRequest *_sharingRequest;
  PKRemoteSubcredentialMessageComposeViewController *_remoteVC;
}

@property (weak, nonatomic) NSObject<PKSubcredentialMessageComposeViewControllerDelegate> *delegate;

/* class methods */
+ (BOOL)_shouldForwardViewWillTransitionToSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithSharingRequest:(id)request delegate:(id)delegate;
- (void)dealloc;
- (void)_setRemoteVC:(id)vc completionHandler:(id /* block */)handler;
- (long long)modalTransitionStyle;
- (long long)modalPresentationStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)container withParentContainerSize:(struct CGSize { double x0; double x1; })size;
- (void)loadView;
- (void)viewWillLayoutSubviews;
@end

#endif /* PKSubcredentialMessageComposeViewController_h */
