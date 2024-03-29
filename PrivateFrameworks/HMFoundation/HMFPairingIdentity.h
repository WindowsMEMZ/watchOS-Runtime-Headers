//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFPairingIdentity_h
#define HMFPairingIdentity_h
@import Foundation;

#include "HMFObject.h"
#include "HMFPairingIdentity.h"
#include "HMFPairingKey.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface HMFPairingIdentity : HMFObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) HMFPairingKey *publicKey;
@property (readonly, copy, nonatomic) HMFPairingKey *privateKey;
@property (readonly, copy) HMFPairingIdentity *publicPairingIdentity;

/* class methods */
+ (id)pairingIdentity;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier publicKey:(id)key privateKey:(id)key;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMFPairingIdentity_h */
