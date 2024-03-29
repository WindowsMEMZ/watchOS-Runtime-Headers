//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BUNetworkMonitoring_Protocol_h
#define BUNetworkMonitoring_Protocol_h
@import Foundation;

@protocol BUNetworkMonitoring <NSObject>
/* instance methods */
- (void)start;
- (void)stop;
- (BOOL)hasCellularCapability;
- (BOOL)hasWAPICapability;
- (BOOL)isAirplaneModeEnabled;
- (BOOL)hasCellularConnection;
- (BOOL)hasWifiConnection;
- (BOOL)isConnected;
@end

#endif /* BUNetworkMonitoring_Protocol_h */
