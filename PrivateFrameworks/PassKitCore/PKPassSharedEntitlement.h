//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassSharedEntitlement_h
#define PKPassSharedEntitlement_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKPassShareTimeConfiguration.h"

@class NSString;

@interface PKPassSharedEntitlement : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *entitlementIdentifier;
@property (retain, nonatomic) PKPassShareTimeConfiguration *timeConfiguration;
@property (nonatomic) unsigned long long recipientShareability;
@property (nonatomic) unsigned long long recipientManageability;
@property (nonatomic) unsigned long long recipientVisibility;
@property (readonly, nonatomic) unsigned long long carKeyEntitlementValue;
@property (nonatomic) long long creationVersion;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCarKeyEntitlementValue:(unsigned long long)value;
- (id)initWithEntitlement:(id)entitlement;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKPassSharedEntitlement_h */
