//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMVO2MaxClassificationData_h
#define CMVO2MaxClassificationData_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface CMVO2MaxClassificationData : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) long long biologicalSex;
@property (readonly, nonatomic) long long ageLowerBound;
@property (readonly, nonatomic) long long ageUpperBound;
@property (readonly, nonatomic) long long classificationType;
@property (readonly, nonatomic) double vo2MaxLowerBound;
@property (readonly, nonatomic) double vo2MaxUpperBound;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBiologicalSex:(long long)sex ageLowerBound:(long long)bound ageUpperBound:(long long)bound classificationType:(long long)type vo2MaxLowerBound:(double)bound vo2MaxUpperBound:(double)bound;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* CMVO2MaxClassificationData_h */
