//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStoreCacheGroup_h
#define HMDBackingStoreCacheGroup_h
@import Foundation;

#include "HMFObject.h"
#include "HMDBackingStoreCacheZone.h"

@class CKRecordZoneSubscription, CKServerChangeToken, NSString;

@interface HMDBackingStoreCacheGroup : HMFObject

@property long long groupID;
@property (retain) CKServerChangeToken *serverChangeToken;
@property (retain) CKRecordZoneSubscription *subscription;
@property (readonly, weak) HMDBackingStoreCacheZone *zone;
@property (readonly) NSString *rootRecordName;
@property (readonly) NSString *subscriptionName;
@property (readonly) NSString *owner;

/* instance methods */
- (id)initWithGroupID:(long long)id zone:(id)zone rootRecord:(id)record serverChangeToken:(id)token subscriptionName:(id)name owner:(id)owner subscription:(id)subscription;
- (id)dumpDebug;
@end

#endif /* HMDBackingStoreCacheGroup_h */
