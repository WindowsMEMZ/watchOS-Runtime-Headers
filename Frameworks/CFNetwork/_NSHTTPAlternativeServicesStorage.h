//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef _NSHTTPAlternativeServicesStorage_h
#define _NSHTTPAlternativeServicesStorage_h
@import Foundation;

@class NSMutableDictionary, NSMutableSet, NSURL;
@protocol OS_dispatch_queue;

@interface _NSHTTPAlternativeServicesStorage : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_workQueue;
  BOOL _garbageCollectionDispatched;
  BOOL _dbInitialized;
  BOOL _isMemoryStore;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
  NSMutableSet *memoryEntries;
  NSMutableSet *clearEntries;
  NSMutableDictionary *speculativeEntries;
  struct sqlite3 * dbConnection;
  struct sqlite3_stmt * selectAllEntriesStmt;
  struct sqlite3_stmt * selectAllValidEntriesStmt;
  struct sqlite3_stmt * selectEntriesStmt;
  struct sqlite3_stmt * selectEntriesWithRegistrableDomainStmt;
  struct sqlite3_stmt * insertEntriesStmt;
  struct sqlite3_stmt * deleteWithTimeStmt;
  struct sqlite3_stmt * deleteWithHostAndPortStmt;
  struct sqlite3_stmt * deleteWithRegistrableDomainStmt;
  struct sqlite3_stmt * deleteExpiredEntriesStmt;
  struct sqlite3_stmt * trimDbStmt;
}

@property (readonly, nonatomic) NSURL *path;
@property BOOL canSuspendLocked;

/* class methods */
+ (id)sharedPersistentStore;

/* instance methods */
- (id)init;
- (id)initPersistentStoreWithURL:(id)url;
- (id)initInMemoryStore;
- (void)dealloc;
- (id)HTTPServiceEntriesWithFilter:(id)filter;
- (id)HTTPServiceEntriesWithRegistrableDomain:(id)domain;
- (id)entries;
- (void)storeHTTPServiceEntry:(id)entry;
- (void)removeHTTPAlternativeServiceEntriesWithHost:(id)host port:(long long)port;
- (void)removeHTTPAlternativeServiceEntriesWithRegistrableDomain:(id)domain;
- (void)removeHTTPAlternativeServiceEntriesCreatedAfterDate:(id)date;
@end

#endif /* _NSHTTPAlternativeServicesStorage_h */
