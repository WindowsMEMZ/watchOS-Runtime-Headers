//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceSnapshotCache_h
#define NTKFaceSnapshotCache_h
@import Foundation;

#include "NTKFaceSnapshotCacheRequest.h"

@class NSMapTable, NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface NTKFaceSnapshotCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *snapshots;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotQueue;
@property (readonly, nonatomic) NSMutableDictionary *requestsBySnapshotKey;
@property (readonly, nonatomic) NSMapTable *callCountsByFace;
@property (retain, nonatomic) NTKFaceSnapshotCacheRequest *servicingRequest;
@property (retain, nonatomic) NSMutableOrderedSet *highPriorityRequests;
@property (retain, nonatomic) NSMutableOrderedSet *lowPriorityRequests;

/* class methods */
+ (id)snapshotCache;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)resetCache;
- (id)cachedSnapshotOfFace:(id)face;
- (void)_snapshotProcessInterrupted:(id)interrupted;
- (void)_invokeCallbacksMatchingRequest:(id)request withSnapshot:(id)snapshot;
- (void)cancelSnapshotRequest:(id)request;
- (void)fetchSnapshotWithRequest:(id)request;
- (void)_serviceRequestsIfIdle;
- (void)_attemptSnapshotForRequest:(id)request;
@end

#endif /* NTKFaceSnapshotCache_h */
