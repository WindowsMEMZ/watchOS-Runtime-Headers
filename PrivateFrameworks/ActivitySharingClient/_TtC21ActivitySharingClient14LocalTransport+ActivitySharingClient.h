//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef _TtC21ActivitySharingClient14LocalTransport_ActivitySharingClient_h
#define _TtC21ActivitySharingClient14LocalTransport_ActivitySharingClient_h
@import Foundation;

@interface ActivitySharingClient.LocalTransport (ActivitySharingClient) <ActivitySharingClient.TransportInterface>
/* instance methods */
- (void)transportMessage:(long long)message completionHandler:(id /* block */)handler;
- (void)transportMessage:(long long)message data:(NSData *)data completionHandler:(id /* block */)handler;
- (void)transportRequest:(long long)request completionHandler:(id /* block */)handler;
- (void)transportRequest:(long long)request data:(NSData *)data completionHandler:(id /* block */)handler;
- (void)launch;
@end

#endif /* _TtC21ActivitySharingClient14LocalTransport_ActivitySharingClient_h */
