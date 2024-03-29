//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 976.40.4.0.0
//
#ifndef UserRegistryDB_h
#define UserRegistryDB_h
@import Foundation;

@class NSString;
@protocol OS_os_log;

@interface UserRegistryDB : NSObject

@property struct sqlite3 * sqliteHandle;
@property struct sqlite3_stmt * recordIDStatment;
@property struct sqlite3_stmt * replaceStatment;
@property struct sqlite3_stmt * deleteStatment;
@property struct sqlite3_stmt * insertWatch;
@property struct sqlite3_stmt * updateWatch;
@property struct sqlite3_stmt * insertMirrorKey;
@property struct sqlite3_stmt * updateMirrorKey;
@property struct sqlite3_stmt * markMirrorKey;
@property struct sqlite3_stmt * deleteMirrorKeys;
@property struct sqlite3_stmt * resetCurrentMirrorKey;
@property struct sqlite3_stmt * insertEscrowKey;
@property struct sqlite3_stmt * updateEscrowKey;
@property struct sqlite3_stmt * deleteEscrowKey;
@property struct sqlite3_stmt * queryEscrowKey;
@property struct sqlite3_stmt * queryEscrowKeysAll;
@property struct sqlite3_stmt * insertWatchKey;
@property struct sqlite3_stmt * queryMissingKeys;
@property struct sqlite3_stmt * queryWatches;
@property (retain) NSObject<OS_os_log> *oslog;
@property (retain) NSString *dsid;

/* instance methods */
- (id)initWithDSID:(id)dsid;
- (void)dealloc;
- (BOOL)prepare:(const char *)prepare statement:(struct sqlite3_stmt * *)statement;
- (BOOL)setupDatabase;
- (BOOL)deleteRecordAll;
- (BOOL)beginExclusiveTransaction;
- (BOOL)endTransaction:(BOOL)transaction;
- (id)getData:(id)data type:(int)type;
- (BOOL)replaceRecord:(id)record type:(int)type data:(id)data publicKey:(id)key;
- (id)getConfigData:(id)data;
- (BOOL)replaceConfigRecord:(id)record data:(id)data;
- (id)getRecordIDData:(id)iddata;
- (BOOL)replaceRecordID:(id)id data:(id)data publicKey:(id)key;
- (BOOL)deleteRecordID:(id)id;
- (BOOL)setMirrorKey:(id)key service:(int)service type:(int)type publicIdentity:(id)identity;
- (BOOL)markMirrorKey:(int)key type:(int)type;
- (BOOL)updateMirrorKey:(id)key service:(int)service type:(int)type newType:(int)type current:(BOOL)current;
- (BOOL)deleteMirrorKeys:(int)keys;
- (BOOL)setEscrowKey:(id)key escrowBlob:(id)blob;
- (BOOL)updateEscrowKey:(id)key escrowBlob:(id)blob;
- (BOOL)deleteEscrowKey:(id)key;
- (id)queryEscrowKey:(id)key;
- (id)queryEscrowKeys;
- (BOOL)updateSyncDevice:(id)device seen:(id)seen version:(id)version;
- (BOOL)syncedKeyToDevice:(id)device type:(int)type device:(id)device;
- (id)syncDevices;
- (id)missingKeysFromDevice:(id)device type:(int)type;
@end

#endif /* UserRegistryDB_h */
