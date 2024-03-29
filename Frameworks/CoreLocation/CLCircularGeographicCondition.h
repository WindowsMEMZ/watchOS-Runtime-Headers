//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLCircularGeographicCondition_h
#define CLCircularGeographicCondition_h
@import Foundation;

#include "CLCondition.h"
#include "NSSecureCoding-Protocol.h"

@interface CLCircularGeographicCondition : CLCondition<NSSecureCoding>

@property (readonly) struct CLLocationCoordinate2D { double x0; double x1; } center;
@property (readonly) double radius;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x0; double x1; })center radius:(double)radius;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CLCircularGeographicCondition_h */
