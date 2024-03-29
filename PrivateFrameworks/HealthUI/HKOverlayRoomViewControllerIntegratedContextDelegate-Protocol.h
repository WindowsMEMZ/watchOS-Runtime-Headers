//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKOverlayRoomViewControllerIntegratedContextDelegate_Protocol_h
#define HKOverlayRoomViewControllerIntegratedContextDelegate_Protocol_h
@import Foundation;

@protocol HKOverlayRoomViewControllerIntegratedContextDelegate <NSObject>

@property (readonly, nonatomic) HKInteractiveChartOverlayNamedDataSource *cacheDataSource;
@property (readonly, nonatomic) HKLineSeries *alternateLineSeries;

@optional
/* instance methods */
- (id)valueString:(id)string applicationItems:(id)items representativeDisplayType:(id)type;
- (id)unitString:(id)string applicationItems:(id)items representativeDisplayType:(id)type;
- (id)valueContextString:(id)string applicationItems:(id)items representativeDisplayType:(id)type;
- (id)formatterForTimescope:(long long)timescope;
@end

#endif /* HKOverlayRoomViewControllerIntegratedContextDelegate_Protocol_h */
