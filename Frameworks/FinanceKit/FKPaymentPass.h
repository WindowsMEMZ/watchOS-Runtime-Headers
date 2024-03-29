//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 143.7.11.0.0
//
#ifndef FKPaymentPass_h
#define FKPaymentPass_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSSet, NSString;

@interface FKPaymentPass : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (copy, nonatomic) NSSet *associatedApplicationIdentifiers;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *primaryPaymentApplicationPaymentType;
@property (copy, nonatomic) NSString *primaryPaymentApplicationDisplayName;
@property (copy, nonatomic) NSString *partnerOrgID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* FKPaymentPass_h */
