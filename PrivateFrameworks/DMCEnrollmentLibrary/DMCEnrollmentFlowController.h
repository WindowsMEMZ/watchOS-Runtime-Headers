//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCEnrollmentFlowController_h
#define DMCEnrollmentFlowController_h
@import Foundation;

#include "DMCEnrollmentFlowControllerBase.h"
#include "DMCEnrollmentDirtyState.h"
#include "DMCServiceDiscoveryHelper.h"

@class MDMESSODetails, NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL;
@protocol DMCEnrollmentFlowMCBridge, DMCEnrollmentFlowPresenter;

@interface DMCEnrollmentFlowController : DMCEnrollmentFlowControllerBase

@property (retain, nonatomic) DMCEnrollmentDirtyState *dirtyState;
@property (retain, nonatomic) NSObject<DMCEnrollmentFlowPresenter> *presenter;
@property (retain, nonatomic) NSObject<DMCEnrollmentFlowMCBridge> *managedConfigurationHelper;
@property (copy, nonatomic) id /* block */ enrollmentCompletionHandler;
@property (nonatomic) unsigned long long enrollmentType;
@property (nonatomic) BOOL restartIfFail;
@property (nonatomic) BOOL cleanupIfFail;
@property (nonatomic) BOOL isRenewalFlow;
@property (nonatomic) BOOL isPostRestoration;
@property (retain, nonatomic) DMCServiceDiscoveryHelper *serviceDiscoveryHelper;
@property (nonatomic) BOOL hasExecutedUIStep;
@property (nonatomic) BOOL noCompletionScene;
@property (copy, nonatomic) NSArray *anchorCertificateRefs;
@property (nonatomic) unsigned long long enrollmentMethod;
@property (retain, nonatomic) NSString *devicePasscode;
@property (retain, nonatomic) NSData *devicePasscodeData;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *managedAppleID;
@property (retain, nonatomic) NSArray *servers;
@property (nonatomic) unsigned long long serverInformationSource;
@property (retain, nonatomic) NSURL *serviceURL;
@property (retain, nonatomic) NSDictionary *authParams;
@property (retain, nonatomic) NSString *enrollmentURL;
@property (retain, nonatomic) NSDictionary *authTokens;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSMutableDictionary *authenticationResults;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *rmAccountIdentifier;
@property (retain, nonatomic) NSData *profileData;
@property (retain, nonatomic) NSString *profileIdentifier;
@property (nonatomic) BOOL isProfileLocked;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *friendlyName;
@property (retain, nonatomic) NSArray *serverCapabilities;
@property (retain, nonatomic) MDMESSODetails *essoDetails;
@property (retain, nonatomic) NSString *appBundleID;
@property (retain, nonatomic) NSNumber *essoAppITunesStoreID;
@property (retain, nonatomic) NSString *ESSOConfigurationProfileIdentifier;

/* class methods */
+ (id)enrollmentFlowController;
+ (id)enrollmentFlowControllerWithPresenter:(id)presenter managedConfigurationHelper:(id)helper;
+ (id)chooseServerFromUAORGOServers:(id)uaorgoservers error:(id *)error;
+ (id)_createGeneralError;
+ (id)_createUnsupportedFeatureError;
+ (id)_createMissingRMAccountError;
+ (id)_createMissingAppleAccountForUserEnrollmentError;
+ (id)_createMissingEnterpriseApplicationError;
+ (id)_createEnterpriseApplicationExistsErrorWithAppName:(id)name;
+ (id)_createEnterpriseApplicationMissingEntitlementsError;
+ (id)_createMissingEnterpriseApplicationBundleIDError;
+ (id)_createGeneralSignInError;

