//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPrimaryResidentDiscoveryManagerDataSource_Protocol_h
#define HMDPrimaryResidentDiscoveryManagerDataSource_Protocol_h
@import Foundation;

@protocol HMDPrimaryResidentDiscoveryManagerDataSource <NSObject>

@property (readonly) NSNotificationCenter *notificationCenter;

/* instance methods */
- (id)createPrimaryResidentDiscoveryOperationWithContext:(id)context;
- (id)createBackoffTimer;
- (id)remoteDeviceMonitorFromContext:(id)context;
- (id)transportStartFutureFromContext:(id)context;
@end

#endif /* HMDPrimaryResidentDiscoveryManagerDataSource_Protocol_h */
