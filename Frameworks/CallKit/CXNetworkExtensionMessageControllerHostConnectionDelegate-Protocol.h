//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXNetworkExtensionMessageControllerHostConnectionDelegate_Protocol_h
#define CXNetworkExtensionMessageControllerHostConnectionDelegate_Protocol_h
@import Foundation;

@protocol CXNetworkExtensionMessageControllerHostConnectionDelegate <NSObject>
/* instance methods */
- (void)networkExtensionMessageControllerHostConnectionInvalidated:(id)invalidated;
- (void)networkExtensionMessageControllerHostConnection:(id)connection didReceiveIncomingMessage:(id)message forBundleIdentifier:(id)identifier;
@end

#endif /* CXNetworkExtensionMessageControllerHostConnectionDelegate_Protocol_h */
