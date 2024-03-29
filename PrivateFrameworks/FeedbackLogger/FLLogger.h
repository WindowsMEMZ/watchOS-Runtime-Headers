//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef FLLogger_h
#define FLLogger_h
@import Foundation;

#include "FLLoggingContext-Protocol.h"

@class NSDistributedNotificationCenter, NSMutableDictionary;
@protocol OS_dispatch_source, OS_os_log, OS_os_transaction;

@interface FLLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *dbConnections;
@property (retain, nonatomic) NSMutableDictionary *persistentStores;
@property (retain, nonatomic) NSObject<FLLoggingContext> *context;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long persistentStoreCacheTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer;
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } lock;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *writeTransaction;
@property (nonatomic) unsigned long long writeTransactionTTL;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *transactionTTLTimer;

/* class methods */
+ (id)sharedLogger;
+ (id)readSiriCategoryFrom:(id)from recursive:(BOOL)recursive;
+ (id)categoryForSiriPayload:(id)payload;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)dealloc;
- (void)_setupTransactionTTLTimer;
- (void)_scheduleTransactionTTLTimer;
- (void)_transactionTTLTimerDidFire;
- (void)_cancelTransactionTTLTimer;
- (void)cancelTransactionTTLTimer;
- (id)__dispatched_databaseConnectionWithStorePath:(id)path;
- (id)__dispatched_persistentStoreWithId:(id)id category:(id)category;
- (id)__dispatched_persistentStoreWithId:(id)id category:(id)category storePath:(id)path;
- (void)closeStoreForBundleID:(id)id;
- (void)closeStoreForApplicationFromNotification:(id)notification;
- (void)_cleanPersistantStores;
- (id)_nextTimerFireDate;
- (void)_setupStoreCacheTimer;
- (void)_scheduleStoreCacheTimer;
- (void)_cancelStoreCacheTimer;
- (void)_closeAllStores;
- (void)closeAllStores;
- (void)setValue:(id)value forUploadHeaderNamed:(id)named;
- (id)uploadHeaders;
- (void)scheduleImmediateUpload;
- (void)write:(id)write category:(id)category toStoreWithID:(id)id completion:(id /* block */)completion;
- (id)parsecStoreId;
- (id)parsecCategoryForPayload:(id)payload;
- (id)parsecPersistentStoreForBundleID:(id)id;
- (void)reportParsecFeedback:(id)feedback completion:(id /* block */)completion;
- (id)siriStoreIdForBundleId:(id)id;
- (id)siriWritingStoreForBundleID:(id)id category:(id)category;
- (id)siriReadingStoreForBundleID:(id)id directoryPath:(id)path;
- (id)siriReadingStoreForBundleID:(id)id;
- (void)reportSiriInstrumentationEvent:(id)event forBundleID:(id)id completion:(id /* block */)completion;
- (id)registerSiriInstrumentationObserver:(id)observer observer:(id /* block */)observer;
- (void)removeSiriInstrumentationObserver:(id)observer;
- (id)dataUploadStoreIdForApplicationIdentifier:(id)identifier;
- (void)reportDataUploadEvent:(id)event application:(id)application completion:(id /* block */)completion;
- (void)report:(id)report application:(id)application;
- (void)report:(id)report application:(id)application onComplete:(id /* block */)complete;
@end

#endif /* FLLogger_h */
