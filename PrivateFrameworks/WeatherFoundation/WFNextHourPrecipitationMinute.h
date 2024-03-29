//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFNextHourPrecipitationMinute_h
#define WFNextHourPrecipitationMinute_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate;

@interface WFNextHourPrecipitationMinute : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) double intensity;
@property (readonly, nonatomic) double chance;
@property (readonly, nonatomic) double perceivedIntensity;
@property (readonly, nonatomic) NSDate *date;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIntensity:(double)intensity chance:(double)chance perceivedIntensity:(double)intensity date:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* WFNextHourPrecipitationMinute_h */
