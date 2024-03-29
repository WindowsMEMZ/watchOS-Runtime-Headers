//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBEntitlements_h
#define RBEntitlements_h
@import Foundation;

#include "RBEntitlementPossessing-Protocol.h"

@class NSSet, NSString;

@interface RBEntitlements : NSObject<RBEntitlementPossessing> {
  /* instance variables */
  NSSet *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)hasEntitlement:(id)entitlement;
- (BOOL)hasEntitlementDomain:(unsigned long long)domain;
- (id)_initWithEntitlements:(id)entitlements;
@end

#endif /* RBEntitlements_h */
