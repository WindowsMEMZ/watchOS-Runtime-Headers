//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTAbstractIDSDevice_Protocol_h
#define BLTAbstractIDSDevice_Protocol_h
@import Foundation;

@protocol BLTAbstractIDSDevice <NSObject>

@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isCloudReachable;

@end

#endif /* BLTAbstractIDSDevice_Protocol_h */
