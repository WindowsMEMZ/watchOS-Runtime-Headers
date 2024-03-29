//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBApplicationDataStoreInProcessRepositoryClient_h
#define FBApplicationDataStoreInProcessRepositoryClient_h
@import Foundation;

#include "FBApplicationDataStoreRepository-Protocol.h"
#include "FBSApplicationDataStoreRepositoryClient-Protocol.h"

@class NSCountedSet, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface FBApplicationDataStoreInProcessRepositoryClient : NSObject<FBSApplicationDataStoreRepositoryClient> {
  /* instance variables */
  NSObject<FBApplicationDataStoreRepository> *_dataStore;
  NSCountedSet *_prefetchedKeys;
  NSMutableDictionary *_prefetchedKeyValues;
  NSObject<OS_dispatch_queue> *_prefetchQueue;
  NSObject<OS_dispatch_queue> *_clientCalloutQueue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
  NSHashTable *_observersLock_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithDataStore:(id)store;
- (void)addPrefetchedKeys:(id)keys;
- (void)removePrefetchedKeys:(id)keys withCompletion:(id /* block */)completion;
- (void)_updateNotificationListeners;
- (void)_prefetchQueue_updateNotificationListeners;
- (id)_prefetchQueue_prefetchedKeysForApplication:(id)application;
- (void)_updateCacheIfNecessaryWithObject:(id)object forKey:(id)key forApplication:(id)application;
- (void)_invalidateCacheIfObjectIsNotEqual:(id)equal forKey:(id)key forApplication:(id)application;
- (void)_valueChanged:(id)changed;
- (void)_repositoryInvalidated:(id)invalidated;
- (void)invalidate;
- (void)synchronizeWithCompletion:(id /* block */)completion;
- (id)availableDataStores;
- (id)migrateIdentifier:(id)identifier toIdentifier:(id)identifier;
- (void)setObject:(id)object forKey:(id)key forApplication:(id)application withCompletion:(id /* block */)completion;
- (void)removeObjectForKey:(id)key forApplication:(id)application withCompletion:(id /* block */)completion;
- (void)removeAllObjectsForApplication:(id)application withCompletion:(id /* block */)completion;
- (id)objectForKey:(id)key forApplication:(id)application;
- (void)objectForKey:(id)key forApplication:(id)application withResult:(id /* block */)result;
- (BOOL)prefetchedObjectIfAvailableForKey:(id)key application:(id)application outObject:(id *)object;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)_observers;
@end

#endif /* FBApplicationDataStoreInProcessRepositoryClient_h */
