//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHTTPServerMessageTransportDelegate_Protocol_h
#define HMDHTTPServerMessageTransportDelegate_Protocol_h
@import Foundation;

@protocol HMDHTTPServerMessageTransportDelegate <NSObject>
/* instance methods */
- (void)server:(id)server didStopWithError:(id)error;
- (void)server:(id)server didAddDevice:(id)device;
- (void)server:(id)server didRemoveDevice:(id)device;
- (void)server:(id)server didReceiveMessage:(id)message fromDevice:(id)device completionHandler:(id /* block */)handler;
@end

#endif /* HMDHTTPServerMessageTransportDelegate_Protocol_h */
