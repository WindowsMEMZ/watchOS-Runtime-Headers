//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator_Protocol_h
#define HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator_Protocol_h
@import Foundation;

#include "HMFObject.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerBackingStoreMirror-Protocol.h"
#include "HMDNetworkRouterFirewallRuleManagerInternal-Protocol.h"
#include "HMFLogging-Protocol.h"

@class HMBLocalZone, NSNotificationCenter, NSString;
@protocol OS_dispatch_queue;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator <NSObject>

@property (readonly, weak, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerInternal> *firewallRuleManager;

/* instance methods */
- (void)startupWithLocalDatabase:(id)database completion:(id /* block */)completion;
- (void)shutdownWithCompletion:(id /* block */)completion;
- (void)fetchCloudChangesWithQualityOfService:(long long)service ignoreLastFetchedAccessories:(BOOL)accessories forceChangeNotifications:(BOOL)notifications completion:(id /* block */)completion;
- (void)fetchRulesForAccessories:(id)accessories qualityOfService:(long long)service ignoreOverrides:(BOOL)overrides completion:(id /* block */)completion;
- (id)fetchPairedMetadataVersionConfigurationsForAccessories:(id)accessories qualityOfService:(long long)service ignoreOverrides:(BOOL)overrides error:(id *)error;
- (void)dumpCloudRecordsForProductGroup:(id)group productNumber:(id)number rawOutput:(BOOL)output listOnly:(BOOL)only verifySignatures:(BOOL)signatures completion:(id /* block */)completion;
- (id)dumpLocalRulesForProductGroup:(id)group productNumber:(id)number firmwareVersion:(id)version ignoreOverrides:(BOOL)overrides rawOutput:(BOOL)output error:(id *)error;
- (id)dumpPairedMetadataForProductGroup:(id)group productNumber:(id)number firmwareVersion:(id)version ignoreOverrides:(BOOL)overrides rawOutput:(BOOL)output error:(id *)error;
- (BOOL)removeAllLocalRulesWithError:(id *)error;
- (BOOL)addOverrides:(id)overrides replace:(BOOL)replace error:(id *)error;
- (BOOL)removeAllOverridesWithError:(id *)error;
- (BOOL)removeOverridesForProductGroup:(id)group productNumber:(id)number error:(id *)error;
- (id)ruleConfigurationForAccessory:(id)accessory declarations:(id)declarations;
- (id)pairedMetadataVersionConfigurationForAccessory:(id)accessory pairedMetadata:(id)metadata;
@optional
/* instance methods */
- (void)firewallRuleManagerClientsDidChange;
@end

#endif /* HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator_Protocol_h */
