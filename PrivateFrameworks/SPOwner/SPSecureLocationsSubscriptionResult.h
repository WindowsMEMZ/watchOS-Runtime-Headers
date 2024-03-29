//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPSecureLocationsSubscriptionResult_h
#define SPSecureLocationsSubscriptionResult_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface SPSecureLocationsSubscriptionResult : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) double expiresIn;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithExpiryTime:(double)time locations:(id)locations;
@end

#endif /* SPSecureLocationsSubscriptionResult_h */
