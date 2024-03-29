//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIImageLoader_h
#define AMSUIImageLoader_h
@import Foundation;

#include "AMSUIAssetQueue.h"

@class NSCache, NSURLSession;
@protocol OS_dispatch_queue;

@interface AMSUIImageLoader : NSObject

@property (retain, nonatomic) NSCache *imageCache;
@property (retain, nonatomic) AMSUIAssetQueue *fetchQueue;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

/* class methods */
+ (id)defaultLoader;

/* instance methods */
- (id)init;
- (id)fetchImageWithURL:(id)url;
- (id)fetchImageWithURL:(id)url searchBundles:(id)bundles;
- (id)_fetchImageWithURL:(id)url searchBundles:(id)bundles atPriority:(long long)priority;
- (id)_performLowLatencyOperation:(id)operation;
- (BOOL)_isURLBundleResource:(id)resource;
- (BOOL)_isURLEngagementContent:(id)content;
- (id)_makeSystemImageFetchOperationForSystemURL:(id)url error:(id *)error;
- (id)_makeOperationForImageWithURL:(id)url searchBundles:(id)bundles error:(id *)error;
- (void)_cacheImage:(id)image withURL:(id)url;
- (id)_fetchImageFromCacheWithURL:(id)url;
- (BOOL)_isURLSystemImage:(id)image;
@end

#endif /* AMSUIImageLoader_h */
