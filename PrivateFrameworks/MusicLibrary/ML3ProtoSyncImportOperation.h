//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3ProtoSyncImportOperation_h
#define ML3ProtoSyncImportOperation_h
@import Foundation;

#include "ML3ImportOperation.h"
#include "ML3DatabaseConnection.h"

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ML3ProtoSyncImportOperation : ML3ImportOperation {
  /* instance variables */
  unsigned int _totalSyncPackageCount;
  unsigned int _syncPackageNum;
  BOOL _syncSessionStarted;
  int _syncType;
  ML3DatabaseConnection *_connection;
  BOOL _isServerImport;
  long long _readSourceState;
  BOOL _isReadSourceCancelled;
  BOOL _importFinished;
  BOOL _pairedDeviceCanProcessStandAloneCollections;
  NSMutableSet *_syncIdsToUnlink;
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSObject<OS_dispatch_source> *_readSource;
}

/* instance methods */
- (unsigned long long)importSource;
- (id)initWithDatabaseImport:(id)import;
- (void)main;
- (void)cancel;
- (BOOL)_performImportWithTransaction:(id)transaction;
- (BOOL)_processSyncPackage:(id)package withImportSession:(void *)session;
- (BOOL)_processSyncHeader:(id)header;
- (BOOL)_processSyncError:(id)error;
- (BOOL)_processSyncOperation:(id)operation withImportSession:(void *)session;
- (BOOL)_processMediaItemOperation:(id)operation withImportSession:(void *)session;
- (BOOL)_processPlaylistOperation:(id)operation withImportSession:(void *)session;
- (BOOL)_processAlbumArtistOperation:(id)operation withImportSession:(void *)session;
- (BOOL)_processAlbumOperation:(id)operation withImportSession:(void *)session;
- (void)_unlinkUnavailableMediaItems;
@end

#endif /* ML3ProtoSyncImportOperation_h */
