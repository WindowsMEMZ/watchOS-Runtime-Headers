//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDiscoverUserIdentitiesOperationCallbacks_Protocol_h
#define CKDiscoverUserIdentitiesOperationCallbacks_Protocol_h
@import Foundation;

@protocol CKDiscoverUserIdentitiesOperationCallbacks <CKOperationCallbacks>
/* instance methods */
- (void)handleUserIdentityDiscoveryForLookupInfo:(id)info userIdentity:(id)identity;
@end

#endif /* CKDiscoverUserIdentitiesOperationCallbacks_Protocol_h */
