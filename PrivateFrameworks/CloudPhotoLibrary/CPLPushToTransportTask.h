//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLPushToTransportTask_h
#define CPLPushToTransportTask_h
@import Foundation;

#include "CPLEngineMultiscopeSyncTask.h"

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {
  /* instance variables */
  BOOL _deferredCancel;
}

@property (nonatomic) BOOL highPriority;

/* class methods */
+ (BOOL)dontAutoRetry;
+ (void)setDontAutoRetry:(BOOL)retry;

/* instance methods */
- (id)enumerateScopesForTaskInTransaction:(id)transaction;
- (id)scopeFilterInTransaction:(id)transaction;
- (id)newScopedTaskWithScope:(id)scope session:(id)session transportScope:(id)scope clientCacheIdentifier:(id)identifier;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (void)cancel:(BOOL)cancel;
- (void)task:(id)task didFinishWithError:(id)error;
- (void)taskDidFinishWithError:(id)error;
- (id)taskIdentifier;
@end

#endif /* CPLPushToTransportTask_h */
