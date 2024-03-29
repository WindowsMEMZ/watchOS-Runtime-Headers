//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentAdditionalPushTopics_h
#define PKPeerPaymentAdditionalPushTopics_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKPeerPaymentAdditionalPushTopics : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *preferences;
@property (copy, nonatomic) NSString *associatedAccounts;
@property (copy, nonatomic) NSString *requests;
@property (copy, nonatomic) NSString *endpoint;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPeerPaymentAdditionalPushTopics_h */
