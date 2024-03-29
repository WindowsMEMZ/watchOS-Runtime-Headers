//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSURLStorageURLCacheDB_h
#define NSURLStorageURLCacheDB_h
@import Foundation;

@class NSMutableArray, NSString;

@interface NSURLStorageURLCacheDB : NSObject {
  /* instance variables */
  struct sqlite3 * _dbReadConnection;
  struct sqlite3 * _dbWriteConnection;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dbReadConnectionLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dbWriteConnectionLock;
  struct sqlite3_stmt * _sqlUpdateReceiverDataStmt;
  struct sqlite3_stmt * _sqlInsertStmtResponse;
  struct sqlite3_stmt * _sqlInsertStmtBlobData;
  struct sqlite3_stmt * _sqlInsertStmtReceiverData;
  struct sqlite3_stmt * _sqlUpdateResponseStmt;
  struct sqlite3_stmt * _sqlUpdateBlobDataStmt;
  struct sqlite3_stmt * _sqlSelectStmt;
  struct sqlite3_stmt * _sqlSelectEntry_idAndRecevierDataForKeyStmt;
  struct sqlite3_stmt * _sqlSelectIsDataOnFSForEntry_IDStmt;
  struct sqlite3_stmt * _sqlSelectFileSystemFileForDeletionStmt;
  struct sqlite3_stmt * _sqlDeleteStmtResponse;
  struct sqlite3_stmt * _sqlDeleteStmtBlobData;
  struct sqlite3_stmt * _sqlDeleteStmtReceiverData;
  NSMutableArray *_entryIDsToDelete;
  unsigned long long _writeCount;
  BOOL _updatingSchema;
  BOOL _isDBOpen;
  NSString *_dbPathDirectory;
  NSString *_dbPathFile;
  long long _maxDBSize;
  unsigned long long _currentFSBackedUsage;
  unsigned long long _currentSQLiteDBUsage;
  unsigned long long _currentTotalPersistentCacheUsage;
  long long _minSizeForFileSystemBackedCacheItem;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* NSURLStorageURLCacheDB_h */
