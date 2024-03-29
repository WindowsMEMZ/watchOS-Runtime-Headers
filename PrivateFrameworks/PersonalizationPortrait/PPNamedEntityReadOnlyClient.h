//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPNamedEntityReadOnlyClient_h
#define PPNamedEntityReadOnlyClient_h
@import Foundation;

#include "PPNamedEntityClientProtocol-Protocol.h"
#include "PPXPCClientHelper.h"
#include "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPNamedEntityReadOnlyClient : NSObject<PPNamedEntityClientProtocol> {
  /* instance variables */
  PPXPCClientHelper *_clientHelper;
  PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_unblockPendingQueries;
- (void)namedEntityBatch:(id)batch isLast:(BOOL)last error:(id)error queryId:(unsigned long long)id completion:(id /* block */)completion;
- (void)namedEntityRecordBatch:(id)batch isLast:(BOOL)last error:(id)error queryId:(unsigned long long)id completion:(id /* block */)completion;
- (id)_remoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (BOOL)rankedNamedEntitiesWithQuery:(id)query error:(id *)error handleBatch:(id /* block */)batch;
- (BOOL)namedEntityRecordsWithQuery:(id)query error:(id *)error handleBatch:(id /* block */)batch;
- (id)mapItemForPlaceName:(id)name error:(id *)error;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
@end

#endif /* PPNamedEntityReadOnlyClient_h */
