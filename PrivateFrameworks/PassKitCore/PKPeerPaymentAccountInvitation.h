//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentAccountInvitation_h
#define PKPeerPaymentAccountInvitation_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKPeerPaymentAccountInvitation : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) long long status;
@property (nonatomic) unsigned long long registrationResult;
@property (nonatomic) long long remoteRegistrationRequestLevel;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* PKPeerPaymentAccountInvitation_h */
