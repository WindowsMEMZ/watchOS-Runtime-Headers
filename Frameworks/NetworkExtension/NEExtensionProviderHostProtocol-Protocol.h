//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEExtensionProviderHostProtocol_Protocol_h
#define NEExtensionProviderHostProtocol_Protocol_h
@import Foundation;

@protocol NEExtensionProviderHostProtocol <NSObject>
/* instance methods */
- (void)startedWithError:(id)error;
- (void)displayMessage:(id)message message:(id)message completionHandler:(id /* block */)handler;
@end

#endif /* NEExtensionProviderHostProtocol_Protocol_h */
