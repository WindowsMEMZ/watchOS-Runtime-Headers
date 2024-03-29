//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLUbiquitizedStoreConnectionManager_h
#define NSSQLUbiquitizedStoreConnectionManager_h
@import Foundation;

#include "NSSQLConnectionManager.h"
#include "NSSQLiteConnection.h"

@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {
  /* instance variables */
  NSSQLiteConnection *_connection;
}

/* instance methods */
- (id)initWithSQLCore:(id)sqlcore priority:(unsigned long long)priority seedConnection:(id)connection;
- (void)dealloc;
- (void)disconnectAllConnections;
- (void)setExclusiveLockingMode:(BOOL)mode;
- (BOOL)handleStoreRequest:(id)request;
- (void)scheduleBarrierBlock:(id /* block */)block;
- (void)scheduleConnectionsBarrier:(id /* block */)barrier;
@end

#endif /* NSSQLUbiquitizedStoreConnectionManager_h */
