//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSUITriggerRemoteClientService_h
#define CSLSUITriggerRemoteClientService_h
@import Foundation;

#include "CSLSUITriggerClientExportedInterface-Protocol.h"
#include "CSLSUITriggerRemoteClientServiceDelegate-Protocol.h"
#include "CSLSUITriggerRemoteClientServiceProtocol-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSXPCConnection, NSXPCListener;

@interface CSLSUITriggerRemoteClientService : NSObject<NSXPCListenerDelegate, CSLSUITriggerClientExportedInterface, CSLSUITriggerRemoteClientServiceProtocol> {
  /* instance variables */
  int _serviceRestartedNotificationToken;
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
  NSMutableDictionary *_activeTriggers;
}

@property (retain, nonatomic) NSXPCConnection *connectionToServer;
@property (retain, nonatomic) NSXPCConnection *connectionFromServer;
@property (retain, nonatomic) NSXPCListener *listener;
@property (copy, nonatomic) NSString *machServiceName;
@property (weak, nonatomic) NSObject<CSLSUITriggerRemoteClientServiceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)CSLSUITriggerServerExportedInterface;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_invalidateConnectionFromServer;
- (void)_withLock:(id /* block */)lock;
- (void)_reestablishTriggersWithServer;
- (void)connectWithMachServiceName:(id)name;
- (void)connect;
- (void)addUITriggerName:(id)name usage:(id)usage;
- (void)removeUITriggerName:(id)name;
- (void)handleUITriggerWithName:(id)name dictionary:(id)dictionary reason:(long long)reason completion:(id /* block */)completion;
- (void)_connect;
- (void)_createXPCService;
@end

#endif /* CSLSUITriggerRemoteClientService_h */
