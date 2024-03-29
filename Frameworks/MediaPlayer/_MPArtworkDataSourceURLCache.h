//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPArtworkDataSourceURLCache_h
#define _MPArtworkDataSourceURLCache_h
@import Foundation;

#include "NSURLCache.h"

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface _MPArtworkDataSourceURLCache : NSURLCache {
  /* instance variables */
  NSMapTable *_requestSizeMap;
  NSObject<OS_dispatch_queue> *_accessQueue;
}

/* instance methods */
- (id)initWithMemoryCapacity:(unsigned long long)capacity diskCapacity:(unsigned long long)capacity diskPath:(id)path;
- (void)storeCachedResponse:(id)response forRequest:(id)request;
- (void)setRepresentationSize:(struct CGSize { double x0; double x1; })size forRequest:(id)request;
@end

#endif /* _MPArtworkDataSourceURLCache_h */
