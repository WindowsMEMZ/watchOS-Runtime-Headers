//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 417.0.4.0.0
//
#ifndef PRRangingClientProtocol_Protocol_h
#define PRRangingClientProtocol_Protocol_h
@import Foundation;

@protocol PRRangingClientProtocol <NSObject>
/* instance methods */
- (void)didFailWithError:(id)error;
- (void)rangingServiceDidUpdateState:(unsigned long long)state cause:(long long)cause;
@optional
/* instance methods */
- (void)didReceiveNewSolutions:(id)solutions;
- (void)rangingRequestDidUpdateStatus:(unsigned long long)status;
- (void)remoteDevice:(id)device didChangeState:(long long)state;
- (void)didReceiveSessionStartNotification:(id)notification;
@end

#endif /* PRRangingClientProtocol_Protocol_h */
