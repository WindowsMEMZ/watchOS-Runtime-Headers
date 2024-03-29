//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPMutableContactDiskCache_h
#define PPMutableContactDiskCache_h
@import Foundation;

#include "PPContactDiskCache.h"

@interface PPMutableContactDiskCache : PPContactDiskCache
/* instance methods */
- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)records error:(id *)error;
- (BOOL)addNameRecords:(id)records error:(id *)error;
- (BOOL)deleteNameRecordCache;
- (BOOL)_writeCache:(id)cache path:(id)path error:(id *)error;
- (id)_createNewCacheObjectWithCreatedAt:(long long)at;
- (long long)lastCreatedAt;
- (void)setLastCreatedAt:(long long)at;
- (BOOL)deleteCacheIfTooOld;
- (id)_recordSetBucketsForNameRecords:(id)records;
@end

#endif /* PPMutableContactDiskCache_h */
