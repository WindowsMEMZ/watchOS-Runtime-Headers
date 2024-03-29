//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSensorActivityIndicatorViewControllerDelegate_Protocol_h
#define CSLSensorActivityIndicatorViewControllerDelegate_Protocol_h
@import Foundation;

@protocol CSLSensorActivityIndicatorViewControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)sensorActivityIndicatorViewControllerDidUpdateContent:(id)content;
- (void)didSelectActivityIndicatorViewController:(id)controller;
- (void)activityIndicatorViewController:(id)controller didselectOutlineItem:(id)item;
- (void)activityIndicatorViewController:(id)controller didUpdateSensorIndicatorSettings:(id)settings fromSettings:(id)settings;
@end

#endif /* CSLSensorActivityIndicatorViewControllerDelegate_Protocol_h */
