//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPContactServerRequestHandler_h
#define PPContactServerRequestHandler_h
@import Foundation;

#include "PPContactClientProtocol-Protocol.h"
#include "PPContactServerProtocol-Protocol.h"
#include "PPLocalContactStore.h"
#include "PPXPCServerPipelinedBatchQueryManager.h"

@class NSString;

@interface PPContactServerRequestHandler : NSObject<PPContactServerProtocol> {
  /* instance variables */
  NSObject<PPContactClientProtocol> *_clientProxy;
  PPXPCServerPipelinedBatchQueryManager *_queryManager;
  atomic BOOL _isTerminated;
  PPLocalContactStore *_store;
}

@property (copy, nonatomic) NSString *clientProcessName;

/* instance methods */
- (id)init;
- (id)initWithStore:(id)store;
- (void)setRemoteObjectProxy:(id)proxy;
- (void)setIsTerminated;
- (void)unblockPendingQueries;
- (void)rankedContactsWithQuery:(id)query queryId:(unsigned long long)id;
- (void)upcomingRelevantContactsForQuery:(id)query queryId:(unsigned long long)id;
- (void)contactHandlesForTopics:(id)topics queryId:(unsigned long long)id;
- (void)contactHandlesForSource:(id)source queryId:(unsigned long long)id;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)identifiers chosenContactIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)contactNameRecordsForClient:(id)client queryId:(unsigned long long)id;
- (void)contactNameRecordChangesForClient:(id)client completion:(id /* block */)completion;
- (void)contactNameRecordChangesForClient:(id)client queryId:(unsigned long long)id;
@end

#endif /* PPContactServerRequestHandler_h */
