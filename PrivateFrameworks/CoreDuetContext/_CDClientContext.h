//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDClientContext_h
#define _CDClientContext_h
@import Foundation;

#include "_CDAsyncLocalContext-Protocol.h"
#include "_CDAsyncUserContext-Protocol.h"
#include "_CDUserContextServerMonitoring-Protocol.h"

@class NSCountedSet, NSMutableDictionary, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, OS_os_log, _CDRemoteUserContextServer;

@interface _CDClientContext : NSObject<_CDAsyncUserContext, _CDAsyncLocalContext, _CDUserContextServerMonitoring>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcEventQueue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) BOOL interrupted;
@property (retain, nonatomic) NSMutableDictionary *keyPathToValues;
@property (retain, nonatomic) NSMutableDictionary *registrations;
@property (retain, nonatomic) NSCountedSet *keyPathsWithRegistrationsForAnyChange;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (retain, nonatomic) NSMutableDictionary *openRegistrationTokens;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<_CDRemoteUserContextServer> *remoteUserContextProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serverInterface;
+ (id)clientInterface;
+ (id)userContext;
+ (id)userContextWithEndpoint:(id)endpoint;

/* instance methods */
- (void)unprotectedSetUpXPCConnectionWithEndpoint:(id)endpoint;
- (id)currentConnection;
- (id)defaultCallbackQueue;
- (id)initWithEndpoint:(id)endpoint;
- (void)dealloc;
- (void)subscribeToEventStreams;
- (void)handleMDCSEvent:(id)mdcsevent;
- (void)handleFetchPropertiesEvent:(id)event;
- (void)handleSubscribeToContextValueNotificationsEvent:(id)event;
- (void)handleUnsubscribeFromContextValueNotificationsEvent:(id)event;
- (void)handleKeepAliveEvent:(id)event;
- (void)handleFetchProxySourceDeviceUUIDEvent:(id)uuidevent;
- (void)handleRequestActivateDevicesEvent:(id)event;
- (void)handleNotificationEvent:(id)event;
- (void)logFaultIfDeprecatedKeyPath:(id)path;
- (BOOL)hasKnowledgeOfContextualKeyPath:(id)path;
- (id)cachedValueIfClientHasRegistrationsForKeyPath:(id)path;
- (void)setCachedValueIfClientHasRegistrations:(id)registrations forKeyPath:(id)path;
- (id)objectForContextualKeyPath:(id)path;
- (void)objectForContextualKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (id)objectForContextualKeyPath:(id)path synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (id)objectForKeyedSubscript:(id)subscript;
- (id)lastModifiedDateForContextualKeyPath:(id)path;
- (void)lastModifiedDateForContextualKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (id)lastModifiedDateForContextualKeyPath:(id)path synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)registration;
- (void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)registration;
- (void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)registrations;
- (void)retryTimes:(int)times block:(id /* block */)block;
- (void)registerCallback:(id)callback;
- (void)cleanupInternalReferencesToRegistration:(id)registration;
- (void)deregisterCallback:(id)callback;
- (BOOL)evaluatePredicate:(id)predicate;
- (void)handleContextualChange:(id)change info:(id)info handler:(id /* block */)handler;
- (void)handleRegistrationCompleted:(id)completed handler:(id /* block */)handler;
- (BOOL)setObject:(id)object forKeyedSubscript:(id)subscript;
- (BOOL)setObject:(id)object forContextualKeyPath:(id)path;
- (void)setObject:(id)object forContextualKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)setObject:(id)object forContextualKeyPath:(id)path synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)addObjects:(id)objects toArrayAtKeyPath:(id)path;
- (void)addObjects:(id)objects toArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)addObjects:(id)objects toArrayAtKeyPath:(id)path synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)removeObjects:(id)objects fromArrayAtKeyPath:(id)path;
- (void)removeObjects:(id)objects fromArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)removeObjects:(id)objects fromArrayAtKeyPath:(id)path synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (id)removeObjectsMatchingPredicate:(id)predicate fromArrayAtKeyPath:(id)path;
- (void)removeObjectsMatchingPredicate:(id)predicate fromArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (id)removeObjectsMatchingPredicate:(id)predicate fromArrayAtKeyPath:(id)path synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)addObjects:(id)objects andRemoveObjects:(id)objects fromArrayAtKeyPath:(id)path;
- (void)addObjects:(id)objects andRemoveObjects:(id)objects fromArrayAtKeyPath:(id)path responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)addObjects:(id)objects andRemoveObjects:(id)objects fromArrayAtKeyPath:(id)path synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (id)localContext;
- (id)valuesForKeyPaths:(id)paths inContextsMatchingPredicate:(id)predicate;
- (id)valuesForKeyPaths:(id)paths;
- (void)valuesForKeyPaths:(id)paths responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (id)valuesForKeyPaths:(id)paths synchronous:(BOOL)synchronous responseQueue:(id)queue withCompletion:(id /* block */)completion;
- (BOOL)setObject:(id)object lastModifiedDate:(id)date forContextualKeyPath:(id)path;
- (void)activateDevices:(id)devices remoteUserContextProxySourceDeviceUUID:(id)uuid;
- (void)deactivateDevices:(id)devices remoteUserContextProxySourceDeviceUUID:(id)uuid;
@end

#endif /* _CDClientContext_h */
