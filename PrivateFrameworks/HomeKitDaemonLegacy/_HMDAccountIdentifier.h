//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _HMDAccountIdentifier_h
#define _HMDAccountIdentifier_h
@import Foundation;

#include "HMFObject.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface _HMDAccountIdentifier : HMFObject<NSCopying, NSSecureCoding>

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *kind;
@property (readonly) BOOL authenticated;
@property (readonly, copy) NSString *senderCorrelationIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isAuthenticated;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HMDAccountIdentifier_h */
