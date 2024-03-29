//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPTemporalClusterClient_h
#define PPTemporalClusterClient_h
@import Foundation;

#include "PPTemporalClusterClientProtocol-Protocol.h"
#include "PPXPCClientHelper.h"
#include "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPTemporalClusterClient : NSObject<PPTemporalClusterClientProtocol> {
  /* instance variables */
  PPXPCClientHelper *_clientHelper;
  PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_unblockPendingQueries;
- (id)_remoteObjectProxy;
- (BOOL)rankedTemporalClustersForStartDate:(id)date endDate:(id)date error:(id *)error handleBatch:(id /* block */)batch;
- (void)rankedTemporalClusterBatch:(id)batch isLast:(BOOL)last error:(id)error queryId:(unsigned long long)id completion:(id /* block */)completion;
@end

#endif /* PPTemporalClusterClient_h */
