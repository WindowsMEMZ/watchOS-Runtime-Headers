//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraRemoteStreamSenderProtocol_Protocol_h
#define HMDCameraRemoteStreamSenderProtocol_Protocol_h
@import Foundation;

@protocol HMDCameraRemoteStreamSenderProtocol <HMDCameraRemoteStreamProtocol>

@property (readonly, nonatomic) NSNumber *mtu;

/* instance methods */
- (void)openRelaySession;
- (void)startPacketRelayWithVideoSocket:(int)socket videoNetworkConfig:(id)config cameraVideoSSRC:(unsigned int)ssrc audioSocket:(int)socket audioNetworkConfig:(id)config cameraAudioSSRC:(unsigned int)ssrc;
@optional
/* instance methods */
- (void)startPacketRelayWithIDSDeviceSession:(id)session cameraVideoSSRC:(unsigned int)ssrc cameraAudioSSRC:(unsigned int)ssrc;
@end

#endif /* HMDCameraRemoteStreamSenderProtocol_Protocol_h */
