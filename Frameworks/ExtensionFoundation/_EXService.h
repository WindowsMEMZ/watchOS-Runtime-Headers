//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXService_h
#define _EXService_h
@import Foundation;

#include "LSObserverDelegate-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"
#include "_EXDiscoveryController.h"
#include "_EXServiceProtocol-Protocol.h"

@class NSString;
@protocol OS_dispatch_source;

@interface _EXService : NSObject<NSXPCListenerDelegate, _EXServiceProtocol, LSObserverDelegate>

@property (readonly) _EXDiscoveryController *discoveryController;
@property (readonly) NSObject<OS_dispatch_source> *sigtermSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedService;
+ (void)runAsXPCService;
+ (BOOL)currentProcessIsService;

/* instance methods */
- (id)_init;
- (void)getServiceConfigForExtension:(id)extension overlay:(id *)overlay subservices:(id *)subservices;
- (BOOL)registerServiceForClientConnection:(id)connection extension:(id)extension error:(id *)error;
- (id)_personaStringForClient:(id)client requestedPersona:(id)persona;
- (id)launchWithConfiguration:(id)configuration clientConnection:(id)connection error:(id *)error;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)extensionsWithQuery:(id)query reply:(id /* block */)reply;
- (void)beginExtensionsQuery:(id)query listenerEndpoint:(id)endpoint reply:(id /* block */)reply;
- (void)prepareWithLaunchConfiguration:(id)configuration reply:(id /* block */)reply;
- (void)invalidateLaunchAssertionsForExtensionAuditToken:(struct { unsigned int x0[8] })token reply:(id /* block */)reply;
- (void)photoServiceAuthorizationStatusForExtensionUUID:(id)uuid completion:(id /* block */)completion;
@end

#endif /* _EXService_h */
