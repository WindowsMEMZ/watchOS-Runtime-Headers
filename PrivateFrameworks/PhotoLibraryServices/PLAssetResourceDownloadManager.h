//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetResourceDownloadManager_h
#define PLAssetResourceDownloadManager_h
@import Foundation;

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadManager : NSObject {
  /* instance variables */
  NSOperationQueue *_operationQueue;
  NSObject<OS_dispatch_queue> *_requestIsolationQueue;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableDictionary *_requestById;
  atomic int _currentRequestId;
}

/* class methods */
+ (id)defaultManager;

/* instance methods */
- (id)init;
- (id)_requestWithID:(int)id;
- (void)_setRequest:(id)request forRequestID:(int)id;
- (int)requestCloudResourceType:(unsigned long long)type assetObjectID:(id)id library:(id)library progressHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)cancelRequest:(int)request;
@end

#endif /* PLAssetResourceDownloadManager_h */
