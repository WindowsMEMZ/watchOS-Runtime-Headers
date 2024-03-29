//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKQuickPaymentSessionLocalAuthenticationCoordinator_h
#define NPKQuickPaymentSessionLocalAuthenticationCoordinator_h
@import Foundation;

#include "LAUIDelegate-Protocol.h"

@class LAContext, NSData, NSError, NSMutableArray, NSNumber;
@protocol NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate, OS_dispatch_queue;

@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject<LAUIDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localAuthenticationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) LAContext *completedContext;
@property (retain, nonatomic) NSData *completedCredential;
@property (retain, nonatomic) NSError *completedError;
@property (retain, nonatomic) LAContext *inProgressContext;
@property (retain, nonatomic) NSMutableArray *pendingLocalAuthenticationEvents;
@property (retain, nonatomic) NSNumber *activeLocalAuthenticationEvent;
@property (weak, nonatomic) NSObject<NPKQuickPaymentSessionLocalAuthenticationCoordinatorCredentialDelegate> *credentialDelegate;

/* instance methods */
- (id)initWithCallbackQueue:(id)queue;
- (void)beginLocalAuthenticationWithCompletion:(id /* block */)completion;
- (void)beginLocalAuthenticationWithPolicy:(long long)policy completion:(id /* block */)completion;
- (void)beginLocalAuthenticationWithAccessControl:(struct __SecAccessControl *)control operation:(long long)operation completion:(id /* block */)completion;
- (void)invalidateLocalAuthenticationContexts;
- (void)event:(long long)event params:(id)params reply:(id /* block */)reply;
- (void)_handleLocalAuthenticationPolicyEvaluatedWithContext:(id)context error:(id)error;
- (void)_activateLocalAuthenticationEvent:(long long)event;
- (void)_deactivateLocalAuthenticationEvent:(long long)event;
- (void)_presentNextLocalAuthenticationEvent;
- (void)_cancelLocalAuthentication;
- (void)_invokeCompletionHandlerForInvalidationWithError:(id)error;
- (void)_performDelegateCallback:(id /* block */)callback;
- (long long)_credentialTypeForEvent:(long long)event;
- (id)_nameForLocalAuthenticationEvent:(long long)event;
@end

#endif /* NPKQuickPaymentSessionLocalAuthenticationCoordinator_h */
