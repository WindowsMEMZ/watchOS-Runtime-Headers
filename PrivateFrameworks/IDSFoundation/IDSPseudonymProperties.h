//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSPseudonymProperties_h
#define IDSPseudonymProperties_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface IDSPseudonymProperties : NSObject<NSSecureCoding>

@property (readonly, nonatomic) double expiryEpoch;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *featureID;
@property (readonly, nonatomic) NSString *scopeID;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSArray *allowedServices;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFeatureID:(id)id scopeID:(id)id expiryEpoch:(double)epoch allowedServices:(id)services;
- (id)withUpdatedExpiryEpoch:(double)epoch;
- (id)withUpdatedAllowedServices:(id)services;
- (id)description;
- (BOOL)hasBeenExpiredForAtLeast:(double)least;
- (BOOL)willBeExpiredIn:(double)in;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToPseudonymProperties:(id)properties;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IDSPseudonymProperties_h */
