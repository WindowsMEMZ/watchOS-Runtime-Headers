//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAssetResourceManager_h
#define PHAssetResourceManager_h
@import Foundation;

#include "PHAssetResourceRequestDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface PHAssetResourceManager : NSObject<PHAssetResourceRequestDelegate> {
  /* instance variables */
  atomic int _nextRequestID;
  unsigned long long _managerID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestsLock;
  NSMutableDictionary *_requestsLock_requestsByID;
  NSMutableDictionary *_requestsLock_supplementaryContextsByID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultManager;

/* instance methods */
- (id)init;
- (int)requestDataForAssetResource:(id)resource options:(id)options dataReceivedHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)writeDataForAssetResource:(id)resource toFile:(id)file options:(id)options completionHandler:(id /* block */)handler;
- (int)requestWriteDataForAssetResource:(id)resource toFile:(id)file options:(id)options completionHandler:(id /* block */)handler;
- (void)cancelDataRequest:(int)request;
- (int)requestFileURLForAssetResource:(id)resource options:(id)options urlReceivedHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (id)infoForRequest:(int)request;
- (id)consolidateAssets:(id)assets completionHandler:(id /* block */)handler;
- (id)reconnectAssets:(id)assets urlResolvingHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)_autoResolveReferencedResources:(id)resources folderURL:(id)url resourceClient:(id)client;
- (int)_nextRequestID;
- (int)_requestForAssetResource:(id)resource loadURLOnly:(BOOL)urlonly options:(id)options urlReceivedHandler:(id /* block */)handler dataReceivedHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)assetResourceRequest:(id)request didFinishWithError:(id)error;
- (void)assetResourceRequestDidRequestRetryWithContentEditingInputLoaded:(id)loaded;
@end

#endif /* PHAssetResourceManager_h */
