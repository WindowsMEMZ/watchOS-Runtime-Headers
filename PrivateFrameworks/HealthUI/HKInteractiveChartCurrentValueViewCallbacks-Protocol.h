//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInteractiveChartCurrentValueViewCallbacks_Protocol_h
#define HKInteractiveChartCurrentValueViewCallbacks_Protocol_h
@import Foundation;

@protocol HKInteractiveChartCurrentValueViewCallbacks <NSObject>
/* instance methods */
- (void)didTapOnDateFromCurrentValueView:(id)view;
- (void)didTapOnInfoButtonFromCurrentValueView:(id)view;
- (id)stringForValueRange:(id)range timeScope:(long long)scope;
@end

#endif /* HKInteractiveChartCurrentValueViewCallbacks_Protocol_h */
