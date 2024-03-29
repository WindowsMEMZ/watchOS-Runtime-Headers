//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef OSLogEventSource_h
#define OSLogEventSource_h
@import Foundation;

#include "_OSLogCollectionReference.h"
#include "_OSLogEventStoreMetadata.h"
#include "_OSLogEventStoreTimeRef.h"

@class NSDate, NSMutableArray, NSUUID;

@interface OSLogEventSource : NSObject {
  /* instance variables */
  NSMutableArray *_fileRefs;
}

@property (retain, nonatomic) NSMutableArray *_fileRefs;
@property (readonly, nonatomic) struct _os_timesync_db_s * tsdb;
@property (readonly, nonatomic) _OSLogCollectionReference *lcr;
@property (readonly, nonatomic) _OSLogEventStoreMetadata *lesm;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestTimeRef;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *newestTimeRef;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSDate *oldestDate;
@property (readonly, nonatomic) NSDate *newestDate;

/* instance methods */
- (id)initWithCollection:(id)collection metadata:(id)metadata timesync:(struct _os_timesync_db_s *)timesync;
- (void)dealloc;
- (void)_insertIndexFile:(id)file;
- (void)_enumerateIndexFiles:(id /* block */)files;
@end

#endif /* OSLogEventSource_h */
