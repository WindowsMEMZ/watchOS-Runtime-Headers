//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncManagerTask_h
#define HDCloudSyncManagerTask_h
@import Foundation;

#include "HDCloudSyncManagerTask.h"

@class NSArray, NSProgress;

@interface HDCloudSyncManagerTask : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  id /* block */ _completion;
}

@property (readonly) long long status;
@property long long priority;
@property (readonly) NSProgress *progress;
@property (readonly, weak) HDCloudSyncManagerTask *originalTask;
@property (readonly, copy) NSArray *mirroringTasks;

/* instance methods */
- (id)init;
- (BOOL)combineWithTask:(id)task;
- (void)startWithCompletion:(id /* block */)completion;
- (void)cancel;
- (void)main;
- (void)finish;
- (void)mirrorTask:(id)task;
@end

#endif /* HDCloudSyncManagerTask_h */
