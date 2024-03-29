//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 498.300.11.0.0
//
#ifndef SOSServerProtocol_Protocol_h
#define SOSServerProtocol_Protocol_h
@import Foundation;

@protocol SOSServerProtocol <NSObject>
/* instance methods */
- (void)willStartSendingLocationUpdate;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)completion;
- (void)startSendingLocationUpdateForReason:(long long)reason WithCompletion:(id /* block */)completion;
- (void)stopSendingLocationUpdate;
- (void)syncState:(id /* block */)state;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)completion;
- (void)triggerSOSWithUUID:(id)uuid triggerMechanism:(long long)mechanism completion:(id /* block */)completion;
@end

#endif /* SOSServerProtocol_Protocol_h */