/* instance methods */
- (id)init;
- (id)initWithPresenter:(id)presenter managedConfigurationHelper:(id)helper;
- (void)dealloc;
- (void)cleanUpDirtyState;
- (void)startORGOEnrollmentFlowWithServiceURL:(id)url anchorCertificates:(id)certificates restartIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)startUAORGOEnrollmentFlowWithServiceURL:(id)url anchorCertificates:(id)certificates restartIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)startMacBuddyORGOEnrollmentFlowWithServiceURL:(id)url anchorCertificates:(id)certificates restartIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)startWatchEnrollmentFlowWithServiceURL:(id)url anchorCertificates:(id)certificates restartIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)renewORGOEnrollmentWithServiceURL:(id)url anchorCertificates:(id)certificates restartIfFail:(BOOL)fail cleanupIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)restartORGOEnrollmentWithServiceURL:(id)url anchorCertificates:(id)certificates isPostRestoration:(BOOL)restoration restartIfFail:(BOOL)fail cleanupIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)startBYODEnrollmentFlowRestartIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)continueMacBuddyORGOEnrollmentFlowWithAuthentiactionResults:(id)results serviceURL:(id)url bearerToken:(id)token profileData:(id)data completionHandler:(id /* block */)handler;
- (void)reauthBYODEnrollmentFlowRestartIfFail:(BOOL)fail rmAccountIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)updateMDMUserEnrollmentWithManagedAppleID:(id)id profileIdentifier:(id)identifier organizationName:(id)name personaID:(id)id completionHandler:(id /* block */)handler;
- (void)updateSharediPadUserChannelWithManagedAppleID:(id)id profileIdentifier:(id)identifier organizationName:(id)name enrollmentURL:(id)url completionHandler:(id /* block */)handler;
- (void)terminateEnrollmentFlow;
- (void)_startEnrollmentFlowWithType:(unsigned long long)type anchorCertificates:(id)certificates restartIfFail:(BOOL)fail completionHandler:(id /* block */)handler;
- (void)_workerQueue_performFlowStep:(unsigned long long)step;
- (void)_resetToInitialSteps;
- (void)_workerQueue_stopMonitorAndEmptyDiskValues;
- (void)_workerQueue_flowCompleted;
- (void)_flowTerminatedWithError:(id)error canceled:(BOOL)canceled;
- (void)_cleanupDirtyState:(id)state;
- (void)_workerQueue_cleanupCachedValues;
- (id)_commonStepsForEnrollmentType:(unsigned long long)type;
- (id)_ORGO_commonSteps;
- (id)_ORGO_deviceEnrollmentSteps;
- (id)_ORGO_MAIDEnrollmentSteps;
- (id)_ORGO_MACBuddy_commonSteps;
- (id)_ORGO_MACBuddy_firstPartSteps;
- (id)_ORGO_MACBuddy_secondPartSteps;
- (id)_ADxE_commonSteps;
- (id)_ADxE_MAID_firstPartSteps;
- (id)_ADxE_MAID_secondPartSteps_default;
- (id)_ADxE_MAID_secondPartSteps_orgToken;
- (id)_ADxE_thirdParty_firstPartSteps;
- (id)_ADxE_thirdParty_secondPartSteps_default;
- (id)_ADxE_thirdParty_secondPartSteps_orgToken;
- (id)_ADxE_thirdParty_ESSO_firstPartSteps;
- (id)_ADxE_thirdParty_ESSO_secondPartSteps_default;
- (id)_ADxE_thirdParty_ESSO_secondPartSteps_orgToken;
- (id)_ADxE_reauthSteps;
- (id)_MDM_UserEnrollment_commonSteps;
- (id)_MDM_SharediPad_commonSteps;
- (id)_Watch_deviceEnrollmentSteps;
- (id)_stepsWithUI;
- (id)_postEnrollmentSteps;
- (void)_preflightEnrollmentWithEnrollmentType:(unsigned long long)type isRenewalFlow:(BOOL)flow isPostRestoration:(BOOL)restoration;
- (void)_askForUsernameWithDefaultUsername:(id)username;
- (void)_fetchServerInformationWithUsername:(id)username;
- (id)_findServerWithVersion:(id)version servers:(id)servers;
- (void)_chooseEnrollmentTypeWithAvailableServers:(id)servers serverInformationSource:(unsigned long long)source;
- (void)_detectAuthTypeWithServiceURL:(id)url enrollmentType:(unsigned long long)type machineInfo:(id)info anchorCertificateRefs:(id)refs;
- (void)_processAuthServicesWithAuthParams:(id)params enrollmentMethod:(unsigned long long)method username:(id)username;
- (void)_askForPasscodeIfNeeded;
- (void)_authenticateMAID:(id)maid authenticationResults:(id)results enrollmentType:(unsigned long long)type personaID:(id)id ephemeral:(BOOL)ephemeral silent:(BOOL)silent isRenewalFlow:(BOOL)flow;
- (void)_signInMAIDWithAuthenticationResult:(id)result enrollmentType:(unsigned long long)type personaID:(id)id isRenewalFlow:(BOOL)flow;
- (BOOL)_verifyAccountsInformationWithAltDSID:(id)dsid personaID:(id)id;
- (void)_exchangeMAIDForBearerTokenWithRMAccountIdentifier:(id)identifier authParams:(id)params anchorCertificateRefs:(id)refs;
- (void)_fetchEnrollmentProfileFromServiceURL:(id)url authTokens:(id)tokens machineInfo:(id)info anchorCertificateRefs:(id)refs enrollmentType:(unsigned long long)type enrollmentMethod:(unsigned long long)method isESSO:(BOOL)esso essoAppITunesStoreID:(id)id;
- (void)_askForUserConsentWithProfileData:(id)data managedAppleID:(id)id;
- (void)_displayManagementDetailsOverviewWithProfileData:(id)data managedAppleID:(id)id;
- (void)_installEnrollmentProfile:(id)profile devicePasscode:(id)passcode personaID:(id)id rmAccountIdentifier:(id)identifier isESSO:(BOOL)esso essoAppITunesStoreID:(id)id essoConfigurationProfile:(id)profile enrollmentType:(unsigned long long)type;
- (void)_createRMAccountIfNeededWithSignInUserIdentifier:(id)identifier assignedMAID:(id)maid existingRMAccountID:(id)id enrollmentType:(unsigned long long)type enrollmentMethod:(unsigned long long)method isRenewalFlow:(BOOL)flow;
- (void)_updateRMAccountWithIdentifier:(id)identifier authenticationResults:(id)results enrollmentMethod:(unsigned long long)method;
- (void)_updateRMAccountWithIdentifier:(id)identifier authTokens:(id)tokens profileIdentifier:(id)identifier organizationName:(id)name personaID:(id)id enrollmentMethod:(unsigned long long)method;
- (void)_updateRMAccountWithIdentifier:(id)identifier authTokens:(id)tokens personaID:(id)id;
- (void)_correlateMAIDWithAltDSID:(id)dsid withRMAccount:(id)rmaccount isProfileLocked:(BOOL)locked organizationName:(id)name friendlyName:(id)name personaID:(id)id;
- (void)_updateAccountsWithRMIdentifier:(id)rmidentifier managedAppleID:(id)id profileIdentifier:(id)identifier organizationName:(id)name enrollmentURL:(id)url personaID:(id)id;
- (void)_reauthenticationCompleteWithRMIdentifier:(id)rmidentifier;
- (void)_requestiCloudSignInConfirmation;
- (void)_promoteiCloudWithAltDSID:(id)dsid;
- (void)_askForRestoreChoiceWithMAID:(id)maid personaID:(id)id;
- (void)_installEnterpriseApplication:(id)application debuggingAppIDs:(id)ids personaID:(id)id;
- (BOOL)_validateAndTrackAppWithBundleID:(id)id personaID:(id)id requiredEntitlements:(id)entitlements error:(id *)error;
- (BOOL)_appWithBundleIDExists:(id)idexists;
- (id)_appNameWithBundleID:(id)id;
- (void)_installESSOConfigurationProfile:(id)profile devicePasscode:(id)passcode personaID:(id)id;
- (void)_manageApplicationWithAppBundleID:(id)id essoDetails:(id)details organization:(id)organization personaID:(id)id;
- (id)_nameForStep:(unsigned long long)step;
- (void)_addNotification;
- (void)_receivedApplicationWillTerminateNotification:(id)notification;
- (id)_guardAgainstConflictingAccountsWithUsername:(id)username;
- (BOOL)_isORGOEnrollment:(unsigned long long)orgoenrollment;
- (BOOL)_isBYODEnrollment:(unsigned long long)byodenrollment;
- (void)_writeDirtyStateToDisk:(id)disk;
- (id)_readDirtyStateFromDisk;
- (BOOL)_extractAndVerifyPropertiesFromProfileData:(id)data enrollmentMethod:(unsigned long long)method isESSO:(BOOL)esso essoAppITunesStoreID:(id)id error:(id *)error;
- (BOOL)_validEnrollmentMode:(id)mode enrollmentMethod:(unsigned long long)method;
- (void)_updateCredentialForAccount:(id)account authTokens:(id)tokens;
- (id)_convertErrorToHumanReadableError:(id)error;
- (id)_trustedErrors;
- (id)_errorTranslation;
- (id)_translatedErrorStringForError:(id)error;
- (void)_blockAppInstallsIfNecessary;
- (void)_blockAppInstalls;
- (void)_unblockAppInstallsIfNecessaryWithCaller:(id)caller;
- (void)_unblockAppInstallsWithCaller:(id)caller;
- (id)_bundleIDsFromAppIDs:(id)ids;
@end

#endif /* DMCEnrollmentFlowController_h */
