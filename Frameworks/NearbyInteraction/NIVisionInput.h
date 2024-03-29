//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef NIVisionInput_h
#define NIVisionInput_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface NIVisionInput : NSObject<NSCopying, NSSecureCoding>

@property (readonly) double timestamp;
@property (readonly) struct { x0[4] } devicePose;
@property (readonly) long long trackingState;
@property (readonly) double lightEstimate;
@property (readonly) BOOL majorRelocalization;
@property (readonly) BOOL minorRelocalization;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTimestamp:(double)timestamp devicePose:(struct { x0[4] })pose trackingState:(long long)state lightEstimate:(double)estimate majorRelocalization:(BOOL)relocalization minorRelocalization:(BOOL)relocalization;
- (void)overrideTimestamp:(double)timestamp;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* NIVisionInput_h */
