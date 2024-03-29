//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISApplicationSupportService_h
#define UISApplicationSupportService_h
@import Foundation;

#include "BSServiceConnectionListenerDelegate-Protocol.h"
#include "UISApplicationInitializationContext.h"
#include "UISApplicationSupportXPCServerInterface-Protocol.h"

@class BSServiceConnectionListener, FBSSerialQueue, NSMutableArray, NSString;
@protocol UISApplicationSupportServiceDelegate;

@interface UISApplicationSupportService : NSObject<BSServiceConnectionListenerDelegate, UISApplicationSupportXPCServerInterface> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BSServiceConnectionListener *_listener;
  FBSSerialQueue *_targetQueue;
  NSObject<UISApplicationSupportServiceDelegate> *_lock_delegate;
  UISApplicationInitializationContext *_lock_defaultContext;
  NSMutableArray *_lock_launchPendedRequests;
  BOOL _lock_started;
  BOOL _lock_finishedLaunching;
  struct { unsigned int x :1 defaultContext; unsigned int x :1 overrideInitialize; unsigned int x :1 initializeClientSync; unsigned int x :1 initializeClientSyncWithParameters; unsigned int x :1 initializeClientAsync; unsigned int x :1 initializeClientLegacy; unsigned int x :1 requestPasscodeUnlockUI; unsigned int x :1 destroyScenes; } _lock_delegateFlags;
}

@property (readonly) BOOL hasFinishedLaunching;
@property (copy) UISApplicationInitializationContext *defaultContext;
@property (retain) NSObject<UISApplicationSupportServiceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)initWithCalloutQueue:(id)queue;
- (id)_initWithDelegate:(id)delegate targetQueue:(id)queue;
- (void)dealloc;
- (void)start;
- (id)_delegate;
- (void)_setDelegate:(id)delegate;
- (void)_pendRequestUntilLaunch:(id /* block */)launch;
- (void)listener:(id)listener didReceiveConnection:(id)connection withContext:(id)context;
- (void)initializeClientWithParameters:(id)parameters completion:(id /* block */)completion;
- (void)requestPasscodeUnlockUIWithCompletion:(id /* block */)completion;
- (void)destroyScenesPersistentIdentifiers:(id)identifiers animationType:(id)type destroySessions:(id)sessions completion:(id /* block */)completion;
@end

#endif /* UISApplicationSupportService_h */
