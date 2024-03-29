//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNEnvironment_h
#define CNEnvironment_h
@import Foundation;

#include "CNEnvironmentBase.h"
#include "CNAuthorizationContext-Protocol.h"
#include "CNEntitlementVerification-Protocol.h"
#include "CNFileManager-Protocol.h"
#include "CNLocalizationServices-Protocol.h"
#include "CNProbabilityUtility-Protocol.h"
#include "CNSchedulerProvider-Protocol.h"
#include "CNTimeProvider-Protocol.h"
#include "CNUserDefaults.h"
#include "_TtP18ContactsFoundation24CNKeychainFacadeProtocol_-Protocol.h"

@class NSNotificationCenter, NSNumber, NSString;

@interface CNEnvironment : CNEnvironmentBase {
  /* instance variables */
  NSNumber *_isInternalBuildStorage;
  NSNumber *_isCommLimitsEnabledStorage;
  NSNumber *_isKeychainEnabledStorage;
}

@property (nonatomic, readonly) NSObject<ContactsFoundation.CNKeychainFacadeProtocol> *keychainFacade;
@property (readonly) NSObject<CNFileManager> *fileManager;
@property (readonly) CNUserDefaults *userDefaults;
@property (readonly) NSObject<CNSchedulerProvider> *schedulerProvider;
@property (readonly) NSObject<CNTimeProvider> *timeProvider;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<CNEntitlementVerification> *entitlementVerifier;
@property (readonly) NSObject<CNAuthorizationContext> *authorizationContext;
@property (readonly) NSObject<CNLocalizationServices> *localizationServices;
@property (readonly) NSObject<CNProbabilityUtility> *probabilityUtility;
@property (readonly) NSString *mainBundleIdentifier;
@property (readonly) NSString *defaultCountryCode;
@property (readonly) BOOL internalBuild;
@property (readonly) BOOL commLimitsEnabled;
@property (readonly) BOOL keychainEnabled;

/* class methods */
+ (id)defaultEnvironment;
+ (char *)environmentStackKey;

/* instance methods */
- (id)init;
- (id)getDefaultCountryCode;
- (BOOL)isInternalBuild;
- (BOOL)isCommLimitsEnabled;
- (BOOL)isCommLimitsEnabledImpl;
- (BOOL)isKeychainEnabled;
- (BOOL)isKeychainEnabledImpl;
- (id)valueForKey:(id)key onCacheMiss:(id /* block */)miss;
- (void)setValue:(id)value forKey:(id)key;
@end

#endif /* CNEnvironment_h */
