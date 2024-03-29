//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDMessageHistoryCKChatSyncTask_h
#define IMDMessageHistoryCKChatSyncTask_h
@import Foundation;

#include "IMDCKSyncController.h"
#include "IMDMessageHistorySyncTask-Protocol.h"

@class NSString;

@interface IMDMessageHistoryCKChatSyncTask : NSObject<IMDMessageHistorySyncTask> {
  /* instance variables */
  IMDCKSyncController *_ckSyncController;
}

@property (copy, nonatomic) id /* block */ syncTaskCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCKSyncController:(id)controller;
- (void)dealloc;
- (void)startSyncTask:(id /* block */)task;
- (unsigned long long)syncTaskType;
- (void)_startICloudSyncWithActivity:(id)activity;
@end

#endif /* IMDMessageHistoryCKChatSyncTask_h */
