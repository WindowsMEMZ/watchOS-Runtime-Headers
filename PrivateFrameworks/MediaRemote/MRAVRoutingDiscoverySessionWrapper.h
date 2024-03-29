//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRAVRoutingDiscoverySessionWrapper_h
#define MRAVRoutingDiscoverySessionWrapper_h
@import Foundation;

#include "NSProxy.h"
#include "MRAVRoutingDiscoverySession.h"
#include "MRAVRoutingDiscoverySessionConfiguration.h"

@class NSMutableDictionary;

@interface MRAVRoutingDiscoverySessionWrapper : NSProxy {
  /* instance variables */
  NSMutableDictionary *_endpointsChangedCallbacks;
  NSMutableDictionary *_endpointsAddedCallbacks;
  NSMutableDictionary *_endpointsRemovedCallbacks;
  NSMutableDictionary *_endpointsModifiedCallbacks;
  NSMutableDictionary *_outputDevicesChangedCallbacks;
  NSMutableDictionary *_outputDevicesAddedCallbacks;
  NSMutableDictionary *_outputDevicesRemovedCallbacks;
  NSMutableDictionary *_outputDevicesModifiedCallbacks;
  NSMutableDictionary *_endpointsTokensMap;
  NSMutableDictionary *_outputDevicesTokensMap;
  unsigned int _discoveryMode;
}

@property (retain, nonatomic) MRAVRoutingDiscoverySessionConfiguration *configuration;
@property (retain, nonatomic) MRAVRoutingDiscoverySession *sharedSession;

/* instance methods */
- (id)initWithSession:(id)session configuration:(id)configuration;
- (id)debugDescription;
- (void)setDiscoveryMode:(unsigned int)mode;
- (unsigned int)discoveryMode;
- (void)setTargetAudioSessionID:(unsigned int)id;
- (void)setRoutingContextUID:(id)uid;
- (void)setAlwaysAllowUpdates:(BOOL)updates;
- (void)setPopulatesExternalDevice:(BOOL)device;
- (id)addEndpointsChangedCallback:(id /* block */)callback;
- (id)addEndpointsAddedCallback:(id /* block */)callback;
- (id)addEndpointsRemovedCallback:(id /* block */)callback;
- (id)addEndpointsModifiedCallback:(id /* block */)callback;
- (id)addOutputDevicesChangedCallback:(id /* block */)callback;
- (id)addOutputDevicesAddedCallback:(id /* block */)callback;
- (id)addOutputDevicesRemovedCallback:(id /* block */)callback;
- (id)addOutputDevicesModifiedCallback:(id /* block */)callback;
- (void)removeEndpointsChangedCallback:(id)callback;
- (void)removeEndpointsAddedCallback:(id)callback;
- (void)removeEndpointsRemovedCallback:(id)callback;
- (void)removeEndpointsModifiedCallback:(id)callback;
- (void)removeOutputDevicesChangedCallback:(id)callback;
- (void)removeOutputDevicesAddedCallback:(id)callback;
- (void)removeOutputDevicesRemovedCallback:(id)callback;
- (void)removeOutputDevicesModifiedCallback:(id)callback;
- (void)updateSharedSession;
- (void)transferEndpointsChangedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferEndpointsAddedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferEndpointsRemovedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferEndpointsModifiedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferOutputDevicesChangedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferOutputDevicesAddedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferOutputDevicesRemovedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferOutputDevicesModifiedCallbacksFromSession:(id)session toSession:(id)session;
- (void)transferCallbacksFromSession:(id)session toSession:(id)session;
- (void)updateObserversWithPreviousSession:(id)session;
- (void)reevaluateDiscoveryModeForSession:(id)session;
- (void)dealloc;
- (void)forwardInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
@end

#endif /* MRAVRoutingDiscoverySessionWrapper_h */
