//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPreorderManager_h
#define SSPreorderManager_h
@import Foundation;

#include "SSXPCConnection.h"

@class NSArray;
@protocol OS_dispatch_queue;

@interface SSPreorderManager : NSObject {
  /* instance variables */
  SSXPCConnection *_connection;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  SSXPCConnection *_observerConnection;
  NSObject<OS_dispatch_queue> *_observerQueue;
  struct __CFArray * _observers;
}

@property (readonly) NSArray *itemKinds;
@property (readonly) NSArray *preorders;

/* class methods */
+ (id)bookStoreItemKinds;
+ (id)musicStoreItemKinds;

/* instance methods */
- (id)init;
- (id)initWithItemKinds:(id)kinds;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)cancelPreorders:(id)preorders withCompletionBlock:(id /* block */)block;
- (void)reloadFromServer;
- (void)removeObserver:(id)observer;
- (void)_connectAsObserver;
- (void)_handleMessage:(id)message fromServerConnection:(id)connection;
- (void)_registerAsObserver;
- (void)_sendMessageToObservers:(SEL)observers;
@end

#endif /* SSPreorderManager_h */
