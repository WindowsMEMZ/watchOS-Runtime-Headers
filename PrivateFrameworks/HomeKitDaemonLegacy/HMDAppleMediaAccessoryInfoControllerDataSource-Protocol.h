//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAppleMediaAccessoryInfoControllerDataSource_Protocol_h
#define HMDAppleMediaAccessoryInfoControllerDataSource_Protocol_h
@import Foundation;

@protocol HMDAppleMediaAccessoryInfoControllerDataSource <NSObject>

@property (readonly) NSObject<HMEEventForwarder> *eventForwarder;
@property (readonly) NSObject<HMELastEventStoreReadHandle> *eventStoreReadHandle;

/* instance methods */
- (id)accessoryInfoControllerSoftwareVersionTopicForController:(id)controller;
- (id)accessoryInfoControllerTopicForWifiInfo;
- (id)eventSourceIdentifierNameForAccessoryInfoController:(id)controller;
- (id)currentAccessorySoftwareVersion;
@end

#endif /* HMDAppleMediaAccessoryInfoControllerDataSource_Protocol_h */
