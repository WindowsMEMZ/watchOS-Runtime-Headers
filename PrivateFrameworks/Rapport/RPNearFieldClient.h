//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPNearFieldClient_h
#define RPNearFieldClient_h
@import Foundation;

#include "RPNearFieldXPCClientInterfaceOld-Protocol.h"

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPNearFieldClient : NSObject<RPNearFieldXPCClientInterfaceOld> {
  /* instance variables */
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
}

@property (readonly, nonatomic) NSXPCConnection *xpcCnx;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ tapEventHandler;
@property (copy, nonatomic) id /* block */ failedDiscovery;
@property (copy, nonatomic) id /* block */ connectionEstablishedHandler;

/* instance methods */
- (id)init;
- (id)_XPCConnectionWithMachServiceName:(id)name options:(unsigned long long)options;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)invalidate;
- (void)_invalidated;
- (void)stopWithCompletion:(id /* block */)completion;
- (void)failDiscoveryWithError:(id)error;
- (void)receivedTapEvent:(id)event;
- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)role;
- (void)didConnect;
@end

#endif /* RPNearFieldClient_h */
