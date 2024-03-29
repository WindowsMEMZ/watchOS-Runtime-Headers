//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatisticsScalar_h
#define _UIStatisticsScalar_h
@import Foundation;

#include "_UIStatistics.h"

@interface _UIStatisticsScalar : _UIStatistics
/* instance methods */
- (void)resetValue;
- (void)setValue:(long long)value;
- (void)incrementValueBy:(long long)by;
@end

#endif /* _UIStatisticsScalar_h */
