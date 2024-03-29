//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKGraphSeriesOverlayData_h
#define HKGraphSeriesOverlayData_h
@import Foundation;

#include "HKGraphSeries.h"
#include "HKGraphSeriesBlockCoordinateList.h"

@interface HKGraphSeriesOverlayData : NSObject

@property (readonly, nonatomic) HKGraphSeries *graphSeries;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } graphSeriesScreenRect;
@property (readonly, nonatomic) HKGraphSeriesBlockCoordinateList *graphSeriesCoordinates;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } graphSeriesPointTransform;

/* instance methods */
- (id)initWithGraphSeries:(id)series graphSeriesScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect graphSeriesCoordinates:(id)coordinates graphSeriesPointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
@end

#endif /* HKGraphSeriesOverlayData_h */
