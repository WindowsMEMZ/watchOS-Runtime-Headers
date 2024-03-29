//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentWebServiceContext_h
#define PKPaymentWebServiceContext_h
@import Foundation;

#include "PKWebServiceContext.h"
#include "PKPaymentWebServiceConfiguration.h"
#include "PKPaymentWebServiceRegion.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface PKPaymentWebServiceContext : PKWebServiceContext {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock_context;
  NSMutableDictionary *_verificationRequestsByPassUniqueID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
  NSMutableDictionary *_featureSupportedLanguageCache;
}

@property long long consistencyCheckBackoffLevel;
@property (copy) NSArray *certificates;
@property (copy) NSString *lastUpdatedTag;
@property long long version;
@property (copy) NSString *deviceID;
@property (copy) NSString *secureElementID;
@property (copy) NSString *pushToken;
@property (copy) NSString *nextPushToken;
@property (copy) NSString *companionSerialNumber;
@property BOOL devSigned;
@property (copy) NSDate *registrationDate;
@property (copy) NSDate *archivedDate;
@property (copy) NSDate *configurationDate;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property BOOL transactionServiceDisabled;
@property BOOL messageServiceDisabled;
@property BOOL ignoreProvisioningEnablementPercentage;
@property (copy) NSDictionary *regions;
@property (copy) NSString *primaryRegionIdentifier;
@property (readonly, weak) PKPaymentWebServiceRegion *primaryRegion;
@property (readonly, nonatomic) NSURL *peerPaymentServiceURL;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccount;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)contextWithArchive:(id)archive;
+ (void)_migrateContext:(id)context;
+ (void)_migrateFrom0To1:(id)to1;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)encodeWithCoder:(id)coder;
- (void)archiveAtPath:(id)path;
- (id)debugDescription;
- (void)_localizationUpdated;
- (void)addVerificationRequestRecord:(id)record forUniqueID:(id)id;
- (id)verificationRequestRecordForUniqueID:(id)id;
- (void)removeVerificationRequestRecordForUniqueID:(id)id;
- (id)regionForIdentifier:(id)identifier;
- (void)atomicallyUpdatePrimaryRegion:(id /* block */)region;
- (void)atomicallyUpdateRegionWithIdentifier:(id)identifier updateBlock:(id /* block */)block;
- (void)atomicallyUpdateEveryRegion:(id /* block */)region;
- (id)TSMPushTopics;
- (id)TSMURLStringByPushTopic;
- (id)notificationPushTopics;
- (id)applyServicePushTopics;
- (id)accountServicePushTopics;
- (id)_regionWithPeerPaymentServiceURL;
- (BOOL)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)region;
- (BOOL)contextMeetsMarketGeoNotificationThresholdForRegion:(id)region paymentNetwork:(long long)network;
- (BOOL)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)region;
- (id)betaPaymentNetworksForRegion:(id)region;
- (double)_contextProvisioningEnablementValue;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)threshold;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)identifier mainLanguageBundle:(id)bundle;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)identifier mainLanguageBundle:(id)bundle;
@end

#endif /* PKPaymentWebServiceContext_h */
