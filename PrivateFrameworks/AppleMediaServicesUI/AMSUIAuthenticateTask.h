//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIAuthenticateTask_h
#define AMSUIAuthenticateTask_h
@import Foundation;

#include "AMSAuthenticateTask.h"
#include "AMSAuthenticateTaskDelegate-Protocol.h"
#include "AMSBagProtocol-Protocol.h"

@class NSString, UIViewController;

@interface AMSUIAuthenticateTask : AMSAuthenticateTask<AMSAuthenticateTaskDelegate>

@property (retain, @dynamic, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account presentingViewController:(id)controller options:(id)options;
- (id)initWithAccount:(id)account presentingViewController:(id)controller options:(id)options bag:(id)bag;
- (id)initWithAuthenticationResults:(id)results presentingViewController:(id)controller options:(id)options;
- (id)initWithAuthenticationResults:(id)results presentingViewController:(id)controller options:(id)options bag:(id)bag;
- (id)initWithRequest:(id)request presentingViewController:(id)controller;
- (id)initWithRequest:(id)request presentingViewController:(id)controller bag:(id)bag;
- (void)authenticateTask:(id)task handleDialogRequest:(id)request completion:(id /* block */)completion;
- (id)_createAuthKitUpdateTaskForAccount:(id)account;
@end

#endif /* AMSUIAuthenticateTask_h */
