//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDockAllowLaunchAssertionServiceEndpoint_h
#define CSLDockAllowLaunchAssertionServiceEndpoint_h
@import Foundation;

#include "CSLClientConnections.h"
#include "CSLDockAllowLaunchAssertionDelegate-Protocol.h"
#include "CSLSDockAllowLaunchAssertionService-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSXPCListener;

@interface CSLDockAllowLaunchAssertionServiceEndpoint : NSObject<NSXPCListenerDelegate, CSLSDockAllowLaunchAssertionService> {
  /* instance variables */
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) CSLClientConnections *clients;
@property (weak, nonatomic) NSObject<CSLDockAllowLaunchAssertionDelegate> *delegate;
@property (retain, nonatomic) NSMutableDictionary *assertionsByProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)_withLock:(id /* block */)lock;
- (void)resume;
- (void)suspend;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_releaseAllAssertionsFor:(id)for;
- (void)_trackAssertion:(id)assertion;
- (void)_releaseTrackingAssertion:(id)assertion;
- (void)takeDockLaunchAssertion:(id)assertion completion:(id /* block */)completion;
- (void)releaseDockLaunchAssertion:(id)assertion completion:(id /* block */)completion;
- (void)connect:(id /* block */)connect;
@end

#endif /* CSLDockAllowLaunchAssertionServiceEndpoint_h */
