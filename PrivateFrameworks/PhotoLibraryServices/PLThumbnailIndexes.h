//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLThumbnailIndexes_h
#define PLThumbnailIndexes_h
@import Foundation;

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PLThumbnailIndexes : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_isolationQueue;
  NSMutableIndexSet *_unusedIndexes;
  long long _usedMax;
  unsigned long long _fetchTimestamp;
}

/* class methods */
+ (void)getAvailableThumbnailIndexesInLibrary:(id)library withCount:(unsigned long long)count handler:(id /* block */)handler;
+ (void)getAvailableThumbnailIndexInLibrary:(id)library withHandler:(id /* block */)handler;
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)library;
+ (void)recycleThumbnailIndexes:(id)indexes inLibrary:(id)library;
+ (void)recycleThumbnailIndexes:(id)indexes inLibrary:(id)library timestamp:(unsigned long long)timestamp;
+ (id)occupiedThumbnailIndexesWithLibrary:(id)library fetchTimestampToUpdate:(unsigned long long *)update;
+ (id)occupiedThumbnailIndexesWithLibrary:(id)library fetchTimestampToUpdate:(unsigned long long *)update outFetchCount:(unsigned long long *)count;

/* instance methods */
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)count inLibrary:(id)library;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)count inLibrary:(id)library handler:(id /* block */)handler;
- (void)getAvailableThumbnailIndexesFromLibrary:(id)library;
- (void)recycleThumbnailIndexes:(id)indexes timestamp:(unsigned long long)timestamp;
- (id)init;
@end

#endif /* PLThumbnailIndexes_h */
