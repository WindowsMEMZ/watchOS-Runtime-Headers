//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentRequestToken_h
#define PKPeerPaymentRequestToken_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString, NSUUID;

@interface PKPeerPaymentRequestToken : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *requestToken;
@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier;
@property (readonly, copy, nonatomic) NSDate *expiryDate;

/* class methods */
+ (id)informalRequestToken;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRequestToken:(id)token deviceScoreIdentifier:(id)identifier;
- (id)initWithRequestToken:(id)token deviceScoreIdentifier:(id)identifier expiryDate:(id)date;
- (BOOL)isEqualToPeerPaymentRequestToken:(id)token;
- (BOOL)isInformalRequestToken;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKPeerPaymentRequestToken_h */
