//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDIdentityRegistry_h
#define HMDIdentityRegistry_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHomeManager.h"
#include "HMFDumpState-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface HMDIdentityRegistry : HMFObject<HMFLogging, HMFDumpState>

@property (weak) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (readonly) NSArray *registeredIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedRegistry;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)attributeDescriptions;
- (id)identityForIdentifier:(id)identifier;
- (void)configureWithHomeManager:(id)manager;
- (id)_userForIdenity:(id)idenity;
- (id)userForDevice:(id)device;
- (id)identitiesForDevice:(id)device;
- (id)identitiesForAccount:(id)account;
- (id)identitiesForAccountIdentifier:(id)identifier;
- (id)accountsForIdentity:(id)identity;
- (void)registerIdentity:(id)identity device:(id)device object:(id)object;
- (void)registerIdentity:(id)identity account:(id)account object:(id)object;
- (void)deregisterIdentity:(id)identity object:(id)object;
- (void)reset;
- (id)dumpState;
@end

#endif /* HMDIdentityRegistry_h */
