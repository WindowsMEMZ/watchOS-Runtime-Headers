//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REHistogram_h
#define REHistogram_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "REFeature.h"

@interface REHistogram : NSObject<NSCopying>

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long mean;
@property (readonly, nonatomic) unsigned long long standardDeviation;

/* instance methods */
- (id)initWithFeature:(id)feature;
- (id)initWithFeature:(id)feature binningSize:(unsigned long long)size;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)addValue:(unsigned long long)value;
- (void)removeValue:(unsigned long long)value;
- (unsigned long long)countForValue:(unsigned long long)value;
- (unsigned long long)countOfValuesBetweenMinValue:(unsigned long long)value maxValue:(unsigned long long)value;
- (void)enumerateValuesUsingBlock:(id /* block */)block;
@end

#endif /* REHistogram_h */
