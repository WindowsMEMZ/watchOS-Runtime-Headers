//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKKnowledgeStorageLogging_h
#define _DKKnowledgeStorageLogging_h
@import Foundation;

#include "_DKKnowledgeStorageEventNotificationDelegate-Protocol.h"

@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorageLogging : NSObject<_DKKnowledgeStorageEventNotificationDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_notificationQueue;
}

/* instance methods */
- (id)init;
- (void)knowledgeStorage:(id)storage didInsertEventsWithStreamNameCounts:(id)counts;
- (void)knowledgeStorage:(id)storage didInsertLocalEventsWithStreamNameCounts:(id)counts;
- (void)knowledgeStorage:(id)storage didDeleteEventsWithStreamNameCounts:(id)counts;
- (void)knowledgeStorage:(id)storage didTombstoneEventsWithStreamNameCounts:(id)counts;
@end

#endif /* _DKKnowledgeStorageLogging_h */
