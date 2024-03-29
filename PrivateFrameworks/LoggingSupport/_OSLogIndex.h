//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef _OSLogIndex_h
#define _OSLogIndex_h
@import Foundation;

#include "_OSLogCollectionReference.h"
#include "_OSLogEventStoreMetadata.h"

@class NSMutableArray, NSString;

@interface _OSLogIndex : NSObject {
  /* instance variables */
  NSMutableArray *_fileq;
  _OSLogCollectionReference *_lcr;
  NSString *_file;
  struct { struct _os_log_index_timeref { unsigned char x[16] uuid; unsigned long long continuous; } olim_oldestpersist; struct _os_log_index_timeref { unsigned char x[16] uuid; unsigned long long continuous; } olim_oldestspecial; struct _os_log_index_timeref { unsigned char x[16] uuid; unsigned long long continuous; } olim_oldestsignpost; struct _os_log_index_timeref { unsigned char x[16] uuid; unsigned long long continuous; } olim_oldesthighvol; struct _os_log_index_timeref { unsigned char x[16] uuid; unsigned long long continuous; } olim_oldestlive; struct _os_log_index_timeref { unsigned char x[16] uuid; unsigned long long continuous; } olim_end; struct _os_log_index_timeref *olim_oldest; C]"continuous"Q}"ttl"C} x[5{?="timeref"{_os_log_index_timeref="uuid"[16] olim_ttl; } _metadata;
  BOOL _metadataValid;
  _OSLogEventStoreMetadata *_metadata2;
  struct _os_timesync_db_s * _tsdb;
}

@property (readonly, nonatomic) struct _os_timesync_db_s * timesync;
@property (readonly, nonatomic) unsigned long long persistStartWalltime;
@property (readonly, nonatomic) unsigned long long specialStartWalltime;
@property (readonly, nonatomic) unsigned long long endWalltime;

/* instance methods */
- (id)init;
- (id)initWithCollection:(id)collection buildLocalIndex:(BOOL)index;
- (id)initWithCollection:(id)collection timesync:(struct _os_timesync_db_s *)timesync metadata:(id)metadata;
- (void)dealloc;
- (BOOL)_readArchiveMetadata:(id *)metadata;
- (BOOL)_openTimesyncDatabase;
- (BOOL)addReferenceToIndex:(id)index error:(id *)error;
- (BOOL)_addFileToIndex:(const char *)index error:(id *)error;
- (void)_foreachIndexFile:(id /* block */)file;
- (void)insertChunkStore:(id)store;
- (void)insertIndexFile:(id)file;
- (BOOL)_buildFileIndex;
- (BOOL)_buildSingleFileIndex:(id *)index;
- (void)enumerateEntriesFrom:(unsigned long long)from to:(unsigned long long)to options:(unsigned int)options usingBlock:(id /* block */)block;
- (void)enumerateEntriesFromLastBootWithOptions:(unsigned int)options usingBlock:(id /* block */)block;
- (void)_enumerateEntriesInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s * x0; unsigned long long x1; unsigned long long x2; C] x3[0[16] } *)range options:(unsigned int)options usingBlock:(id /* block */)block;
- (void)enumerateEntriesInRange:(struct os_timesync_range_s { struct os_trace_uuid_map_s * x0; unsigned long long x1; unsigned long long x2; C] x3[0[16] } *)range options:(unsigned int)options usingCatalogFilter:(id)filter usingBlock:(id /* block */)block;
- (void)enumerateEntriesUsingBlock:(id /* block */)block;
- (void)enumerateFilesUsingBlock:(id /* block */)block;
@end

#endif /* _OSLogIndex_h */
