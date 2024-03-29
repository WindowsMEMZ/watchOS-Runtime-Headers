//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSXPCStoreServerConnectionContext_h
#define NSXPCStoreServerConnectionContext_h
@import Foundation;

#include "NSCoreDataKeyedArchivingDelegate-Protocol.h"
#include "NSManagedObjectContext.h"
#include "NSPersistentStore.h"
#include "NSXPCStoreConnectionInfo.h"

@interface NSXPCStoreServerConnectionContext : NSObject<NSCoreDataKeyedArchivingDelegate> {
  /* instance variables */
  NSManagedObjectContext *_context;
  NSXPCStoreConnectionInfo *_info;
  id _manager;
  NSPersistentStore *_activeStore;
}

/* instance methods */
- (id)initWithConnectionInfo:(id)info;
- (id)description;
- (void)dealloc;
- (id)entitlements;
- (id)persistentStoreCoordinator;
- (struct { unsigned int x0[8] })auditToken;
- (id)managedObjectContext;
- (void)setManagedObjectContext:(id)context;
- (id)userInfo;
- (void)setUserInfo:(id)info;
- (id)notificationManager;
- (void)setNotificationManager:(id)manager;
- (id)cache;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)named onEntity:(id)entity;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)named onEntity:(id)entity;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)named onEntity:(id)entity;
- (BOOL)_allowCoreDataFutures;
@end

#endif /* NSXPCStoreServerConnectionContext_h */
