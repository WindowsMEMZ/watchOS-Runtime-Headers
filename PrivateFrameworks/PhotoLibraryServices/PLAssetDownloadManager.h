//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetDownloadManager_h
#define PLAssetDownloadManager_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PLAssetDownloadManagerDelegate;

@interface PLAssetDownloadManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableDictionary *_requestsById;
  NSMutableDictionary *_progressById;
  atomic int _currentRequestId;
}

@property (weak, nonatomic) NSObject<PLAssetDownloadManagerDelegate> *delegate;

/* class methods */
+ (id)defaultManager;

/* instance methods */
- (void)_onQueueAsync:(id /* block */)async;
- (id)init;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:(id)uuid library:(id)library completionHandler:(id /* block */)handler;
- (void)cancelRequest:(int)request;
@end

#endif /* PLAssetDownloadManager_h */
