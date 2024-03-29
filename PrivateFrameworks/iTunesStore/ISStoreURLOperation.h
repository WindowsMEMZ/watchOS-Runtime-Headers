//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISStoreURLOperation_h
#define ISStoreURLOperation_h
@import Foundation;

#include "ISURLOperation.h"
#include "ISBiometricSessionDelegate-Protocol.h"
#include "ISStoreURLOperationDelegate-Protocol.h"

@class NSNumber, NSString, SSBag, SSBiometricAuthenticationContext, SSURLBagContext, SSVFairPlaySAPSession;

@interface ISStoreURLOperation : ISURLOperation<ISBiometricSessionDelegate> {
  /* instance variables */
  long long _activeMachineDataStyle;
  BOOL _isURLBagRequest;
  SSVFairPlaySAPSession *_sapSession;
}

@property (retain) NSNumber *authenticatedDSID;
@property (nonatomic) BOOL ignorePreexistingSecureToken;
@property (weak, @dynamic) NSObject<ISStoreURLOperationDelegate> *delegate;
@property (weak) NSObject<ISBiometricSessionDelegate> *biometricSessionDelegate;
@property (retain) SSBiometricAuthenticationContext *biometricAuthenticationContext;
@property BOOL canSendGUIDParameter;
@property long long machineDataStyle;
@property BOOL needsURLBag;
@property BOOL needsAuthentication;
@property BOOL needsTermsAndConditionsAcceptance;
@property BOOL performsMachineDataActions;
@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (nonatomic) BOOL shouldAppendAuthKitHeaders;
@property (nonatomic) BOOL shouldAppendStorefrontToURL;
@property BOOL shouldCancelBiometricTokenUpdate;
@property BOOL shouldSuppressUserInfo;
@property BOOL shouldSendAKClientInfoHeaders;
@property BOOL shouldSendAKPRKRequestHeader;
@property BOOL shouldSendDSIDHeader;
@property BOOL shouldSendXTokenHeader;
@property BOOL useUserSpecificURLBag;
@property BOOL urlKnownToBeTrusted;
@property (retain, nonatomic) SSBag *bag;
@property (readonly) SSURLBagContext *URLBagContext;
@property (nonatomic) BOOL URLBagRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)addITunesStoreHeadersToRequest:(id)request withAccountIdentifier:(id)identifier;
+ (void)handleITunesStoreResponseHeaders:(id)headers request:(id)request withAccountIdentifier:(id)identifier shouldRetry:(BOOL *)retry;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)identifier urlBagKey:(id)key;
+ (id)pingOperationWithUrl:(id)url;
+ (id)propertyListOperationWithURLBagKey:(id)key;
+ (id)_ssBag_copyHeaderPatternsFromBag:(id)bag;
+ (id)_ssBag_copyExtraHeadersForURL:(id)url bag:(id)bag;
+ (void)_addiTunesStoreHeadersToRequest:(id)request withSSBag:(id)ssbag accountIdentifier:(id)identifier appendAuthKitHeaders:(BOOL)headers appendStorefrontToURL:(BOOL)url clientBundleIdentifier:(id)identifier;
+ (void)_addiTunesStoreHeadersToRequest:(id)request withSSBag:(id)ssbag account:(id)account appendAuthKitHeaders:(BOOL)headers appendStorefrontToURL:(BOOL)url clientBundleIdentifier:(id)identifier;
+ (void)_addiTunesStoreHeadersToRequest:(id)request withURLBag:(id)urlbag accountIdentifier:(id)identifier appendAuthKitHeaders:(BOOL)headers appendStorefrontToURL:(BOOL)url clientBundleIdentifier:(id)identifier;
+ (void)_addAccountDSID:(id)dsid toRequest:(id)request;
+ (void)_addiTunesStoreHeadersToRequest:(id)request withAccount:(id)account appendAuthKitHeaders:(BOOL)headers appendStorefrontToURL:(BOOL)url clientBundleIdentifier:(id)identifier extraHeaders:(id)headers storefrontSuffix:(id)suffix;
+ (void)_addiTunesStoreHeadersToRequest:(id)request withURLBag:(id)urlbag account:(id)account appendAuthKitHeaders:(BOOL)headers appendStorefrontToURL:(BOOL)url clientBundleIdentifier:(id)identifier;
+ (void)_addPrimaryiCloudDSIDToRequest:(id)request;
+ (void)_appendStorefront:(id)storefront toRequestURL:(id)url;
+ (id)_restrictionsHeaderValue;
+ (id)_authKitSession;
+ (void)_handleResponseHeaders:(id)headers response:(id)response request:(id)request account:(id)account performsMachineDataActions:(BOOL)actions shouldRetry:(BOOL *)retry;
+ (BOOL)_operationWaitsForPurchases:(id)purchases;
+ (void)_performMachineDataRequest:(id)request requestProperties:(id)properties completion:(id /* block */)completion;
+ (id)_storeFrontIdentifierForAccount:(id)account;

/* instance methods */
- (id)init;
- (id)logKey;
- (id)authenticatedAccountDSID;
- (id)_copyAuthenticationContext;
- (BOOL)handleRedirectFromDataProvider:(id)provider error:(id *)error;
- (void)handleResponse:(id)response;
- (id)newRequestWithURL:(id)url;
- (BOOL)_processResponseData:(id)data error:(id *)error;
- (void)run;
- (BOOL)shouldFollowRedirectWithRequest:(id)request returningError:(id *)error;
- (void)_willSendRequest:(id)request;
- (void)sender:(id)sender didFallbackToPassword:(BOOL)password;
- (id)_ssBag_copyGUIDSchemesFromBag:(id)bag;
- (id)_ssBag_copyGUIDPatternsFromBag:(id)bag;
- (BOOL)_ssBag_shouldSendGUIDForURL:(id)url withBag:(id)bag;
- (void)_setStoreFrontIdentifier:(id)identifier isTransient:(BOOL)transient;
- (id)_absintheHeaders;
- (void)_applyAnalyticsCookiesToRequest:(id)request withBag:(id)bag oldBag:(id)bag;
- (id)_account;
- (void)_addStandardQueryParametersForURL:(id)url;
- (BOOL)_authenticateWithContext:(id)context error:(id *)error;
- (BOOL)_canSendTokenToURL:(id)url;
- (id)_buyParams;
- (void)_continueTouchIDSession;
- (id)_copyAuthenticationContextForAttemptNumber:(long long)number;
- (BOOL)_isErrorTokenError:(id)error;
- (id)_loadURLBagInterpreterWithRequest:(id)request requestProperties:(id)properties;
- (BOOL)_performMachineDataRequest:(id)request;
- (id)_resolvedURLInBagContext:(id)context bagTrusted:(BOOL *)trusted;
- (void)_runURLOperation;
- (BOOL)_shouldRetryForAbsintheWithResponse:(id)response;
- (BOOL)_shouldRetryForTouchIDChallengeWithError:(id)error;
- (id)_urlBagForContext:(id)context;
- (BOOL)isURLBagRequest;
@end

#endif /* ISStoreURLOperation_h */
