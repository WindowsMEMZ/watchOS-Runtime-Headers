//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPRemoteXPCConnection_h
#define RPRemoteXPCConnection_h
@import Foundation;

#include "RPEndpoint.h"

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPRemoteXPCConnection : NSObject {
  /* instance variables */
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) RPEndpoint *endpoint;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

/* instance methods */
- (id)init;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
@end

#endif /* RPRemoteXPCConnection_h */
