//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKElectrocardiogramSessionConfiguration_h
#define HKElectrocardiogramSessionConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSUUID;

@interface HKElectrocardiogramSessionConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) long long mode;
@property (nonatomic) double maximumDuration;
@property (nonatomic) BOOL wornOnRightArm;

/* class methods */
+ (id)sessionConfigurationWithUUID:(id)uuid mode:(long long)mode maximumDuration:(double)duration wornOnRightArm:(BOOL)arm;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HKElectrocardiogramSessionConfiguration_h */
