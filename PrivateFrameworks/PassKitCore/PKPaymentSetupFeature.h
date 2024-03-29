//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupFeature_h
#define PKPaymentSetupFeature_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSSet, NSString;

@interface PKPaymentSetupFeature : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSSet *identifiers;
@property (copy, nonatomic) NSString *localizedDisplayName;
@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) long long supportedOptions;
@property (nonatomic) long long supportedDevices;
@property (copy, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (nonatomic) unsigned long long featureIdentifier;
@property (copy, nonatomic) NSString *dirtyStateIdentifier;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) NSDate *expiry;
@property (nonatomic) unsigned long long productType;
@property (nonatomic) unsigned long long productState;
@property (copy, nonatomic) NSString *notificationTitle;
@property (copy, nonatomic) NSString *notificationMessage;
@property (copy, nonatomic) NSString *discoveryCardIdentifier;

/* class methods */
+ (id)paymentSetupFeatureWithProtobuf:(id)protobuf;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)protobuf;
- (id)initWithIdentifiers:(id)identifiers localizedDisplayName:(id)name;
- (void)sanitizePaymentSetupFeature;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* PKPaymentSetupFeature_h */
