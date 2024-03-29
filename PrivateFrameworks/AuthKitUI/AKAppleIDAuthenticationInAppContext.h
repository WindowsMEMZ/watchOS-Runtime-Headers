//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDAuthenticationInAppContext_h
#define AKAppleIDAuthenticationInAppContext_h
@import Foundation;

#include "AKAppleIDAuthenticationContext.h"
#include "AKAppleIDAuthenticationInAppContextAlertDelegate-Protocol.h"
#include "AKAppleIDAuthenticationInAppContextPasswordDelegate-Protocol.h"
#include "AKAppleIDAuthenticationUIProvider-Protocol.h"
#include "AKInAppAuthenticationUIProvider-Protocol.h"
#include "RemoteUIControllerDelegate-Protocol.h"

@class AKNativeAccountRecoveryController, NSString, UIViewController;
@protocol AKAppleIDAuthenticationInAppContextDelegate, CDPStateUIProvider;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext<RemoteUIControllerDelegate, AKAppleIDAuthenticationUIProvider> {
  /* instance variables */
  AKNativeAccountRecoveryController *_nativeRecoveryController;
}

@property (nonatomic) BOOL presentingServerUI;
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationInAppContextAlertDelegate> *alertDelegate;
@property (retain, nonatomic) NSObject<AKInAppAuthenticationUIProvider> *inAppAuthUIProvider;
@property (retain, nonatomic) NSObject<CDPStateUIProvider> *cdpUiProvider;
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationInAppContextPasswordDelegate> *_passwordDelegate;
@property (nonatomic) BOOL forceInlinePresentation;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (weak, nonatomic) NSObject<AKAppleIDAuthenticationInAppContextDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_assertValidPresentingViewController;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)presentLoginAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)_presentTooManyLoginAttemptsViewWithCompletion:(id /* block */)completion;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)presentKeepUsingUIForAppleID:(id)id completion:(id /* block */)completion;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)completion;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)presentSecondFactorAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)id completion:(id /* block */)completion;
- (void)presentServerProvidedUIWithConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)_dismissServerProvidedUIWithCompletion:(id /* block */)completion;
- (void)presentProximityBroadcastUIWithCompletion:(id /* block */)completion;
- (void)presentProximityPairingUIWithVerificationCode:(id)code completion:(id /* block */)completion;
- (void)presentProximityPinCodeUIWithCompletion:(id /* block */)completion;
- (void)activateProximitySession:(id)session completion:(id /* block */)completion;
- (void)dismissProximityPairingUIWithCompletion:(id /* block */)completion;
- (void)showProximityErrorWithCompletion:(id /* block */)completion;
- (void)presentNativeRecoveryUIWithContext:(id)context completion:(id /* block */)completion;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)completion;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)completion;
- (void)presentFidoAuthForContext:(id)context fidoContext:(id)context completion:(id /* block */)completion;
- (void)_contextWillBeginPresentingSecondaryUIWithCompletion:(id /* block */)completion;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_cleanUpBasicLoginWithCompletion:(id /* block */)completion;
- (void)_presentLoginAlertWithError:(id)error title:(id)title message:(id)message waitForInteraction:(BOOL)interaction completion:(id /* block */)completion;
- (void)completeWithError:(id)error;
- (id)serverDataHarvester;
- (void)_handleBackButtonTap:(id)tap;
- (id)remoteUIStyle;
- (void)willPresentModalNavigationController:(id)controller;
- (id)_remoteUIControllerDelegate;
- (void)remoteUIController:(id)uicontroller shouldLoadRequest:(id)request redirectResponse:(id)response withCompletionHandler:(id /* block */)handler;
- (void)remoteUIController:(id)uicontroller didReceiveHTTPResponse:(id)httpresponse forRequest:(id)request;
- (void)remoteUIController:(id)uicontroller didFinishLoadWithError:(id)error forRequest:(id)request;
- (void)remoteUIController:(id)uicontroller willPresentModalNavigationController:(id)controller;
- (void)remoteUIController:(id)uicontroller didDismissModalNavigationWithObjectModels:(id)models;
- (void)remoteUIController:(id)uicontroller didReceiveObjectModel:(id)model actionSignal:(unsigned long long *)signal;
- (void)remoteUIController:(id)uicontroller willPresentObjectModel:(id)model modally:(BOOL)modally;
- (void)remoteUIController:(id)uicontroller didReceiveChallenge:(id)challenge completionHandler:(id /* block */)handler;
- (BOOL)isPresentingServerUI;
- (void)_setCdpUiProvider:(id)provider;
- (void)_setPasswordDelegate:(id)delegate;
@end

#endif /* AKAppleIDAuthenticationInAppContext_h */
