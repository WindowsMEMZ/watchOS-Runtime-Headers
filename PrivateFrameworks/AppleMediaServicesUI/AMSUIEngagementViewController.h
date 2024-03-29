//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIEngagementViewController_h
#define AMSUIEngagementViewController_h
@import Foundation;

#include "AMSUICommonViewController.h"
#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSUIDynamicViewControllerDelegate-Protocol.h"
#include "AMSUIEngagementViewControllerDelegate-Protocol.h"
#include "AMSUIWebDelegate-Protocol.h"

@class AMSEngagementRequest, AMSProcessInfo, AMSPromise, NSString, UIViewController;

@interface AMSUIEngagementViewController : AMSUICommonViewController<AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSBagConsumer>

@property (retain, nonatomic) UIViewController *childController;
@property (retain, nonatomic) AMSPromise *loadVCPromise;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (weak, nonatomic) NSObject<AMSUIEngagementViewControllerDelegate> *delegate;
@property (readonly, nonatomic) AMSEngagementRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)initWithRequest:(id)request bag:(id)bag delegate:(id)delegate;
- (void)loadView;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (id)requestIsSupported;
- (id)dynamicViewController:(id)controller contentViewWithDictionary:(id)dictionary frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dynamicViewController:(id)controller didFinishPurchaseWithResult:(id)result error:(id)error;
- (void)dynamicViewController:(id)controller didResolveWithResult:(id)result error:(id)error;
- (BOOL)dynamicViewControllerShouldDismiss:(id)dismiss;
- (BOOL)dynamicViewController:(id)controller handleDelegateAction:(id)action completionHandler:(id /* block */)handler;
- (void)webViewController:(id)controller didFinishPurchaseWithResult:(id)result error:(id)error;
- (void)webViewController:(id)controller didResolveWithResult:(id)result error:(id)error completion:(id /* block */)completion;
- (void)_dismiss;
- (id)_isOriginatingURLTrusted;
- (BOOL)_isURLTrusted:(id)urltrusted inDomains:(id)domains;
- (long long)_modalPresentationStyle;
- (id)_preloadChildVC;
- (void)_receivedPurchaseResult:(id)result;
- (void)resolveWithResult:(id)result error:(id)error;
- (void)_setup;
- (void)_setupContentSize;
- (void)_startEngagement;
- (void)_updateChildViewController:(id)controller;
@end

#endif /* AMSUIEngagementViewController_h */
