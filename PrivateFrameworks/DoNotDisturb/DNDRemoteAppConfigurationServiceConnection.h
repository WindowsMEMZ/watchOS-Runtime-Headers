//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDRemoteAppConfigurationServiceConnection_h
#define DNDRemoteAppConfigurationServiceConnection_h
@import Foundation;

#include "DNDRemoteAppConfigurationServiceServerProtocol-Protocol.h"

@class BSServiceConnection, BSServiceQuality, NSString;
@protocol OS_dispatch_queue;

@interface DNDRemoteAppConfigurationServiceConnection : NSObject<DNDRemoteAppConfigurationServiceServerProtocol> {
  /* instance variables */
  BSServiceConnection *_queue_connection;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BSServiceQuality *_queuePriority;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)_queue_remoteTarget;
- (void)_queue_createConnection;
- (void)_queue_invalidateConnection;
- (void)getCurrentAppConfigurationForActionIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
- (void)invalidateAppContextForActionIdentifier:(id)identifier withRequestDetails:(id)details completionHandler:(id /* block */)handler;
@end

#endif /* DNDRemoteAppConfigurationServiceConnection_h */
