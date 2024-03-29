//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _CSLUIActivationAssertionsServer_h
#define _CSLUIActivationAssertionsServer_h
@import Foundation;

#include "BSBaseXPCServer.h"
#include "CSLSActivatingUIAssertionProvider-Protocol.h"

@class NSLock, NSMutableArray;

@interface _CSLUIActivationAssertionsServer : BSBaseXPCServer {
  /* instance variables */
  NSObject<CSLSActivatingUIAssertionProvider> *_provider;
  NSLock *_assertionsFromServerLock;
  NSMutableArray *_assertionsFromServer;
}

/* instance methods */
- (id)initWithProvider:(id)provider;
- (BOOL)ping;
- (Class)queue_classForNewClientConnection:(id)connection;
- (void)queue_clientAdded:(id)added;
- (void)queue_clientRemoved:(id)removed;
- (BOOL)_isValidRequest:(id)request;
- (void)queue_handleMessage:(id)message client:(id)client;
- (void)_handleTakeAssertionMessage:(id)message forClient:(id)client;
- (void)_handleReleaseAssertionMessage:(id)message forClient:(id)client;
@end

#endif /* _CSLUIActivationAssertionsServer_h */
