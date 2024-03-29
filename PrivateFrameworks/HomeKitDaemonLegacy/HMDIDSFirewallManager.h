//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDIDSFirewallManager_h
#define HMDIDSFirewallManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMDIDSFirewallManagerContext.h"
#include "HMFLogging-Protocol.h"

@class NSArray, NSString;

@interface HMDIDSFirewallManager : HMFObject<HMFLogging>

@property (readonly) HMDIDSFirewallManagerContext *context;
@property (readonly, copy) NSArray *userIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)firewallEntriesForUserIDs:(id)ids;
+ (id)logCategory;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)start;
- (void)replaceFireWallEntriesWithUserIDs:(id)ids;
- (void)addFireWallEntryForUserIDs:(id)ids;
- (void)handleDidAddHome;
- (void)handleDidRemoveHome;
- (void)handleDidAddUserWithUserID:(id)id;
- (void)handleDidAddUserWithUserID:(id)id completion:(id /* block */)completion;
- (void)handleDidRemoveUser;
@end

#endif /* HMDIDSFirewallManager_h */
