//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMRTCSessionVoucher_h
#define HMMRTCSessionVoucher_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface HMMRTCSessionVoucher : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *uuid;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid serviceName:(id)name;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMMRTCSessionVoucher_h */
