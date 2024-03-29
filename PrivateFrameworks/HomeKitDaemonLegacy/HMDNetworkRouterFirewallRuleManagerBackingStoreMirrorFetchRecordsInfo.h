//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo_h
#define HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo_h
@import Foundation;

#include "HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper.h"

@class CKRecordID, CKRecordZoneID, NSArray, NSMutableSet;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo : HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper

@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) NSArray *desiredKeys;
@property (readonly, nonatomic) NSMutableSet *records;

/* instance methods */
- (id)initWithActivity:(id)activity options:(id)options promise:(id)promise database:(id)database useAnonymousRequests:(BOOL)requests zoneID:(id)id recordID:(id)id desiredKeys:(id)keys;
@end

#endif /* HMDNetworkRouterFirewallRuleManagerBackingStoreMirrorFetchRecordsInfo_h */
