//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUIClientConnectionStateObserver_Protocol_h
#define AXUIClientConnectionStateObserver_Protocol_h
@import Foundation;

@protocol AXUIClientConnectionStateObserver <NSObject>
/* instance methods */
- (void)clientConnection:(id)connection didChangeConnectedState:(BOOL)state;
@end

#endif /* AXUIClientConnectionStateObserver_Protocol_h */
