//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSensorActivityObserver_Protocol_h
#define CSLSensorActivityObserver_Protocol_h
@import Foundation;

@protocol CSLSensorActivityObserver <NSObject>
@optional
/* instance methods */
- (void)activityDataProviderWillUpdate:(id)update;
- (void)activityDataProviderDidUpdate:(id)update;
- (void)activityDidChangeForSensorActivityDataProvider:(id)provider;
- (void)activityDataProvider:(id)provider activitiesAdded:(id)added removed:(id)removed;
@end

#endif /* CSLSensorActivityObserver_Protocol_h */
