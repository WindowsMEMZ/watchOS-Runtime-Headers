//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKEntitlements_h
#define CKEntitlements_h
@import Foundation;

#include "CKSQLiteItem-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString;

@interface CKEntitlements : NSObject<CKSQLiteItem> {
  /* instance variables */
  int _pid;
  NSString *_cachedApplicationBundleID;
  NSDictionary *_entitlementsDict;
  NSError *_secEntitlementsError;
  NSString *_procName;
}

@property (readonly) NSString *applicationBundleID;
@property (readonly, nonatomic) NSString *associatedApplicationBundleID;
@property (readonly, nonatomic) NSString *apsEnvironmentEntitlement;
@property (readonly, nonatomic) BOOL hasSPIEntitlement;
@property (readonly, nonatomic) BOOL hasMasqueradingEntitlement;
@property (readonly, nonatomic) BOOL hasProtectionDataEntitlement;
@property (readonly, nonatomic) BOOL hasZoneProtectionDataEntitlement;
@property (readonly, nonatomic) BOOL hasDeviceIdentifierEntitlement;
@property (readonly, nonatomic) BOOL hasCloudKitSystemServiceEntitlement;
@property (readonly, nonatomic) BOOL hasSystemLaunchDaemonEntitlement;
@property (readonly, nonatomic) BOOL hasDarkWakeNetworkReachabilityEnabledEntitlement;
@property (readonly, nonatomic) BOOL hasAllowAccessDuringBuddyEntitlement;
@property (readonly, nonatomic) BOOL hasLightweightPCSEntitlement;
@property (readonly, nonatomic) BOOL hasOutOfProcessUIEntitlement;
@property (readonly, nonatomic) BOOL hasParticipantPIIEntitlement;
@property (readonly, nonatomic) BOOL hasDisplaysSystemAcceptPromptEntitlement;
@property (readonly, nonatomic) NSDictionary *serviceNameForContainerIdentifierMapEntitlement;
@property (readonly, nonatomic) BOOL hasNonLegacyShareURLEntitlement;
@property (readonly, nonatomic) BOOL hasAllowUnverifiedAccountEntitlement;
@property (readonly, nonatomic) BOOL hasAllowRealTimeOperationsEntitlement;
@property (readonly, nonatomic) BOOL hasCloudKitSupportServiceEntitlement;
@property (readonly, nonatomic) BOOL hasExplicitCodeOperationURLEntitlement;
@property (readonly, nonatomic) NSString *codeServiceURLEntitlement;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByServiceEntitlement;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByContainerAndServiceEntitlement;
@property (readonly, nonatomic) BOOL hasVFSOpenByIDEntitlement;
@property (readonly, nonatomic) BOOL hasAllowPackagesEntitlement;
@property (readonly, nonatomic) BOOL hasAlwaysAllowPublishAssetsEntitlement;
@property (readonly, nonatomic) BOOL hasAllowOnDeviceAssetStreamingEntitlement;
@property (readonly, nonatomic) BOOL hasEnvironmentEntitlement;
@property (readonly, nonatomic) BOOL hasCustomAccountsEntitlement;
@property (readonly, nonatomic) BOOL hasNetworkSocketDelegateEntitlement;
@property (readonly, nonatomic) NSString *clientPrefixEntitlement;
@property (readonly, nonatomic) BOOL hasAllowFakeEntitlementsEntitlement;
@property (readonly, nonatomic) long long containerEnvironment;
@property (readonly, nonatomic) NSArray *developmentContainerEnvironmentOverrides;
@property (readonly, nonatomic) NSArray *cloudServices;
@property (readonly, nonatomic) BOOL isBackgroundAssetsExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)ck_bindInStatement:(id)statement atIndex:(unsigned long long)index;
- (id)initWithEntitlementsDict:(id)dict;
- (id)initWithAuditToken:(struct { unsigned int x0[8] })token pid:(int)pid;
- (id)initWithCurrentProcess;
- (id)entitlementsByAddingOverlay:(id)overlay;
- (BOOL)isEqual:(id)equal;
- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)representation;
- (BOOL)validateEntitlementsWithSDKVersion:(unsigned int)sdkversion error:(id *)error;
@end

#endif /* CKEntitlements_h */
