//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef NSXPCListenerDelegate_Protocol_h
#define NSXPCListenerDelegate_Protocol_h
@import Foundation;

@protocol NSXPCListenerDelegate <NSObject>
@optional
/* instance methods */
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
@end

#endif /* NSXPCListenerDelegate_Protocol_h */
