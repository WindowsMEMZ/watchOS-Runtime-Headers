//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLAnimatedScalar_h
#define MDLAnimatedScalar_h
@import Foundation;

#include "MDLAnimatedValue.h"

@interface MDLAnimatedScalar : MDLAnimatedValue
/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)precision;
- (struct VtValue { struct type { unsigned char x0[8] } x0; struct TfPointerAndBits<const VtValue::_TypeInfo> { struct _TypeInfo * x0; } x1; })defaultVtValue;
- (void)resetWithUsdAttribute:(const void *)attribute timeScale:(double)scale;
- (void)resetWithUsdAttribute:(const void *)attribute timeScale:(double)scale time:(double)time;
- (void)setFloat:(float)float atTime:(double)time;
- (void)setDouble:(double)double atTime:(double)time;
- (float)floatAtTime:(double)time;
- (double)doubleAtTime:(double)time;
- (void)resetWithFloatArray:(const float *)array atTimes:(const double *)times count:(unsigned long long)count;
- (void)resetWithDoubleArray:(const double *)array atTimes:(const double *)times count:(unsigned long long)count;
- (unsigned long long)getFloatArray:(float *)array maxCount:(unsigned long long)count;
- (unsigned long long)getDoubleArray:(double *)array maxCount:(unsigned long long)count;
@end

#endif /* MDLAnimatedScalar_h */
