//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PMLMutableDenseVector_h
#define PMLMutableDenseVector_h
@import Foundation;

#include "PMLDenseVector.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSMutableData;

@interface PMLMutableDenseVector : PMLDenseVector<NSCopying, NSMutableCopying>

@property (readonly, nonatomic) float * mutablePtr;
@property (readonly, nonatomic) NSMutableData *mutableData;

/* instance methods */
- (id)initWithMutableData:(id)data;
- (void)append:(float)append;
- (void)append:(const float *)append count:(unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (void)processValuesInPlaceWithBlock:(id /* block */)block;
- (void)scaleInPlaceWithInversedFactor:(float)factor;
- (void)scaleInPlaceWithFactor:(float)factor;
- (void)sumInPlaceWithVector:(id)vector;
@end

#endif /* PMLMutableDenseVector_h */
