//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 267.0.0.0.0
//
#ifndef NRDevicePropertyObserver_Protocol_h
#define NRDevicePropertyObserver_Protocol_h
@import Foundation;

@protocol NRDevicePropertyObserver <NSObject>
/* instance methods */
- (void)device:(id)device propertyDidChange:(id)change fromValue:(id)value;
@end

#endif /* NRDevicePropertyObserver_Protocol_h */
