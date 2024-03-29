//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMDaemonInterface_h
#define EMDaemonInterface_h
@import Foundation;

#include "EFCancelable-Protocol.h"
#include "EFLoggable-Protocol.h"
#include "EMAccountRepository.h"
#include "EMActivityRegistry.h"
#include "EMBlockedSenderManager.h"
#include "EMClientState.h"
#include "EMDiagnosticInfoGatherer.h"
#include "EMFetchController.h"
#include "EMInteractionLogger.h"
#include "EMMailboxRepository.h"
#include "EMMessageRepository.h"
#include "EMOutgoingMessageRepository.h"
#include "EMRemoteProxyGenerator-Protocol.h"
#include "EMSearchableIndex.h"
#include "EMSenderRepository.h"
#include "EMVIPManager-Protocol.h"
#include "NSXPCProxyCreating-Protocol.h"

@class EMDonationController, NSHashTable, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface EMDaemonInterface : NSObject<EFLoggable, EMRemoteProxyGenerator> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSXPCConnection *_connection;
  NSHashTable *_connections;
  long long _connectionState;
  NSObject<EFCancelable> *_daemonLaunchToken;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  atomic BOOL _invalidated;
}

@property (readonly, nonatomic) NSXPCConnection *test_connection;
@property (readonly) EMSearchableIndex *searchableIndex;
@property (readonly) NSObject<NSXPCProxyCreating> *proxyCreator;
@property (readonly) EMMessageRepository *messageRepository;
@property (readonly) EMOutgoingMessageRepository *outgoingMessageRepository;
@property (readonly) EMMailboxRepository *mailboxRepository;
@property (readonly) EMAccountRepository *accountRepository;
@property (readonly) EMSenderRepository *senderRepository;
@property (readonly) EMFetchController *fetchController;
@property (readonly) EMClientState *clientState;
@property (readonly) EMInteractionLogger *interactionLogger;
@property (readonly) EMDonationController *donationController;
@property (readonly) EMActivityRegistry *activityRegistry;
@property (readonly) NSObject<EMVIPManager> *vipManager;
@property (readonly) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) EMDiagnosticInfoGatherer *diagnosticInfoGatherer;
@property BOOL allowsBackgroundResume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)remoteObjectInterface;
+ (id)_mailUninstalledFile;
+ (BOOL)cachedMailAppIsInstalled;
+ (void)setCachedMailAppIsInstalled:(BOOL)installed;

/* instance methods */
- (id)init;
- (id)initAndConfigureBlockedSenderManager:(BOOL)manager;
- (id)initWithListenerEndpoint:(id)endpoint;
- (id)_initByAdoptingConnection:(id)connection useNegotiatedConnection:(BOOL)connection configureBlockedSenderManager:(BOOL)manager;
- (id)initForTesting;
- (void)dealloc;
- (void)_invalidate;
- (void)test_tearDown;
- (id)_connectionForProtocol:(id)protocol error:(id *)error;
- (id)generateProxyForProtocol:(id)protocol error:(id *)error;
- (id)connectionForProtocol:(id)protocol;
- (void)resetProtocolConnections;
- (void)launchDaemon;
- (void)handleDaemonAvailability;
@end

#endif /* EMDaemonInterface_h */
