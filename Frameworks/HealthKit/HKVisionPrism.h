//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKVisionPrism_h
#define HKVisionPrism_h
@import Foundation;

#include "HKQuantity.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface HKVisionPrism : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) HKQuantity *amount;
@property (readonly, copy, nonatomic) HKQuantity *angle;
@property (readonly, copy, nonatomic) HKQuantity *verticalAmount;
@property (readonly, copy, nonatomic) HKQuantity *horizontalAmount;
@property (readonly, nonatomic) long long verticalBase;
@property (readonly, nonatomic) long long horizontalBase;
@property (readonly, nonatomic) long long eye;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAmount:(id)amount angle:(id)angle eye:(long long)eye;
- (id)initWithVerticalAmount:(id)amount verticalBase:(long long)base horizontalAmount:(id)amount horizontalBase:(long long)base eye:(long long)eye;
- (id)description;
- (void)_validatePolar;
- (void)_validateRectangular;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)_setRectangularValues;
- (void)_setPolarValues;
@end

#endif /* HKVisionPrism_h */
