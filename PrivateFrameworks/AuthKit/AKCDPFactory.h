//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKCDPFactory_h
#define AKCDPFactory_h
@import Foundation;

@interface AKCDPFactory : NSObject
/* class methods */
+ (id)contextForAltDSID:(id)dsid;
+ (id)contextWithAuthResults:(id)results;
+ (id)stateControllerWithContext:(id)context;
+ (id)recoveryControllerWithContext:(id)context;
+ (id)followUpRepairContext;
+ (id)followUpController;
+ (BOOL)cdpAccountIsICDPEnabledForDSID:(id)dsid;
+ (BOOL)cdpAccountIsHSA2EnabledForAltDSID:(id)dsid;
+ (BOOL)cdpAccountIsOTEnabledForAltDSID:(id)dsid;
+ (id)cdpErrorDomain;
+ (unsigned long long)walrusStatus;
+ (id)walrusStatusLiveValue;
+ (BOOL)isWalrusEnabled;
+ (unsigned long long)webAccessStatus;
+ (id)webAccessStatusLiveValue;
+ (BOOL)isWebAccessEnabled;
+ (BOOL)isEligibleToArmDeviceForPCSAuth;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpIDMSRecordPRKKey;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)controller;
+ (id)cdpStateUIController;
+ (id)cdpUIControllerWithPresentingViewController:(id)controller;

/* instance methods */
- (BOOL)isUserVisibleKeychainSyncEnabled;
- (BOOL)isCDPEnabledForDSID:(id)dsid;
- (BOOL)isManateeAvailable;
- (BOOL)isHSA2EnabledForAltDSID:(id)dsid;
@end

#endif /* AKCDPFactory_h */
