//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEExtensionProviderProtocol_Protocol_h
#define NEExtensionProviderProtocol_Protocol_h
@import Foundation;

@protocol NEExtensionProviderProtocol <NSObject>
/* instance methods */
- (void)sleepWithCompletionHandler:(id /* block */)handler;
- (void)wake;
- (void)createWithCompletionHandler:(id /* block */)handler;
- (void)dispose;
- (void)setConfiguration:(id)configuration extensionIdentifier:(id)identifier;
- (void)startWithOptions:(id)options completionHandler:(id /* block */)handler;
- (void)stopWithReason:(int)reason;
- (void)validateWithCompletionHandler:(id /* block */)handler;
@end

#endif /* NEExtensionProviderProtocol_Protocol_h */
