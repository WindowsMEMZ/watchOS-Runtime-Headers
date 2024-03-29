//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSocialHighlightClient_h
#define PPSocialHighlightClient_h
@import Foundation;

#include "PPSocialHighlightClientProtocol-Protocol.h"
#include "PPXPCClientHelper.h"
#include "PPXPCClientPipelinedBatchQueryManager.h"

@interface PPSocialHighlightClient : NSObject<PPSocialHighlightClientProtocol> {
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
- (id)_internalRemoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
- (double)decayInterval;
- (BOOL)rankedHighlightsWithLimit:(unsigned long long)limit client:(id)client variant:(id)variant error:(id *)error handleBatch:(id /* block */)batch;
- (BOOL)rankedCollaborationsWithLimit:(unsigned long long)limit client:(id)client variant:(id)variant error:(id *)error handleBatch:(id /* block */)batch;
- (BOOL)rankedHighlightsForSyncedItems:(id)items client:(id)client variant:(id)variant error:(id *)error handleBatch:(id /* block */)batch;
- (void)rankedHighlightsBatch:(id)batch isLast:(BOOL)last error:(id)error queryId:(unsigned long long)id completion:(id /* block */)completion;
- (id)attributionForIdentifier:(id)identifier error:(id *)error;
- (void)feedbackForHighlight:(id)highlight type:(unsigned long long)type client:(id)client variant:(id)variant completion:(id /* block */)completion;
- (void)feedbackForAttribution:(id)attribution type:(unsigned long long)type client:(id)client variant:(id)variant completion:(id /* block */)completion;
@end

#endif /* PPSocialHighlightClient_h */
