//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSOpenApplicationService_h
#define FBSOpenApplicationService_h
@import Foundation;

@class BSServiceConnection;
@protocol OS_dispatch_queue;

@interface FBSOpenApplicationService : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_callbackQueue;
  BSServiceConnection *_connection;
}

/* class methods */
+ (id)new;
+ (id)serviceName;
+ (id)serviceWithEndpoint:(id)endpoint;
+ (id)serviceWithDefaultShellEndpoint;
+ (BOOL)currentProcessServicesDefaultShellEndpoint;

/* instance methods */
- (id)init;
- (id)_initWithEndpoint:(id)endpoint;
- (void)dealloc;
- (void)openApplication:(id)application withOptions:(id)options clientHandle:(id)handle completion:(id /* block */)completion;
- (BOOL)canOpenApplication:(id)application reason:(long long *)reason;
- (void)openApplication:(id)application withOptions:(id)options completion:(id /* block */)completion;
- (id)_remoteTarget;
- (void)_openApplication:(id)application withOptions:(id)options clientHandle:(id)handle completion:(id /* block */)completion;
@end

#endif /* FBSOpenApplicationService_h */
