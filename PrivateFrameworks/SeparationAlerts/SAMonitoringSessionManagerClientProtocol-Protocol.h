//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef SAMonitoringSessionManagerClientProtocol_Protocol_h
#define SAMonitoringSessionManagerClientProtocol_Protocol_h
@import Foundation;

@protocol SAMonitoringSessionManagerClientProtocol <NSObject, SABluetoothScanRequestProtocol, SALocationRequestProtocol>
@optional
/* instance methods */
- (void)notifySeparationsForDevices:(id)devices withLocation:(id)location withContext:(id)context;
- (void)updatedMonitoringState:(unsigned long long)state forDeviceUUID:(id)uuid;
@end

#endif /* SAMonitoringSessionManagerClientProtocol_Protocol_h */
