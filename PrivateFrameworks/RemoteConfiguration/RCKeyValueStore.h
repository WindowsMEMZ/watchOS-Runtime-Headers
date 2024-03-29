//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.0.0.0.0
//
#ifndef RCKeyValueStore_h
#define RCKeyValueStore_h
@import Foundation;

#include "RCMutexLock.h"
#include "RCOperationThrottler-Protocol.h"
#include "RCOperationThrottlerDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;
@protocol RCKeyValueStoreMigrating;

@interface RCKeyValueStore : NSObject<RCOperationThrottlerDelegate>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long storeSize;
@property (retain, nonatomic) NSMutableDictionary *objectsByKey;
@property (nonatomic) BOOL needSave;
@property (retain, nonatomic) NSString *storeDirectory;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic) unsigned long long optionsMask;
@property (retain, nonatomic) NSObject<RCKeyValueStoreMigrating> *migrator;
@property (retain, nonatomic) RCMutexLock *writeLock;
@property (retain, nonatomic) NSObject<RCOperationThrottler> *saveThrottler;
@property (nonatomic) BOOL shouldExportJSONSidecar;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)persistenceQueue;
+ (BOOL)shouldDumpToJSON;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name directory:(id)directory version:(unsigned long long)version options:(unsigned long long)options migrator:(id)migrator;
- (id)initWithName:(id)name directory:(id)directory version:(unsigned long long)version options:(unsigned long long)options;
- (BOOL)containsObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (void)setObjects:(id)objects forKeys:(id)keys;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)removeObjectForKey:(id)key;
- (void)removeObjectsForKeys:(id)keys;
- (void)removeAllObjects;
- (void)updateObjectsForKeys:(id)keys withBlock:(id /* block */)block;
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;
- (id)objectForKey:(id)key;
- (id)objectsForKeys:(id)keys;
- (void)setBoolValue:(BOOL)value forKey:(id)key;
- (BOOL)boolValueForKey:(id)key;
- (id)allKeys;
- (void)addAllEntriesToDictionary:(id)dictionary;
- (void)saveWithCompletionHandler:(id /* block */)handler;
- (void)operationThrottler:(id)throttler performAsyncOperationWithCompletion:(id /* block */)completion;
- (id)_dictionary;
- (id)_loadFromDisk;
- (void)_saveAsyncWithCompletionHandler:(id /* block */)handler;
- (void)_logCacheStatus;
- (void)_queueSave;
- (id)_initializeStoreDirectoryWithName:(id)name;
- (void)_clearStore;
- (BOOL)_shouldMigrateOnUpgrade;
- (BOOL)_isBackupEnabled;
- (BOOL)_persistOnlyInMemoryEnabled;
- (void)setOptionBackupEnabled:(BOOL)enabled;
@end

#endif /* RCKeyValueStore_h */
