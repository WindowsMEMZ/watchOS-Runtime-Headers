//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPProgressServerDefaultBehavior_h
#define IPProgressServerDefaultBehavior_h
@import Foundation;

#include "IPProgressServerBehavior-Protocol.h"
#include "IPServerXPCTransport.h"
#include "IPServerXPCTransportDelegate-Protocol.h"
#include "IPStateUpdateStreamSink-Protocol.h"
#include "IPXPCClientDelegate-Protocol.h"

@class NSString;
@protocol IPProgressServerBehaviorDelegate, OS_dispatch_queue;

@interface IPProgressServerDefaultBehavior : NSObject<IPProgressServerBehavior, IPServerXPCTransportDelegate, IPXPCClientDelegate> {
  /* instance variables */
  IPServerXPCTransport *_transport;
  NSObject<IPStateUpdateStreamSink> *_stateSink;
}

@property (weak, nonatomic) NSObject<IPProgressServerBehaviorDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTransport:(id)transport stateUpdateSink:(id)sink;
- (void)resume;
- (void)progressForIdentity:(id)identity changed:(id)changed;
- (void)progressForIdentity:(id)identity finishedWithState:(unsigned long long)state;
- (void)progressForIdentityInitiated:(id)initiated;
- (void)identityWasUninstalled:(id)uninstalled;
- (id)activeInstallationsForClient:(id)client;
- (id)progressForIdentity:(id)identity forClient:(id)client error:(id *)error;
- (id)allInstallableStatesForClient:(id)client;
- (BOOL)transport:(id)transport shouldAcceptConnection:(id)connection;
- (void)transport:(id)transport acceptedClient:(id)client;
- (void)transport:(id)transport clientDisconnected:(id)disconnected;
- (id)transport:(id)transport requestDelegateForClient:(id)client;
@end

#endif /* IPProgressServerDefaultBehavior_h */
