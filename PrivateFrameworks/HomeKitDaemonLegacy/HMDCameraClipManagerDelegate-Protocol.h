//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraClipManagerDelegate_Protocol_h
#define HMDCameraClipManagerDelegate_Protocol_h
@import Foundation;

@protocol HMDCameraClipManagerDelegate <NSObject>
@optional
/* instance methods */
- (void)clipManagerDidStart:(id)start;
- (void)clipManagerDidStartUpCloudZone:(id)zone;
- (void)clipManagerDidStop:(id)stop;
- (void)clipManager:(id)manager didUpdateSignificantEvent:(id)event withHomePresence:(id)presence;
- (void)clipManager:(id)manager didDeleteClipWithUUID:(id)uuid;
- (void)clipManagerDidDisableCloudStorage:(id)storage;
@end

#endif /* HMDCameraClipManagerDelegate_Protocol_h */
