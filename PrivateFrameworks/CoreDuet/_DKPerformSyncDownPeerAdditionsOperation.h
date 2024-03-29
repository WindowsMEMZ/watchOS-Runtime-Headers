//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKPerformSyncDownPeerAdditionsOperation_h
#define _DKPerformSyncDownPeerAdditionsOperation_h
@import Foundation;

#include "_DKSyncCompositeOperation.h"
#include "_CDMutablePerfMetric.h"
#include "_DKKeyValueStore-Protocol.h"
#include "_DKSync2Policy.h"
#include "_DKSyncHistory.h"
#include "_DKSyncLocalKnowledgeStorage-Protocol.h"
#include "_DKSyncPeer.h"
#include "_DKSyncRemoteKnowledgeStorage-Protocol.h"
#include "_DKSyncType.h"

@class NSArray, NSDate;

@interface _DKPerformSyncDownPeerAdditionsOperation : _DKSyncCompositeOperation {
  /* instance variables */
  NSObject<_DKSyncLocalKnowledgeStorage> *_localStorage;
  NSObject<_DKSyncRemoteKnowledgeStorage> *_transport;
  _DKSyncPeer *_peer;
  _DKSync2Policy *_policy;
  _DKSyncType *_type;
  _CDMutablePerfMetric *_perfMetric;
  struct _CDPerfEvent { double startTime; double endTime; } _perfEvent;
  NSArray *_streamNames;
  BOOL _highPriority;
  _DKSyncHistory *_history;
  NSObject<_DKKeyValueStore> *_keyValueStore;
  NSDate *_startDate;
  NSDate *_highWaterMark;
  unsigned long long _batchNumber;
  NSArray *_overlappingWindows;
  BOOL _foundAdditions;
}

/* instance methods */
- (BOOL)isAsynchronous;
- (void)main;
- (void)endOperation;
@end

#endif /* _DKPerformSyncDownPeerAdditionsOperation_h */
