//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SDXPCRemoteAutoFillSessionInterface_Protocol_h
#define SDXPCRemoteAutoFillSessionInterface_Protocol_h
@import Foundation;

@protocol SDXPCRemoteAutoFillSessionInterface 
/* instance methods */
- (void)autoFillHelperActivate:(id)activate completion:(id /* block */)completion;
- (void)autoFillHelperDidPickUsername:(id)username password:(id)password error:(id)error;
- (void)autoFillHelperTryPIN:(id)pin;
- (void)autoFillHelperUserNotificationDidActivate:(id)activate;
- (void)autoFillHelperUserNotificationDidDismiss:(id)dismiss;
@end

#endif /* SDXPCRemoteAutoFillSessionInterface_Protocol_h */
