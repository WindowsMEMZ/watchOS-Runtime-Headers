//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFContinuityScannerProtocol_Protocol_h
#define SFContinuityScannerProtocol_Protocol_h
@import Foundation;

@protocol SFContinuityScannerProtocol <SDXPCDaemonProtocol>
/* instance methods */
- (void)scanForTypes:(unsigned long long)types;
- (void)activityPayloadFromDeviceUniqueID:(id)id forAdvertisementPayload:(id)payload command:(id)command timeout:(long long)timeout withCompletionHandler:(id /* block */)handler;
@end

#endif /* SFContinuityScannerProtocol_Protocol_h */
