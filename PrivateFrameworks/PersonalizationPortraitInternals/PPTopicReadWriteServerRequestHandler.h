//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPTopicReadWriteServerRequestHandler_h
#define PPTopicReadWriteServerRequestHandler_h
@import Foundation;

#include "PPTopicReadWriteServerProtocol-Protocol.h"

@interface PPTopicReadWriteServerRequestHandler : NSObject<PPTopicReadWriteServerProtocol>
/* instance methods */
- (void)donateTopics:(id)topics source:(id)source algorithm:(unsigned long long)algorithm cloudSync:(BOOL)sync sentimentScore:(double)score exactMatchesInSourceText:(id)text completion:(id /* block */)completion;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)id documentIds:(id)ids completion:(id /* block */)completion;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)id groupIds:(id)ids completion:(id /* block */)completion;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)id completion:(id /* block */)completion;
- (void)deleteAllTopicsWithTopicId:(id)id completion:(id /* block */)completion;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)id groupId:(id)id olderThanDate:(id)date completion:(id /* block */)completion;
- (void)cloudSyncWithCompletion:(id /* block */)completion;
- (void)clearWithCompletion:(id /* block */)completion;
- (void)computeAndCacheTopicScores:(id /* block */)scores;
@end

#endif /* PPTopicReadWriteServerRequestHandler_h */
