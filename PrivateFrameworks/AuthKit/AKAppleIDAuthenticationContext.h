//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKAppleIDAuthenticationContext_h
#define AKAppleIDAuthenticationContext_h
@import Foundation;

#include "AKAnisetteData.h"
#include "AKAppleIDAuthenticationLimitedUIProvider-Protocol.h"
#include "AKAuthenticationContext-Protocol.h"
#include "AKDevice.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSSet, NSString, NSUUID;
@protocol AKAnisetteServiceProtocol, OS_dispatch_queue;

@interface AKAppleIDAuthenticationContext : NSObject<AKAppleIDAuthenticationLimitedUIProvider, AKAuthenticationContext, NSSecureCoding> {
  /* instance variables */
  struct __CFUserNotification * _activeSecondFactoryEntryPrompt;
  id /* block */ _secondFactoryEntryCompletion;
  NSObject<OS_dispatch_queue> *_secondFactorQueue;
  NSString *_interpolatedReason;
  unsigned long long _attemptIndex;
  BOOL _isContextRequestingReauthForExistingService;
  BOOL _performUIOutOfProcess;
  BOOL _keepAlive;
  BOOL _isProxyingForApp;
  BOOL _shouldSendIdentityTokenForRemoteUI;
  BOOL _shouldSendGrandSlamTokensForRemoteUI;
  BOOL _isPasswordEditable;
  BOOL _shouldSkipInitialReachabilityCheck;
  BOOL _forceEligibleForForegroundAuthentication;
  BOOL _shouldBroadcastForProximityAuthOnly;
  NSString *_proxiedAppBundleID;
  NSUUID *_identifier;
  NSString *_identityToken;
  NSString *_remoteUIIdentityToken;
  NSString *_passwordPromptTitle;
  NSString *_password;
  unsigned long long _capabilityForUIDisplay;
  NSString *_shortLivedToken;
  NSString *_message;
  NSString *_masterKey;
  NSString *_proxiedAppName;
}

