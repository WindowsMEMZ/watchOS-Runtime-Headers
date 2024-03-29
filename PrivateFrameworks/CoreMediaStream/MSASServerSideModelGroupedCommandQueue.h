//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASServerSideModelGroupedCommandQueue_h
#define MSASServerSideModelGroupedCommandQueue_h
@import Foundation;

#include "MSASGroupedQueue.h"
#include "MSASEnqueuedCommand.h"

@interface MSASServerSideModelGroupedCommandQueue : MSASGroupedQueue

@property (retain, nonatomic) MSASEnqueuedCommand *lastEnqueuedCommand;

/* class methods */
+ (id /* block */)calloutBlockForCommand:(id)command;

/* instance methods */
- (BOOL)hasEnqueuedItems;
- (void)flushQueue;
- (void)workQueueFlushQueue;
- (void)workQueueEnqueueCommand:(id)command variantParam:(id)param invariantParam:(id)param;
- (void)MSASModel:(id)msasmodel didFindNewAlbum:(id)album info:(id)info;
- (void)MSASModel:(id)msasmodel didFindDeletedAlbum:(id)album info:(id)info;
- (void)MSASModel:(id)msasmodel didFindNewAssetCollection:(id)collection inAlbum:(id)album info:(id)info;
- (void)MSASModel:(id)msasmodel didFindDeletedAssetCollection:(id)collection inAlbum:(id)album info:(id)info;
- (void)MSASModel:(id)msasmodel didFindNewAccessControl:(id)control inAlbum:(id)album info:(id)info;
- (void)MSASModel:(id)msasmodel didFindDeletedAccessControl:(id)control inAlbum:(id)album info:(id)info;
- (void)MSASModel:(id)msasmodel didFindNewInvitation:(id)invitation info:(id)info;
- (void)MSASModel:(id)msasmodel didFindDeletedInvitation:(id)invitation info:(id)info;
- (void)MSASModel:(id)msasmodel didFindNewComment:(id)comment forAssetCollection:(id)collection inAlbum:(id)album info:(id)info;
- (void)MSASModel:(id)msasmodel didDeleteComment:(id)comment forAssetCollection:(id)collection inAlbum:(id)album info:(id)info;
@end

#endif /* MSASServerSideModelGroupedCommandQueue_h */
