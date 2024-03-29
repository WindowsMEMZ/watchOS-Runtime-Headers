//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CoreTelephonyClientPNRDelegateInternal_Protocol_h
#define CoreTelephonyClientPNRDelegateInternal_Protocol_h
@import Foundation;

@protocol CoreTelephonyClientPNRDelegateInternal <NSObject>
@optional
/* instance methods */
- (void)pnrRequestSent:(id)sent pnrReqData:(id)data;
- (void)pnrResponseReceived:(id)received pnrRspData:(id)data;
- (void)pnrReadyStateNotification:(id)notification regState:(BOOL)state;
- (void)context:(id)context pnrSupportChanged:(BOOL)changed;
@end

#endif /* CoreTelephonyClientPNRDelegateInternal_Protocol_h */
