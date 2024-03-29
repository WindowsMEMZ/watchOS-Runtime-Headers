//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKAudiogramChartPoint_h
#define HKAudiogramChartPoint_h
@import Foundation;

#include "HKAudiogramChartData.h"
#include "HKChartPoint-Protocol.h"
#include "HKGraphSeriesBlockCoordinateInfo-Protocol.h"

@class NSNumber, NSString;

@interface HKAudiogramChartPoint : NSObject<HKGraphSeriesBlockCoordinateInfo, HKChartPoint>

@property (readonly, nonatomic) NSNumber *xValue;
@property (readonly, nonatomic) NSNumber *yValue;
@property (readonly, nonatomic) HKAudiogramChartData *chartData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)axisValueFromFrequency:(double)frequency;
+ (double)frequencyFromAxisValue:(double)value;
+ (id)chartPointsFromSensitivityPoints:(id)points isLeftEar:(BOOL)ear;
+ (id)_chartPointFromSensitivityPoint:(id)point isLeftEar:(BOOL)ear;

/* instance methods */
- (id)initWithChartData:(id)data;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)key;
- (id)allYValues;
- (id)minYValue;
- (id)maxYValue;
- (id)userInfo;
@end

#endif /* HKAudiogramChartPoint_h */
