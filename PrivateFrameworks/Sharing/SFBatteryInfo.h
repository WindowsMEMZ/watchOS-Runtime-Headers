//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFBatteryInfo_h
#define SFBatteryInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface SFBatteryInfo : NSObject<NSSecureCoding>

@property (nonatomic) double batteryLevel;
@property (nonatomic) long long batteryState;
@property (nonatomic) long long batteryType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* SFBatteryInfo_h */
