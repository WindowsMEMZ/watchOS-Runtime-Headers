//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQueryKeyTransparencyContext_h
#define IDSQueryKeyTransparencyContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class KTVerifierResult, NSData, NSDate, NSUUID;

@interface IDSQueryKeyTransparencyContext : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSUUID *ticket;
@property (readonly, nonatomic) KTVerifierResult *verifierResult;
@property (readonly, nonatomic) NSData *accountKey;
@property (readonly, nonatomic) NSDate *queryResponseTime;
@property (readonly, nonatomic) unsigned long long ktOptIn;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithVerifierResult:(id)result ticket:(id)ticket accountKey:(id)key queryResponseTime:(id)time ktOptIn:(unsigned long long)in;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToQueryKeyTransparencyContext:(id)context;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IDSQueryKeyTransparencyContext_h */
