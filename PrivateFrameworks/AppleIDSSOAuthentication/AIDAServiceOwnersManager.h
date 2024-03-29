//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 100.0.0.0.0
//
#ifndef AIDAServiceOwnersManager_h
#define AIDAServiceOwnersManager_h
@import Foundation;

#include "AIDAServiceOwnerProtocol-Protocol.h"

@class ACAccountStore, NSDictionary, NSString;

@interface AIDAServiceOwnersManager : NSObject<AIDAServiceOwnerProtocol> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceOwnersLock;
  ACAccountStore *_accountStore;
}

@property (copy, nonatomic) NSDictionary *serviceOwners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serviceOwnerBundles;
+ (id)supportedServices;
+ (id)_sharedTelemetryReporter;

/* instance methods */
- (id)init;
- (id)initWithAccountStore:(id)store;
- (id)_buildServiceOwnerMapping;
- (id)accountForService:(id)service;
- (id)altDSIDForAccount:(id)account service:(id)service;
- (id)DSIDForAccount:(id)account service:(id)service;
- (id)nameComponentsForAccount:(id)account service:(id)service;
- (void)signInService:(id)service withContext:(id)context completion:(id /* block */)completion;
- (void)signInToAllServicesInBackgroundUsingContext:(id)context completion:(id /* block */)completion;
- (id)_postCloudSupportedServicesForAltDSID:(id)dsid;
- (void)signInToAllServicesInBackground:(BOOL)background usingContext:(id)context completion:(id /* block */)completion;
- (void)signInToServices:(id)services usingContext:(id)context completion:(id /* block */)completion;
- (void)signOutService:(id)service withContext:(id)context completion:(id /* block */)completion;
- (void)signOutOfAllServicesUsingContext:(id)context completion:(id /* block */)completion;
- (void)signOutOfServices:(id)services usingContext:(id)context completion:(id /* block */)completion;
- (void)_completeSignInSignpost:(struct { unsigned long long x0; unsigned long long x1; })signpost forService:(id)service context:(id)context success:(BOOL)success error:(id)error;
- (void)_publishSignInTelemetryEventForContext:(id)context;
@end

#endif /* AIDAServiceOwnersManager_h */
