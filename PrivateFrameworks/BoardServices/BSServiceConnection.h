//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSServiceConnection_h
#define BSServiceConnection_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "BSServiceConnectionClient-Protocol.h"
#include "BSServiceConnectionContext-Protocol.h"
#include "BSServiceConnectionHost-Protocol.h"
#include "BSXPCServiceConnection.h"
#include "BSXPCServiceConnectionMessaging-Protocol.h"
#include "NSCopying-Protocol.h"
#include "_BSServiceConnectionConfiguration.h"

@class BSAtomicSignal, BSAuditToken, BSProcessHandle, NSString, RBSTarget;

@interface BSServiceConnection : NSObject<BSServiceConnectionClient, BSServiceConnectionHost, BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {
  /* instance variables */
  BSXPCServiceConnection *_connection;
  NSString *_name;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  _BSServiceConnectionConfiguration *_lock_config;
  BSAtomicSignal *_lock_activatedSignal;
  BOOL _lock_invalidated;
  BOOL _lock_noAssertInvalidatedOnDealloc;
  BOOL _requiresMessagingAfterHandshake;
}

@property (readonly, nonatomic) BSProcessHandle *remoteProcess;
@property (readonly, nonatomic) BSAuditToken *remoteToken;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly, copy, nonatomic) NSObject<NSCopying> *userInfo;
@property (readonly, nonatomic) id remoteTarget;
@property (readonly, nonatomic) RBSTarget *remoteAssertionTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)NSXPCConnectionWithEndpoint:(id)endpoint configurator:(id /* block */)configurator;
+ (id)NSXPCConnectionWithEndpoint:(id)endpoint clientContextBuilder:(id /* block */)builder configurator:(id /* block */)configurator;
+ (id)currentContext;
+ (id)connectionWithEndpoint:(id)endpoint;
+ (id)connectionWithEndpoint:(id)endpoint clientContextBuilder:(id /* block */)builder;

/* instance methods */
- (id)extractNSXPCConnectionWithConfigurator:(id /* block */)configurator;
- (id)init;
- (void)dealloc;
- (id)remoteTargetWithLaunchingAssertionAttributes:(id)attributes;
- (void)configureConnection:(id /* block */)connection;
- (void)activate;
- (id)remoteTargetWithAssertionAttributes:(id)attributes;
- (void)invalidate;
- (id)createMessage;
- (id)createMessageWithCompletion:(id /* block */)completion;
- (void)_configureConnection:(id /* block */)connection;
@end

#endif /* BSServiceConnection_h */
