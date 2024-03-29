//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef _IDSActivityMonitorXPCConnector_h
#define _IDSActivityMonitorXPCConnector_h
@import Foundation;

#include "IDSXPCActivityMonitorClient-Protocol.h"
#include "IDSXPCDaemonController.h"

@class NSMutableDictionary, NSString;

@interface _IDSActivityMonitorXPCConnector : NSObject<IDSXPCActivityMonitorClient>

@property (retain, nonatomic) NSMutableDictionary *listenersByActivity;
@property (retain, nonatomic) IDSXPCDaemonController *daemonController;
@property (retain, nonatomic) IDSXPCDaemonController *syncDaemonController;
@property (copy, nonatomic) id /* block */ syncDaemonControllerBuilder;
@property (copy, nonatomic) id /* block */ daemonControllerBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)weakSharedInstance;

/* instance methods */
- (id)initWithSyncDaemonControllerBuilder:(id /* block */)builder daemonControllerBuilder:(id /* block */)builder;
- (void)dealloc;
- (void)performSyncAction:(id /* block */)action;
- (void)performAction:(id /* block */)action errorHandler:(id /* block */)handler;
- (void)addListener:(id)listener forTopic:(id)topic;
- (void)removeListener:(id)listener forTopic:(id)topic;
- (void)_handleInterruption;
- (void)_updateActivity:(id)activity isSupported:(BOOL)supported;
- (void)handleIncomingUpdate:(id)update onActivity:(id)activity completion:(id /* block */)completion;
@end

#endif /* _IDSActivityMonitorXPCConnector_h */
