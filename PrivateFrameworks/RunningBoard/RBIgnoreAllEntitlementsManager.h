//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBIgnoreAllEntitlementsManager_h
#define RBIgnoreAllEntitlementsManager_h
@import Foundation;

#include "RBEntitlementManaging-Protocol.h"
#include "RBEntitlementPossessing-Protocol.h"

@class NSString;

@interface RBIgnoreAllEntitlementsManager : NSObject<RBEntitlementManaging, RBEntitlementPossessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)allEntitlements;
- (id)entitlementsForProcess:(id)process;
- (void)purgeEntitlementsForProcess:(id)process;
- (BOOL)hasEntitlement:(id)entitlement;
- (BOOL)hasEntitlementDomain:(unsigned long long)domain;
@end

#endif /* RBIgnoreAllEntitlementsManager_h */
