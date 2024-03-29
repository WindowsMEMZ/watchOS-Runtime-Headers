//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDAuthenticationRemoteHelperContext_h
#define AKAppleIDAuthenticationRemoteHelperContext_h
@import Foundation;

#include "AKAppleIDAuthenticationContext.h"
#include "AKAppleIDAuthenticationUIProvider-Protocol.h"
#include "AKAppleIDServerUIContextController.h"
#include "NSURLSessionTaskDelegate-Protocol.h"

@class AKDevice, NSString;
@protocol AKAppleIDAuthenticationRemoteHelperDelegate;

@interface AKAppleIDAuthenticationRemoteHelperContext : AKAppleIDAuthenticationContext<AKAppleIDAuthenticationUIProvider, NSURLSessionTaskDelegate> {
  /* instance variables */
  AKAppleIDServerUIContextController *_serverUIContextController;
}

@property (nonatomic) BOOL shouldShowWarranty;
@property (nonatomic) BOOL shouldSendDeviceModel;
@property (retain, nonatomic) AKDevice *companionClientDevice;
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationRemoteHelperDelegate> *remoteHelperDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_processCompanionSignInResponsePlist:(id)plist;
- (void)_loadWithCompanionResponse:(id)response;
- (void)_processUserFeedbackFromCompanionResponse:(id)response;
- (id)_postbackData:(id)data;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)completion;
- (void)presentServerProvidedUIWithConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)_loadURL:(id)url postBody:(id)body;
- (void)_loadRequestMain:(id)main;
- (void)_decorateServerUIRequest:(id)uirequest withCompletionHandler:(id /* block */)handler;
- (BOOL)_receivedValidResponse:(id)response;
- (void)_didReceiveHTTPResponse:(id)httpresponse;
- (void)_didFinishLoadWithError:(id)error;
- (id)_invalidResponseErrorWithResponse:(id)response;
- (id)_relativeURLWithString:(id)string;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)completion;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)presentLoginAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)presentNativeRecoveryUIWithContext:(id)context completion:(id /* block */)completion;
- (void)presentSecondFactorAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)presentFidoAuthForContext:(id)context fidoContext:(id)context completion:(id /* block */)completion;
@end

#endif /* AKAppleIDAuthenticationRemoteHelperContext_h */
