//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSPublisher_Protocol_h
#define MSPublisher_Protocol_h
@import Foundation;

#include "MSCupidStateMachine.h"
#include "MSMediaStreamDaemon.h"
#include "MSObjectQueue.h"
#include "MSPublishStorageProtocol-Protocol.h"
#include "MSPublishStorageProtocolDelegate-Protocol.h"
#include "MSPublishStreamsProtocol.h"
#include "MSPublishStreamsProtocolDelegate-Protocol.h"
#include "MSPublisher-Protocol.h"

@class BOOL *, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol MSPublisherDelegate;

@protocol MSPublisher <NSObject>

@property (nonatomic) NSObject<MSPublisherDelegate> *delegate;
@property (nonatomic) int publishBatchSize;

/* instance methods */
- (void)submitAssetCollectionsForPublication:(id)publication skipAssetCollections:(id)collections;
- (void)abort;
- (void)stop;
- (void)publish;
- (void)reenqueueQuarantinedAssetCollections;
@end

#endif /* MSPublisher_Protocol_h */
