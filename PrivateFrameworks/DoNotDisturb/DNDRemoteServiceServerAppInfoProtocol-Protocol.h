//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDRemoteServiceServerAppInfoProtocol_Protocol_h
#define DNDRemoteServiceServerAppInfoProtocol_Protocol_h
@import Foundation;

@protocol DNDRemoteServiceServerAppInfoProtocol <NSObject>
/* instance methods */
- (void)getAppInfoForBundleIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)getAppInfoForBundleIdentifiers:(id)identifiers withRequestDetails:(id)details completionHandler:(id /* block */)handler;
@end

#endif /* DNDRemoteServiceServerAppInfoProtocol_Protocol_h */
