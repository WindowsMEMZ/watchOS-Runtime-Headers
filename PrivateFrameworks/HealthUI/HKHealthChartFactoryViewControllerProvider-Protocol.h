//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthChartFactoryViewControllerProvider_Protocol_h
#define HKHealthChartFactoryViewControllerProvider_Protocol_h
@import Foundation;

@protocol HKHealthChartFactoryViewControllerProvider 
/* instance methods */
- (id)createInteractiveChartViewControllerForTypeIdentifier:(id)identifier chartFactory:(id)factory applicationItems:(id)items displayDate:(id)date preferredOverlay:(long long)overlay restorationUserActivity:(id)activity trendModel:(id)model additionalChartOptions:(unsigned long long)options;
@end

#endif /* HKHealthChartFactoryViewControllerProvider_Protocol_h */
