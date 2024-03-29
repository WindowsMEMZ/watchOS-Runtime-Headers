//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 971.300.71.0.0
//
#ifndef APSConnection_h
#define APSConnection_h
@import Foundation;

@class CUTWeakReference, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol APSConnectionDelegate, OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface APSConnection : NSObject {
  /* instance variables */
  CUTWeakReference *_delegateReference;
  NSString *_environmentName;
  NSString *_connectionPortName;
  unsigned int _connectionPort;
  BOOL _enableCriticalReliability;
  BOOL _enableStatusNotifications;
  BOOL _isConnected;
  NSMutableDictionary *_idsToOutgoingMessages;
  unsigned long long _nextOutgoingMessageID;
  NSObject<OS_dispatch_queue> *_machQueue;
  NSObject<OS_dispatch_source> *_mach_source;
  NSObject<OS_xpc_object> *_connection;
  BOOL _everHadDelegate;
  NSMutableArray *_queuedDelegateBlocks;
  NSString *_processName;
  double _reconnectDelay;
  BOOL _isReconnectScheduled;
  BOOL _isDisconnected;
  BOOL _isDeallocing;
  NSArray *_pushWakeTopics;
  NSMutableDictionary *_pendingURLTokenBlocks;
}

@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } topicMoveLock;
@property (retain, nonatomic) NSMutableArray *accumulatedTopicMoves;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue;
@property (readonly, nonatomic) BOOL isShutdown;
@property (nonatomic) BOOL trackActivityPresence;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) unsigned long long largeMessageSize;
@property (retain, nonatomic) NSArray *enabledTopics;
@property (retain, nonatomic) NSArray *ignoredTopics;
@property (retain, nonatomic) NSArray *opportunisticTopics;
@property (retain, nonatomic) NSArray *nonWakingTopics;
@property (readonly, retain, nonatomic) NSData *publicToken;
@property (nonatomic) BOOL usesAppLaunchStats;
@property (nonatomic) NSObject<APSConnectionDelegate> *delegate;

/* class methods */
+ (BOOL)isValidEnvironment:(id)environment;
+ (void)_safelyCancelAndReleaseConnection:(id)connection;
+ (struct __SecIdentity *)copyIdentity;
+ (void)_flushIdentityCache;
+ (void)_blockingXPCCallWithArgumentBlock:(id /* block */)block resultHandler:(id /* block */)handler;
+ (double)serverTime;
+ (unsigned long long)serverTimeInNanoSeconds;
+ (id)geoRegion;
+ (void)requestCourierConnection;
+ (void)invalidateDeviceIdentity;
+ (double)keepAliveIntervalForEnvironmentName:(id)name;
+ (id)connectionsDebuggingStateOfStyle:(unsigned long long)style;
+ (void)_setTokenState;
+ (void)notifySafeToSendFilter;
+ (id)_createXPCConnectionWithQueueName:(const char *)name;

