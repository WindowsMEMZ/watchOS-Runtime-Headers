//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEExtensionAppProxyProviderHostDelegate_Protocol_h
#define NEExtensionAppProxyProviderHostDelegate_Protocol_h
@import Foundation;

@protocol NEExtensionAppProxyProviderHostDelegate <NEExtensionTunnelProviderHostDelegate>
/* instance methods */
- (void)extension:(id)extension didRequestFlowDivertControlSocketWithCompletionHandler:(id /* block */)handler;
@end

#endif /* NEExtensionAppProxyProviderHostDelegate_Protocol_h */
