//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDRemoteClient_h
#define EDRemoteClient_h
@import Foundation;

#include "EDAccountRepository.h"
#include "EDActivityRegistry.h"
#include "EDClientResumer.h"
#include "EDClientState.h"
#include "EDDaemonInterfaceFactory.h"
#include "EDDiagnosticInfoGatherer.h"
#include "EDFetchController.h"
#include "EDInteractionLogger.h"
#include "EDMailboxRepository.h"
#include "EDMessageRepository.h"
#include "EDOutgoingMessageRepository.h"
#include "EDReconciliationQueryProvider-Protocol.h"
#include "EDSearchableIndex.h"
#include "EDSenderRepository.h"
#include "EDServerRemoteClientsProvider-Protocol.h"
#include "EFLoggable-Protocol.h"
#include "EMDaemonInterfaceXPC-Protocol.h"
#include "EMVIPManagerInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface EDRemoteClient : NSObject<EFLoggable, EMDaemonInterfaceXPC, EDReconciliationQueryProvider> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSXPCConnection *clientConnection;
@property (readonly, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory;
@property (readonly, weak, nonatomic) NSObject<EDServerRemoteClientsProvider> *serverRemoteClientsProvider;
@property (readonly, nonatomic) EDAccountRepository *accountRepository;
@property (readonly, nonatomic) EDClientState *clientState;
@property (readonly, nonatomic) EDFetchController *fetchController;
@property (readonly, nonatomic) EDMailboxRepository *mailboxRepository;
@property (readonly, nonatomic) EDMessageRepository *messageRepository;
@property (readonly, nonatomic) EDOutgoingMessageRepository *outgoingMessageRepository;
@property (readonly, nonatomic) EDSenderRepository *senderRepository;
@property (readonly, nonatomic) EDSearchableIndex *searchableIndex;
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger;
@property (readonly, nonatomic) EDActivityRegistry *activityRegistry;
@property (readonly, nonatomic) NSObject<EMVIPManagerInterface> *vipManagerInterface;
@property (readonly, nonatomic) EDClientResumer *clientResumer;
@property (readonly, nonatomic) EDDiagnosticInfoGatherer *diagnosticInfoGatherer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)exportedInterface;

/* instance methods */
- (id)initWithConnection:(id)connection daemonInterfaceFactory:(id)factory serverRemoteClientsProvider:(id)provider;
- (void)dealloc;
- (void)test_tearDown;
- (void)getMessageRepositoryInterface:(id /* block */)interface;
- (void)getOutgoingMessageRepositoryInterface:(id /* block */)interface;
- (void)getAccountRepositoryInterface:(id /* block */)interface;
- (void)getClientStateInterface:(id /* block */)interface;
- (void)getFetchControllerInterface:(id /* block */)interface;
- (void)getMailboxRepositoryInterface:(id /* block */)interface;
- (void)getSearchableIndexInterface:(id /* block */)interface;
- (void)getInteractionLoggerInterface:(id /* block */)interface;
- (void)getVIPManagerInterface:(id /* block */)interface;
- (void)getActivityRegistryInterface:(id /* block */)interface;
- (void)getDiagnosticInfoGathererInterface:(id /* block */)interface;
- (void)launchForAppLaunch:(id /* block */)launch;
- (void)launchForEarlyRecovery:(id /* block */)recovery;
- (void)setAllowsBackgroundResume:(BOOL)resume;
- (void)getSenderRepositoryInterface:(id /* block */)interface;
- (id)messageReconciliationQueries;
- (id)threadReconciliationQueries;
@end

#endif /* EDRemoteClient_h */
