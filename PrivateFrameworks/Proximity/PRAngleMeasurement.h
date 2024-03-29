//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef PRAngleMeasurement_h
#define PRAngleMeasurement_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface PRAngleMeasurement : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) double measurement;
@property (readonly, nonatomic) double uncertainty;

/* class methods */
+ (id)measurementWithAngle:(double)angle uncertainty:(double)uncertainty;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAngle:(double)angle uncertainty:(double)uncertainty;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PRAngleMeasurement_h */
