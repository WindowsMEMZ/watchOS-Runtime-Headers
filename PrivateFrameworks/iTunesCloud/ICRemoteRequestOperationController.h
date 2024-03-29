//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICRemoteRequestOperationController_h
#define ICRemoteRequestOperationController_h
@import Foundation;

@class NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICRemoteRequestOperationController : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  unsigned long long _numberOfActiveRequests;
  NSXPCConnection *_clientConnection;
  NSObject<OS_dispatch_source> *_clientConnectionInvalidationTimer;
}

/* class methods */
+ (id)sharedRemoteRequestOperationController;

/* instance methods */
- (id)_init;
- (void)performRemoteRequestOperationWithExecutionContext:(id)context completionHandler:(id /* block */)handler;
- (void)_cancelClientConnectionInvalidationTimer;
- (void)_didEndExecutingRemoteRequestOperation;
- (void)_invalidateClientConnection;
- (id)_clientConnection;
- (void)_clientConnectionInvalidationTimerDidExpire;
- (void)_scheduleInvalidationOfClientConnection;
- (void)_willBeginExecutingRemoteRequestOperation;
@end

#endif /* ICRemoteRequestOperationController_h */
