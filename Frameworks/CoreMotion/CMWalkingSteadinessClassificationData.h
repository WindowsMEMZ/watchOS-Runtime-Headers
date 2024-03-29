//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMWalkingSteadinessClassificationData_h
#define CMWalkingSteadinessClassificationData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CMWalkingSteadinessClassificationData : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) double lowerBound;
@property (readonly, nonatomic) double upperBound;
@property (readonly, nonatomic) long long classificationType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithLowerBound:(double)bound upperBound:(double)bound classificationType:(long long)type;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* CMWalkingSteadinessClassificationData_h */
