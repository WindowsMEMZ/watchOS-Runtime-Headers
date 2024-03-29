//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebDeviceOrientationProvider_Protocol_h
#define WebDeviceOrientationProvider_Protocol_h
@import Foundation;

@protocol WebDeviceOrientationProvider <NSObject>
/* instance methods */
- (void)startUpdating;
- (void)stopUpdating;
- (id)lastOrientation;
@end

#endif /* WebDeviceOrientationProvider_Protocol_h */
