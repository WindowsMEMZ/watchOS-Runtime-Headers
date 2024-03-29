//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPXPCClientPipelinedBatchQueryManager_h
#define PPXPCClientPipelinedBatchQueryManager_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PPXPCClientPipelinedBatchQueryManager : NSObject {
  /* instance variables */
  atomic unsigned long long _queryId;
  NSMutableDictionary *_queryContexts;
  NSObject<OS_dispatch_queue> *_queue;
}

/* class methods */
+ (void)assertBatch:(id)batch forQueryName:(id)name hasExpectedContainedType:(Class)type;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name;
- (BOOL)syncExecuteQueryWithName:(id)name error:(id *)error queryInitializer:(id /* block */)initializer handleBatch:(id /* block */)batch;
- (void)handleReplyWithName:(id)name batch:(id)batch isLast:(BOOL)last error:(id)error queryId:(unsigned long long)id completion:(id /* block */)completion;
- (void)cancelPendingQueriesWithError:(id)error;
@end

#endif /* PPXPCClientPipelinedBatchQueryManager_h */
