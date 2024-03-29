//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaAPICollectionMetadataRequest_h
#define MPMediaAPICollectionMetadataRequest_h
@import Foundation;

#include "MPMediaAPIMetadaRequestProtocol-Protocol.h"

@class ICMusicKitRequestContext, NSProgress, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionMetadataRequest : NSObject<MPMediaAPIMetadaRequestProtocol> {
  /* instance variables */
  ICMusicKitRequestContext *_requestContext;
  NSString *_storeItemID;
  long long _collectionType;
  NSObject<OS_dispatch_queue> *_workQueue;
  NSObject<OS_dispatch_queue> *_callOutQueue;
  NSString *_requestObjectStoreIdentifier;
  BOOL _isCancelled;
}

@property (readonly, nonatomic) BOOL shouldResolveRequestItemsLocally;
@property (readonly, copy, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) long long requestItemCount;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStoreID:(id)id collectionType:(long long)type requestContext:(id)context;
- (void)cancelRequest;
- (void)executeRequestWithBatchProgressHandler:(id /* block */)handler;
- (void)_notifyBatchProgressWithResponseDictionary:(id)dictionary tokenHalfLifeDuration:(double)duration error:(id)error finalResponse:(BOOL)response progressHandler:(id /* block */)handler;
- (void)_fetchContainerItemMetadataWithBatchProgressHandler:(id /* block */)handler;
@end

#endif /* MPMediaAPICollectionMetadataRequest_h */
