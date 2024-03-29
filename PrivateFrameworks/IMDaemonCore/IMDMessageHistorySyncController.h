//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDMessageHistorySyncController_h
#define IMDMessageHistorySyncController_h
@import Foundation;

#include "IMDMessageHistorySyncTask-Protocol.h"
#include "IMDMessageHistorySyncTaskFactory-Protocol.h"

@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) BOOL replayControllerNeedsSync;
@property (nonatomic) BOOL ckChatSyncControllerNeedsSync;
@property (nonatomic) BOOL idsTransportLogNeedsSync;
@property (retain, nonatomic) NSObject<IMDMessageHistorySyncTask> *currentlyExecutingSyncTask;
@property (retain, nonatomic) NSObject<IMDMessageHistorySyncTaskFactory> *syncTaskFactory;

/* instance methods */
- (id)initWithMessageHistorySyncTaskFactory:(id)factory;
- (void)dealloc;
- (void)replayControllerWantsToSync;
- (void)IDSTransportLogWantsToSync;
- (void)ckChatSyncControllerWantsToSync;
- (void)_evaluateStateAndActIfNeeded;
- (void)_scheduleNextEvaluation;
@end

#endif /* IMDMessageHistorySyncController_h */
