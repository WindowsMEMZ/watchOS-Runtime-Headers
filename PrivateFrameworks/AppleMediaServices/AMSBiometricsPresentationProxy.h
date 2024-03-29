//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSBiometricsPresentationProxy_h
#define AMSBiometricsPresentationProxy_h
@import Foundation;

#include "AMSRequestPresentationDelegate-Protocol.h"
#include "AMSURLSession.h"

@class NSString, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface AMSBiometricsPresentationProxy : NSObject<AMSRequestPresentationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) AMSURLSession *session;
@property (readonly, nonatomic) NSURLSessionTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session task:(id)task;
- (void)handleAuthenticateRequest:(id)request completion:(id /* block */)completion;
- (void)handleDialogRequest:(id)request completion:(id /* block */)completion;
@end

#endif /* AMSBiometricsPresentationProxy_h */