/* instance methods */
- (id)initWithEnvironmentName:(id)name;
- (id)initWithEnvironmentName:(id)name namedDelegatePort:(id)port;
- (id)initWithEnvironmentName:(id)name queue:(id)queue;
- (id)initWithEnvironmentName:(id)name namedDelegatePort:(id)port queue:(id)queue;
- (id)initWithEnvironmentName:(id)name namedDelegatePort:(id)port personaUniqueString:(id)string queue:(id)queue;
- (id)_initWithEnvironmentName:(id)name namedDelegatePort:(id)port enablePushDuringSleep:(BOOL)sleep personaUniqueString:(id)string queue:(id)queue;
- (void)_shutdownOnIvarQueue;
- (void)shutdown;
- (void)_shutdownFromDealloc;
- (void)dealloc;
- (void)_asyncOnDelegateQueueWithBlock:(id /* block */)block;
- (void)_asyncOnDelegateQueueWithBlock:(id /* block */)block requiresDelegate:(BOOL)delegate;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_handleEvent:(id)event withHandler:(id /* block */)handler;
- (void)_handleEvent:(id)event withHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (void)_reconnectIfNecessaryOnIvarQueueAfterDelay;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_connectIfNecessary;
- (void)_cancelConnectionOnIvarQueue;
- (void)_cancelConnection;
- (void)_disconnectOnIvarQueue;
- (void)_disconnect;
- (void)_disconnectFromDealloc;
- (void)scheduleInRunLoop:(id)loop;
- (void)removeFromRunLoop;
- (void)_onIvarQueue_setEnabledTopics:(id)topics ignoredTopics:(id)topics opportunisticTopics:(id)topics nonWakingTopics:(id)topics sendToDaemon:(BOOL)daemon completion:(id /* block */)completion;
- (void)_setEnabledTopics:(id)topics ignoredTopics:(id)topics opportunisticTopics:(id)topics nonWakingTopics:(id)topics sendToDaemon:(BOOL)daemon completion:(id /* block */)completion;
- (void)setEnabledTopics:(id)topics ignoredTopics:(id)topics opportunisticTopics:(id)topics nonWakingTopics:(id)topics completion:(id /* block */)completion;
- (void)setEnabledTopics:(id)topics ignoredTopics:(id)topics opportunisticTopics:(id)topics nonWakingTopics:(id)topics;
- (void)setEnabledTopics:(id)topics ignoredTopics:(id)topics opportunisticTopics:(id)topics;
- (void)setEnabledTopics:(id)topics ignoredTopics:(id)topics;
- (void)_setEnabledTopics:(id)topics;
- (void)_setOpportunisticTopics:(id)topics;
- (void)_setIgnoredTopics:(id)topics;
- (void)_setNonWakingTopics:(id)topics;
- (id)_topicListNameForLogging:(unsigned long long)logging;
- (void)moveTopic:(id)topic fromList:(unsigned long long)list toList:(unsigned long long)list;
- (void)moveTopics:(id)topics fromList:(unsigned long long)list toList:(unsigned long long)list;
- (void)_processQueuedTopicMovesOnIvarQueue;
- (void)_setTrackActivityPresence:(BOOL)presence sendToDaemon:(BOOL)daemon;
- (BOOL)isConnected;
- (void)_setEnableCriticalReliability:(BOOL)reliability sendToDaemon:(BOOL)daemon;
- (void)setEnableCriticalReliability:(BOOL)reliability;
- (void)_setEnableStatusNotifications:(BOOL)notifications sendToDaemon:(BOOL)daemon;
- (void)setEnableStatusNotifications:(BOOL)notifications;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)xpcmessage;
- (void)_addTrackActivityPresenceToXPCMessage:(id)xpcmessage;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)xpcmessage;
- (void)_addPushWakeTopicsToXPCMessage:(id)xpcmessage;
- (void)_dispatch_sync_to_ivarQueue:(id /* block */)queue shutdownBlock:(id /* block */)block;
- (void)_dispatch_async_to_ivarQueue:(id /* block */)queue;
- (void)_dispatch_async_to_ivarQueue:(id /* block */)queue shutdownBlock:(id /* block */)block;
- (void)_deliverMessage:(id)message;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverPublicTokenOnIvarQueue:(id)queue withCompletionBlock:(id /* block */)block;
- (void)_deliverPublicToken:(id)token withCompletionBlock:(id /* block */)block;
- (void)_deliverConnectionStatusChange:(BOOL)change;
- (void)_deliverConnectionStatusFromDealloc:(BOOL)dealloc;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)id error:(id)error sendRTT:(unsigned long long)rtt ackTimestamp:(unsigned long long)timestamp;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)id error:(id)error sendRTT:(unsigned long long)rtt;
- (void)_deliverToken:(id)token forTopic:(id)topic identifier:(id)identifier;
- (void)_deliverToken:(id)token forInfo:(id)info;
- (void)_deliverURLToken:(id)urltoken forInfo:(id)info;
- (void)_deliverURLTokenError:(id)error forInfo:(id)info;
- (BOOL)hasIdentity;
- (void)_sendOutgoingMessage:(id)message fake:(BOOL)fake;
- (void)sendOutgoingMessage:(id)message;
- (void)cancelOutgoingMessage:(id)message;
- (void)sendFakeMessage:(id)message;
- (void)requestTokenForTopic:(id)topic identifier:(id)identifier;
- (void)requestTokenForInfo:(id)info;
- (void)invalidateTokenForTopic:(id)topic identifier:(id)identifier;
- (void)invalidateTokenForInfo:(id)info;
- (void)calloutToDelegatesForURLTokenError:(id)error forInfo:(id)info completion:(id /* block */)completion;
- (void)requestURLTokenForInfo:(id)info;
- (void)requestURLTokenForInfo:(id)info completion:(id /* block */)completion;
- (void)_insertURLTokenBlock:(id /* block */)block forInfo:(id)info;
- (id)_removeURLTokenBlocksForInfo:(id)info;
- (void)calloutToInvalidateCompletion:(id /* block */)completion withSuccess:(BOOL)success error:(id)error;
- (void)invalidateURLTokenForInfo:(id)info;
- (void)invalidateURLTokenForInfo:(id)info completion:(id /* block */)completion;
- (void)currentTokenForInfo:(id)info;
- (void)currentURLTokenForInfo:(id)info;
- (void)requestKeepAlive;
- (void)confirmReceiptForMessage:(id)message;
- (void)subscribeToChannel:(id)channel forTopic:(id)topic;
- (void)subscribeToChannels:(id)channels forTopic:(id)topic;
- (void)unsubscribeFromChannel:(id)channel forTopic:(id)topic;
- (void)unsubscribeFromChannels:(id)channels forTopic:(id)topic;
- (void)getRegisteredChannelsForTopic:(id)topic withCompletion:(id /* block */)completion;
- (void)getRegisteredChannelsForTopic:(id)topic completion:(id /* block */)completion;
- (id)registeredChannelsForTopic:(id)topic error:(id *)error;
- (void)_deliverFailedChannelSubscriptions:(id)subscriptions onTopic:(id)topic;
- (void)_setPushWakeTopics:(id)topics;
- (void)setPushWakeTopics:(id)topics;
@end

#endif /* APSConnection_h */
