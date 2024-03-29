//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLBackgroundDownloadsTask_h
#define CPLBackgroundDownloadsTask_h
@import Foundation;

#include "CPLEngineSyncTask.h"

@class NSArray, NSError, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_lock;
  NSMutableArray *_transportTasks;
  BOOL _shouldStop;
  NSError *_badError;
  NSError *_stopError;
  BOOL _prioritizeNonDerivatives;
  BOOL _hasResetQueue;
  unsigned long long _successfullyDownloadedResourcesCount;
  unsigned long long _failedDownloadedResourcesCount;
  unsigned long long _total;
  unsigned long long _activeTransferTaskCount;
  unsigned long long _transportTaskCount;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _taskCountLock;
  NSArray *_intentsToDownload;
  unsigned long long _currentIntentIndex;
}

/* instance methods */
- (id)initWithEngineLibrary:(id)library session:(id)session;
- (void)_finishTaskLocked;
- (void)_getResourceTypesToDownload:(const unsigned long long * *)download;
- (void)_launchNecessaryDownloadTasksWithTransaction:(id)transaction;
- (BOOL)_isErrorCountingForARetry:(id)aretry;
- (void)_completeBackgroundDownloadForResource:(id)resource error:(id)error withTransaction:(id)transaction;
- (void)_enqueueTasksLocked;
- (void)_updateActiveDownloadTaskCount;
- (unsigned long long)_activeTransferTaskCount;
- (unsigned long long)_transportTaskCount;
- (void)_downloadTask:(id)task didFinishWithErrorLocked:(id)locked;
- (void)_transportTaskDidFinish:(id)finish;
- (void)launch;
- (void)taskDidFinishWithError:(id)error;
- (void)cancel;
- (id)taskIdentifier;
- (id)description;
@end

#endif /* CPLBackgroundDownloadsTask_h */
