//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSDaemonController_h
#define IDSDaemonController_h
@import Foundation;

#include "IDSDaemonControllerForwarder.h"
#include "IDSDaemonListener.h"
#include "IDSDaemonProtocol-Protocol.h"

@class IMLocalObject, NSMutableDictionary, NSMutableSet, NSProtocolChecker, NSSet, NSString;
@protocol IMRemoteObject<IDSDaemonProtocol, OS_dispatch_group, OS_dispatch_queue;

@interface IDSDaemonController : NSObject<IDSDaemonProtocol> {
  /* instance variables */
  IDSDaemonControllerForwarder *_forwarder;
  IMLocalObject *_localObject;
  IDSDaemonListener *_daemonListener;
  NSProtocolChecker *_protocol;
  NSObject<OS_dispatch_queue> *_ivarQueue;
  NSObject<OS_dispatch_group> *_daemonConnectedGroup;
  NSObject<OS_dispatch_queue> *_remoteMessageQueue;
  unsigned long long _connectionID;
  NSMutableDictionary *_listenerServices;
  NSSet *_services;
  NSSet *_cachedServices;
  NSMutableDictionary *_listenerCommands;
  NSSet *_commands;
  NSSet *_cachedCommands;
  NSMutableDictionary *_listenerCapabilities;
  unsigned int _cachedCapabilities;
  unsigned int _lastUpdateCaps;
  BOOL _hasCheckedForDaemon;
  BOOL _preventReconnect;
  BOOL _acquiringDaemonConnection;
  BOOL _autoReconnect;
  BOOL _hasBeenSuspended;
  BOOL _fatalErrorOccured;
  NSMutableSet *_notificationServices;
}

@property BOOL _autoReconnect;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectingQueue;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) BOOL isConnecting;
@property (retain, nonatomic) IMRemoteObject<IDSDaemonProtocol> *remoteObject;
@property (readonly, nonatomic) NSString *listenerID;
@property (readonly, nonatomic) IDSDaemonListener *listener;
@property (nonatomic) int curXPCMessagePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;

/* instance methods */
- (void)_performBlock:(id /* block */)block wait:(BOOL)wait;
- (void)_performBlock:(id /* block */)block;
- (id)init;
- (void)dealloc;
- (void)_handleDaemonException:(id)exception;
- (BOOL)_makeConnectionWithLaunch:(BOOL)launch completionBlock:(id /* block */)block;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_disconnectFromDaemonWithForce:(BOOL)force;
- (void)disconnectFromDaemon;
- (void)_connectToDaemonWithLaunch:(BOOL)launch services:(id)services commands:(id)commands capabilities:(unsigned int)capabilities;
- (BOOL)connectToDaemonWithLaunch:(BOOL)launch;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)launch services:(id)services commands:(id)commands capabilities:(unsigned int)capabilities;
- (void)_setServices:(id)services commands:(id)commands capabilities:(unsigned int)capabilities;
- (id)services;
- (BOOL)_setServices:(id)services;
- (id)commands;
- (BOOL)_setCommands:(id)commands;
- (unsigned int)capabilities;
- (BOOL)_setCapabilities:(unsigned int)capabilities;
- (void)_listenerSetUpdated;
- (void)addedDelegateForService:(id)service withCompletion:(id /* block */)completion;
- (BOOL)addListenerID:(id)id services:(id)services commands:(id)commands;
- (BOOL)addListenerID:(id)id services:(id)services;
- (BOOL)hasListenerForID:(id)id;
- (void)removeListenerID:(id)id;
- (id)servicesForListenerID:(id)id;
- (BOOL)setServices:(id)services forListenerID:(id)id;
- (BOOL)setCommands:(id)commands forListenerID:(id)id;
- (id)commandsForListenerID:(id)id;
- (unsigned int)capabilitiesForListenerID:(id)id;
- (BOOL)setCapabilities:(unsigned int)capabilities forListenerID:(id)id shouldLog:(BOOL)log;
- (BOOL)isConnected;
- (void)blockUntilConnected;
- (void)_noteDisconnected;
- (void)_noteSetupComplete;
- (BOOL)remoteObjectExists;
- (BOOL)localObjectExists;
- (id)localObject;
- (void)_localObjectCleanup;
- (void)_remoteObjectCleanup;
- (void)_agentDidLaunchNotification:(id)notification;
- (void)localObjectDiedNotification:(id)notification;
- (void)remoteObjectDiedNotification:(id)notification;
- (void)sendXPCObject:(id)xpcobject objectContext:(id)context;
- (void)forwardMethodWithReplyIsSync:(BOOL)sync block:(id /* block */)block;
- (void)setQueryContext:(id)context;
- (void)unsetQueryContext:(id)context;
- (BOOL)consumeQueryContext:(id)context;
- (id)forwarderWithCompletion:(id /* block */)completion;
- (id)forwardingTargetForSelector:(SEL)selector;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidResume;
- (void)_setAutoReconnect:(BOOL)reconnect;
@end

#endif /* IDSDaemonController_h */
