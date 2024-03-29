//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFCertificate_h
#define DMFCertificate_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface DMFCertificate : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL isIdentity;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCommonName:(id)name data:(id)data isIdentity:(BOOL)identity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* DMFCertificate_h */
