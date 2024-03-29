//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLPullFromTransportTask_h
#define CPLPullFromTransportTask_h
@import Foundation;

#include "CPLEngineMultiscopeSyncTask.h"

@interface CPLPullFromTransportTask : CPLEngineMultiscopeSyncTask
/* instance methods */
- (id)enumerateScopesForTaskInTransaction:(id)transaction;
- (id)scopeFilterInTransaction:(id)transaction;
- (id)newScopedTaskWithScope:(id)scope session:(id)session transportScope:(id)scope clientCacheIdentifier:(id)identifier;
- (id)taskIdentifier;
@end

#endif /* CPLPullFromTransportTask_h */
