//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKGraphViewSelectionStyle_h
#define HKGraphViewSelectionStyle_h
@import Foundation;

#include "HKStrokeStyle.h"

@interface HKGraphViewSelectionStyle : NSObject

@property (nonatomic) double unselectedSeriesAlpha;
@property (retain, nonatomic) HKStrokeStyle *selectedPointLineStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *touchPointLineStrokeStyle;

/* instance methods */
@end

#endif /* HKGraphViewSelectionStyle_h */
