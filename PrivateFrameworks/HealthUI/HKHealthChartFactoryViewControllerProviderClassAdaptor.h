//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthChartFactoryViewControllerProviderClassAdaptor_h
#define HKHealthChartFactoryViewControllerProviderClassAdaptor_h
@import Foundation;

#include "HKHealthChartFactoryViewControllerProvider-Protocol.h"

@interface HKHealthChartFactoryViewControllerProviderClassAdaptor : NSObject<HKHealthChartFactoryViewControllerProvider> {
  /* instance variables */
  Class _providerClass;
}

/* instance methods */
- (id)initWithProviderClass:(Class)class;
- (id)createInteractiveChartViewControllerForTypeIdentifier:(id)identifier chartFactory:(id)factory applicationItems:(id)items displayDate:(id)date preferredOverlay:(long long)overlay restorationUserActivity:(id)activity trendModel:(id)model additionalChartOptions:(unsigned long long)options;
@end

#endif /* HKHealthChartFactoryViewControllerProviderClassAdaptor_h */
