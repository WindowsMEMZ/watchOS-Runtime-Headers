//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMFallDetectionServer_h
#define CMFallDetectionServer_h
@import Foundation;

#include "CMFallDetectionServerXPC-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXPCListener;
@protocol CMFallDetectionServerDelegate;

@interface CMFallDetectionServer : NSObject<CMFallDetectionServerXPC, NSXPCListenerDelegate> {
  /* instance variables */
  NSXPCListener *_listener;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
  NSMutableArray *_connections;
}

@property (weak, nonatomic) NSObject<CMFallDetectionServerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_addConnection:(id)connection;
- (void)_removeConnection:(id)connection;
- (void)appDidFinishProcessingEventWithDuration:(double)duration;
- (void)appDidRequestFallDetectionPrompt;
- (void)clientDidStart;
- (void)didHideFallDetectionPromptForProcessID:(int)id;
@end

#endif /* CMFallDetectionServer_h */
