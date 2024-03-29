//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLEngineMultiscopeSyncTask_h
#define CPLEngineMultiscopeSyncTask_h
@import Foundation;

#include "CPLEngineSyncTask.h"
#include "CPLEngineScopeStorage.h"
#include "CPLEngineScopedTask.h"
#include "CPLEngineSyncTaskDelegate-Protocol.h"
#include "CPLScopeFilter.h"

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CPLEngineMultiscopeSyncTask : CPLEngineSyncTask<CPLEngineSyncTaskDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_currentTaskQueue;
  CPLEngineScopedTask *_currentTask;
  NSMutableArray *_coveredScopes;
  NSMutableArray *_excludedScopes;
  NSMutableDictionary *_transportScopes;
  NSString *_clientCacheIdentifier;
  CPLScopeFilter *_baseScopeFilter;
  CPLScopeFilter *_additionalScopeFilter;
}

@property (readonly, nonatomic) CPLEngineScopeStorage *scopes;
@property (readonly, nonatomic) BOOL shouldSkipScopesWithMissingTransportScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEngineLibrary:(id)library session:(id)session;
- (id)_currentTask;
- (void)_setCurrentTask:(id)task;
- (id)_currentScope;
- (void)dispatchAsyncWithCurrentSubtask:(id /* block */)subtask;
- (BOOL)shouldStartTaskInTransaction:(id)transaction;
- (id)newScopedTaskWithScope:(id)scope session:(id)session transportScope:(id)scope clientCacheIdentifier:(id)identifier;
- (id)enumerateScopesForTaskInTransaction:(id)transaction;
- (id)scopeFilterInTransaction:(id)transaction;
- (BOOL)shouldProcessScope:(id)scope inTransaction:(id)transaction;
- (BOOL)shouldContinueAfterError:(id)error fromTask:(id)task;
- (void)_launchTaskForNextScope;
- (void)launch;
- (void)setForceSync:(BOOL)sync;
- (void)setForeground:(BOOL)foreground;
- (void)cancel;
- (void)task:(id)task didFinishWithError:(id)error;
- (void)task:(id)task didProgress:(float)progress userInfo:(id)info;
- (id)phaseDescriptionLastChangeDate:(id *)date;
- (id)phaseDescription;
@end

#endif /* CPLEngineMultiscopeSyncTask_h */
