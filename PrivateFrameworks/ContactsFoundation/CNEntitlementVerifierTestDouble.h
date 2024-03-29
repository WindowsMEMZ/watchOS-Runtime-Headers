//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNEntitlementVerifierTestDouble_h
#define CNEntitlementVerifierTestDouble_h
@import Foundation;

#include "CNEntitlementVerification-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CNEntitlementVerifierTestDouble : NSObject<CNEntitlementVerification> {
  /* instance variables */
  NSMutableDictionary *_entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)keyForEntitlement:(id)entitlement;
+ (id)keyForEntitlement:(id)entitlement auditToken:(struct { unsigned int x0[8] })token;

/* instance methods */
- (id)init;
- (void)setCurrentProcessHasValue:(id)value forEntitlement:(id)entitlement;
- (void)setCurrentProcessHasError:(id)error forEntitlement:(id)entitlement;
- (void)setAuditToken:(struct { unsigned int x0[8] })token hasValue:(id)value forEntitlement:(id)entitlement;
- (void)setAuditToken:(struct { unsigned int x0[8] })token hasError:(id)error forEntitlement:(id)entitlement;
- (void)setAuditToken:(struct { unsigned int x0[8] })token isFirstOrSecondParty:(BOOL)party;
- (void)setAuditToken:(struct { unsigned int x0[8] })token isFirstOrSecondPartyError:(id)error;
- (BOOL)currentProcessHasBooleanEntitlement:(id)entitlement error:(id *)error;
- (BOOL)auditToken:(struct { unsigned int x0[8] })token hasBooleanEntitlement:(id)entitlement error:(id *)error;
- (BOOL)booleanResultForKey:(id)key error:(id *)error;
- (BOOL)currentProcessHasArrayWithStringValue:(id)value forAnyEntitlement:(id)entitlement error:(id *)error;
- (BOOL)auditToken:(struct { unsigned int x0[8] })token hasArrayWithStringValue:(id)value forAnyEntitlement:(id)entitlement error:(id *)error;
- (id)stringArrayResultForKey:(id)key error:(id *)error;
- (id)valuesForCurrentProcessForEntitlements:(id)entitlements error:(id *)error;
- (id)valuesForAuditToken:(struct { unsigned int x0[8] })token forEntitlements:(id)entitlements error:(id *)error;
- (id)valueForEntitlementForKey:(id)key error:(id *)error;
- (BOOL)currentProcessIsFirstOrSecondPartyWithError:(id *)error;
- (BOOL)auditToken:(struct { unsigned int x0[8] })token isFirstOrSecondPartyWithError:(id *)error;
@end

#endif /* CNEntitlementVerifierTestDouble_h */
