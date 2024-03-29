//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef EXAuditToken_h
#define EXAuditToken_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface EXAuditToken : NSObject<NSSecureCoding, NSCopying>

@property (readonly) struct { unsigned int x0[8] } auditToken;

/* class methods */
+ (BOOL)auditToken:(const struct { unsigned int x0[8] } *)token hasRequiredEntitlements:(id)entitlements error:(id *)error;
+ (id)auditToken:(const struct { unsigned int x0[8] } *)token entitlementValue:(id)value ofClass:(Class)class;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAuditToken:(struct { unsigned int x0[8] })token;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* EXAuditToken_h */
