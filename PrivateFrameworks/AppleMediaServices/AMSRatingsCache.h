//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSRatingsCache_h
#define AMSRatingsCache_h
@import Foundation;

@class NSString;

@interface AMSRatingsCache : NSObject

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSString *storeFront;

/* instance methods */
- (id)initWithMediaType:(unsigned long long)type storeFront:(id)front;
- (id)initWithMediaType:(unsigned long long)type;
- (BOOL)_hasCachedData;
- (void)clearCacheIfNeeded;
- (id)cacheDirectory;
- (id)cachePath;
- (id)cacheTitle;
- (id)getCacheData;
- (BOOL)addCacheData:(id)data;
@end

#endif /* AMSRatingsCache_h */
