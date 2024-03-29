//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapDataSubscriptionResourcesDownloader_h
#define GEOMapDataSubscriptionResourcesDownloader_h
@import Foundation;

#include "GEOMapDataSubscription.h"
#include "GEOMapDataSubscriptionDataDownloader-Protocol.h"
#include "GEOMapDataSubscriptionDataDownloaderDelegate-Protocol.h"
#include "GEOResourceManifestManager.h"

@class NSArray, NSError, NSProgress, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_os_log;

@interface GEOMapDataSubscriptionResourcesDownloader : NSObject<GEOMapDataSubscriptionDataDownloader> {
  /* instance variables */
  GEOResourceManifestManager *_manifestManager;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  NSObject<OS_os_log> *_log;
  NSString *_logPrefix;
  NSObject<OS_dispatch_queue> *_workQueue;
  struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _prepared;
  NSObject<OS_dispatch_group> *_preparationGroup;
  NSError *_preparationError;
  struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _finished;
  BOOL _paused;
  BOOL _canceled;
  BOOL _calculatingBatches;
  NSArray *_resourcesToFetch;
}

@property (readonly, nonatomic) GEOMapDataSubscription *subscription;
@property (readonly, weak, nonatomic) NSObject<GEOMapDataSubscriptionDataDownloaderDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSProgress *progress;

/* class methods */
+ (id)loggingDescription;

/* instance methods */
- (id)initWithSubscription:(id)subscription manifestManager:(id)manager requestOptions:(unsigned long long)options delegate:(id)delegate delegateQueue:(id)queue log:(id)log logPrefix:(id)prefix;
- (void)resume;
- (void)pause;
- (void)cancel;
@end

#endif /* GEOMapDataSubscriptionResourcesDownloader_h */
