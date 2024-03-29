//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKMovingMedian_h
#define NTKMovingMedian_h
@import Foundation;

#include "NTKMovingStatistic-Protocol.h"

@class NSMutableArray, NSString;

@interface NTKMovingMedian : NSObject<NTKMovingStatistic>

@property (retain, nonatomic) NSMutableArray *values;
@property (nonatomic) double currentValue;
@property (nonatomic) unsigned long long sampleSize;
@property (readonly, nonatomic) unsigned long long sampleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSampleSize:(unsigned long long)size;
- (void)addNewValue:(double)value;
@end

#endif /* NTKMovingMedian_h */
