//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGGestureToolSimulationSession_h
#define WAGGestureToolSimulationSession_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "WAGGestureToolSimulationSessionDelegate-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface WAGGestureToolSimulationSession : NSObject<NSXPCListenerDelegate> {
  /* instance variables */
  NSXPCListener *_listener;
  NSMutableSet *_connections;
  NSObject<OS_dispatch_queue> *_queue;
  float _simulatedRotationDegree;
}

@property (weak, nonatomic) NSObject<WAGGestureToolSimulationSessionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)ping;
- (void)handleCommand:(id)command completion:(id /* block */)completion;
- (void)_handleCommand:(id)command completion:(id /* block */)completion;
@end

#endif /* WAGGestureToolSimulationSession_h */
