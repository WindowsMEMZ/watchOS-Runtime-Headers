//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDiskCache_h
#define HFDiskCache_h
@import Foundation;

#include "HFCache.h"
#include "HFCacheDelegate-Protocol.h"

@class NSString, NSURL;
@protocol HFDiskCacheDelegate;

@interface HFDiskCache : HFCache<HFCacheDelegate>

@property (readonly, nonatomic) NSURL *directoryURL;
@property (readonly, weak, nonatomic) NSObject<HFDiskCacheDelegate> *diskCacheDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCacheDirectoryURL:(id)url diskCacheDelegate:(id)delegate;
- (void)createCacheEntriesFromFilesOnDisk;
- (void)_createCacheEntriesFromFilesOnDisk;
- (void)cache:(id)cache didEvictObject:(id)object forKey:(id)key cost:(unsigned long long)cost;
@end

#endif /* HFDiskCache_h */
