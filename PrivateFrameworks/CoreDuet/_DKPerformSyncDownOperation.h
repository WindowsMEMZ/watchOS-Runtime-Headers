//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKPerformSyncDownOperation_h
#define _DKPerformSyncDownOperation_h
@import Foundation;

#include "_DKSyncCompositeOperation.h"
#include "_CDMutablePerfMetric.h"
#include "_DKSync2Policy.h"
#include "_DKSyncLocalKnowledgeStorage-Protocol.h"
#include "_DKSyncRemoteKnowledgeStorage-Protocol.h"
#include "_DKSyncType.h"

@class NSArray;

@interface _DKPerformSyncDownOperation : _DKSyncCompositeOperation {
  /* instance variables */
  NSObject<_DKSyncLocalKnowledgeStorage> *_localStorage;
  NSObject<_DKSyncRemoteKnowledgeStorage> *_transport;
  NSArray *_peers;
  _DKSync2Policy *_policy;
  _DKSyncType *_type;
  _CDMutablePerfMetric *_perfMetric;
  struct _CDPerfEvent { double startTime; double endTime; } _perfEvent;
}

/* instance methods */
- (BOOL)isAsynchronous;
- (void)main;
- (void)endOperation;
@end

#endif /* _DKPerformSyncDownOperation_h */
