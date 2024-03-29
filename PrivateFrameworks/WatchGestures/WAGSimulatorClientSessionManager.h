//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGSimulatorClientSessionManager_h
#define WAGSimulatorClientSessionManager_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "WAGSimulatorClientSessionManagerDelegate-Protocol.h"
#include "WAGSimulatorXPCServerInterface-Protocol.h"

@class NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface WAGSimulatorClientSessionManager : NSObject<NSXPCListenerDelegate, WAGSimulatorXPCServerInterface> {
  /* instance variables */
  NSXPCListener *_listener;
  NSMutableSet *_connections;
  NSObject<OS_dispatch_queue> *_queue;
  float _simulatedRotationDegree;
}

@property (weak, nonatomic) NSObject<WAGSimulatorClientSessionManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)handleSimulatorGestureType:(unsigned long long)type;
@end

#endif /* WAGSimulatorClientSessionManager_h */