@property (copy, nonatomic) NSString *generatedCode;
@property (copy, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSNumber *longitude;
@property (copy, nonatomic) NSString *deviceClass;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *deviceEnclosureColor;
@property (copy, nonatomic) NSString *notificationDisclaimer;
@property (readonly, nonatomic) NSUUID *_identifier;
@property (readonly, nonatomic) unsigned long long _capabilityForUIDisplay;
@property (nonatomic) BOOL _shouldSendIdentityTokenForRemoteUI;
@property (nonatomic) BOOL _shouldSendGrandSlamTokensForRemoteUI;
@property (readonly, nonatomic) BOOL _requiresPasswordInput;
@property (readonly, nonatomic) NSString *_interpolatedReason;
@property (readonly, nonatomic) NSString *_interpolatedReasonWithBlame;
@property (nonatomic) BOOL _shouldSkipInitialReachabilityCheck;
@property (nonatomic) BOOL _shouldBroadcastForProximityAuthOnly;
@property (nonatomic) id /* block */ proximityAIDAHandler;
@property (nonatomic) unsigned long long _attemptIndex;
@property (readonly, nonatomic) BOOL contextEligibleForSilentAuthCoercion;
@property (readonly, nonatomic) BOOL contextEligibleForSilentAuth;
@property (readonly, nonatomic) BOOL contextEligibleForBiometricOrPasscodeAuth;
@property (readonly, nonatomic) BOOL contextRequestingReauthForExistingService;
@property (nonatomic) BOOL _performUIOutOfProcess;
@property (nonatomic) BOOL _keepAlive;
@property (readonly, nonatomic) BOOL _shouldRefreshAccountAndUpdateContext;
@property (retain, nonatomic) NSData *displayImageData;
@property (nonatomic) BOOL _forceEligibleForForegroundAuthentication;
@property (nonatomic) BOOL deviceRegionRequired;
@property (nonatomic) BOOL passcodeOnlyPolicy;
@property (copy, nonatomic) NSString *telemetryDeviceSessionID;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (copy, nonatomic) NSString *passwordlessToken;
@property (copy, nonatomic) NSString *idmsDataToken;
@property (nonatomic) BOOL isNativeTakeover;
@property (nonatomic) BOOL isRequestedFromOOPViewService;
@property (nonatomic) BOOL ignorePasswordCache;
@property (nonatomic) unsigned long long securityCode;
@property (nonatomic) BOOL shouldPromptForPasswordOnly;
@property (nonatomic) BOOL shouldUpdatePersistentServiceTokens;
@property (nonatomic) BOOL _isProxyingForApp;
@property (copy, nonatomic) NSString *_proxiedAppBundleID;
@property (copy, nonatomic) NSString *_passwordPromptTitle;
@property (copy, nonatomic) NSString *_password;
@property (nonatomic) BOOL _isPasswordEditable;
@property (copy, nonatomic) NSString *_shortLivedToken;
@property (copy, nonatomic) NSString *_identityToken;
@property (copy, nonatomic) NSString *_remoteUIIdentityToken;
@property (retain, nonatomic) NSObject<AKAnisetteServiceProtocol> *anisetteDataProvider;
@property (copy, nonatomic) NSNumber *isAppleIDLoginEnabled;
@property (copy, nonatomic) NSNumber *hasEmptyPassword;
@property (nonatomic) BOOL shouldRequestRecoveryPET;
@property (nonatomic) BOOL shouldRequestShortLivedToken;
@property (nonatomic) BOOL shouldRequestConfigurationInfo;
@property (nonatomic) BOOL supportsPiggybacking;
@property (nonatomic) BOOL anticipateEscrowAttempt;
@property (copy, nonatomic) NSSet *desiredInternalTokens;
@property (nonatomic) BOOL isFirstTimeLogin;
@property (nonatomic) BOOL shouldSkipSettingsLaunchAlert;
@property (copy, nonatomic) NSString *securityUpgradeContext;
@property (copy, nonatomic) NSString *_message;
@property (copy, nonatomic) NSString *_masterKey;
@property (retain, nonatomic) AKAnisetteData *proxiedDeviceAnisetteData;
@property (retain, nonatomic) AKAnisetteData *companionDeviceAnisetteData;
@property (nonatomic) BOOL shouldPreventInteractiveAuth;
@property (nonatomic) BOOL shouldForceInteractiveAuth;
@property (nonatomic) BOOL needsNewChildAccount;
@property (nonatomic) BOOL needsSecurityUpgradeUI;
@property (nonatomic) BOOL isRKVerification;
@property (copy, nonatomic) NSString *dependentAltDSID;
@property (copy, nonatomic) NSString *cellularDataAttributionAppBundleID;
@property (nonatomic) long long verifyCredentialReason;
@property (copy, nonatomic) NSString *custodianRecoveryToken;
@property (copy, nonatomic) NSString *callerIconBundlePath;
@property (copy, nonatomic) NSString *localizedCallerName;
@property (nonatomic) BOOL enablePasscodeAuth;
@property (readonly, nonatomic) BOOL contextEligibleForPasscodeAuth;
@property (copy, nonatomic) NSString *serviceToken;
@property (copy, nonatomic) NSString *proxiedAppleID;
@property (copy, nonatomic) NSString *sourceAltDSID;
@property (copy, nonatomic) NSString *displayString;
@property (copy, nonatomic) NSString *displayTitle;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL isUsernameEditable;
@property (nonatomic) BOOL shouldAllowAppleIDCreation;
@property (nonatomic) BOOL needsCredentialRecovery;
@property (nonatomic) BOOL needsNewAppleID;
@property (nonatomic) BOOL needsPasswordChange;
@property (nonatomic) BOOL isTriggeredByNotification;
@property (nonatomic) long long serviceType;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *defaultButtonString;
@property (nonatomic) long long maximumLoginAttempts;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSArray *serviceIdentifiers;
@property (nonatomic) BOOL isEphemeral;
@property (copy, nonatomic) NSString *DSID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSDictionary *httpHeadersForRemoteUI;
@property (retain, nonatomic) id clientInfo;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (nonatomic) BOOL shouldOfferSecurityUpgrade;
@property (nonatomic) BOOL needsRepair;
@property (retain, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *helpAnchor;
@property (copy, nonatomic) NSString *helpBook;
@property (nonatomic) long long authenticationPromptStyle;
@property (retain, nonatomic) NSString *cancelButtonString;
@property (retain, nonatomic) NSString *alternativeButtonString;
@property (nonatomic) BOOL hideAlternativeButton;
@property (nonatomic) BOOL hideCancelButton;
@property (nonatomic) BOOL hideReasonString;
@property (nonatomic) BOOL clientShouldHandleAlternativeButtonAction;
@property (retain, nonatomic) NSString *windowTitle;
@property (nonatomic) BOOL alwaysShowUsernameField;
@property (copy, nonatomic) NSString *privacyBundleIdentifier;
@property (nonatomic) BOOL disableProximityAuth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long authenticationType;
@property (nonatomic) unsigned long long authenticationMode;
@property (nonatomic) BOOL isMDMInformationRequired;
@property (copy, nonatomic) NSString *_proxiedAppName;
@property (copy, nonatomic) NSString *appProvidedContext;
@property (copy, nonatomic) AKDevice *proxiedDevice;
@property (copy, nonatomic) AKDevice *companionDevice;
@property (nonatomic) BOOL cliMode;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)_identifierForContext:(id)context;

/* instance methods */
- (id)authKitAccount:(id *)account;
- (id)authKitAccountForSilentServiceToken:(id *)token;
- (id)init;
- (id)_initWithIdentifier:(id)identifier;
- (id)initWithContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_sanitizedCopy;
- (void)_updateWithValuesFromContext:(id)context;
- (BOOL)_localUserHasEmptyPassword;
- (BOOL)isContextEligibleForSilentAuthCoercion;
- (BOOL)isContextEligibleForSilentAuth;
- (BOOL)isContextEligibleForBiometricOrPasscodeAuth;
- (BOOL)isContextEligibleForPasscodeAuth;
- (BOOL)_isEligibleForPasscodeAuth;
- (BOOL)_isVerifyCredentialReasonEligibleForBiometricOrPasscodeAuth;
- (BOOL)isContextRequestingReauthForExistingService;
- (void)_setPassword:(id)password;
- (id)_appendBlameIfRequiredTo:(id)to;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)completion;
- (void)presentLoginAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)completion;
- (void)presentSecondFactorAlertWithError:(id)error title:(id)title message:(id)message completion:(id /* block */)completion;
- (void)_startListeningForSecondFactorCodeEntryNotification;
- (void)_stopListeningForSecondFactorCodeEntryNotification;
- (void)_handleSecondFactorCodeEntry;
- (id)_secondFactorQueue;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)id completion:(id /* block */)completion;
- (void)_setProxyingForApp:(BOOL)app;
- (void)_setProxiedAppBundleID:(id)id;
- (void)_setIdentityToken:(id)token;
- (void)_setRemoteUIIdentityToken:(id)token;
- (void)_setShortLivedToken:(id)token;
- (void)_setMessage:(id)message;
- (void)_setMasterKey:(id)key;
- (BOOL)_isForcedEligibleForForegroundAuthentication;
- (void)_setProxiedAppName:(id)name;
- (void)setTriggeredByNotification:(BOOL)notification;
- (BOOL)isPasscodeOnlyPolicy;
- (void)setAppleIDLoginEnabled:(id)enabled;
- (void)setFirstTimeLogin:(BOOL)login;
@end

#endif /* AKAppleIDAuthenticationContext_h */
