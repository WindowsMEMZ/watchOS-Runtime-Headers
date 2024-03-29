//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCAccountUtilities_h
#define MCAccountUtilities_h
@import Foundation;

@interface MCAccountUtilities : NSObject
/* class methods */
+ (void)checkAccountConsistencyAndReleaseOrphanedAccounts;
+ (id)accountDataclassesForBundleID:(id)id;
+ (BOOL)hasManagedAccountOfDataclasses:(id)dataclasses;
@end

#endif /* MCAccountUtilities_h */
