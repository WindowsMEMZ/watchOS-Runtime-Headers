//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSStatusOverlayAssertion_h
#define CSLSStatusOverlayAssertion_h
@import Foundation;

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CSLSStatusOverlayAssertion : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSXPCConnection *_connection;
}

@property (copy, nonatomic) NSString *statusString;

/* instance methods */
- (id)init;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (void)acquireWithHandler:(id /* block */)handler invalidationHandler:(id /* block */)handler;
- (void)invalidate;
@end

#endif /* CSLSStatusOverlayAssertion_h */
