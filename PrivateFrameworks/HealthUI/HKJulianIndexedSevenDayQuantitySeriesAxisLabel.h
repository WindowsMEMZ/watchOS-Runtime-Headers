//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKJulianIndexedSevenDayQuantitySeriesAxisLabel_h
#define HKJulianIndexedSevenDayQuantitySeriesAxisLabel_h
@import Foundation;

@class NSString;

@interface HKJulianIndexedSevenDayQuantitySeriesAxisLabel : NSObject

@property (readonly, nonatomic) double location;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long type;

/* instance methods */
- (id)initWithText:(id)text location:(double)location;
- (id)initWithText:(id)text location:(double)location type:(long long)type;
@end

#endif /* HKJulianIndexedSevenDayQuantitySeriesAxisLabel_h */
