//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSocialHighlightServerRequestHandler_h
#define PPSocialHighlightServerRequestHandler_h
@import Foundation;

#include "PPSocialHighlightClientProtocol-Protocol.h"
#include "PPSocialHighlightServerProtocol-Protocol.h"
#include "PPXPCServerPipelinedBatchQueryManager.h"

@class NSArray, NSString;

@interface PPSocialHighlightServerRequestHandler : NSObject<PPSocialHighlightServerProtocol> {
  /* instance variables */
  NSObject<PPSocialHighlightClientProtocol> *_clientProxy;
  PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (copy, nonatomic) NSArray *applicationIdentifiers;

/* instance methods */
- (id)init;
- (void)setRemoteObjectProxy:(id)proxy;
- (void)unblockPendingQueries;
- (void)rankedHighlightsWithLimit:(unsigned long long)limit client:(id)client variant:(id)variant queryId:(unsigned long long)id;
- (void)rankedCollaborationsWithLimit:(unsigned long long)limit client:(id)client variant:(id)variant queryId:(unsigned long long)id;
- (void)rankedHighlightsForSyncedItems:(id)items client:(id)client variant:(id)variant queryId:(unsigned long long)id;
- (void)attributionForIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)feedbackForHighlight:(id)highlight type:(unsigned long long)type client:(id)client variant:(id)variant completion:(id /* block */)completion;
- (void)feedbackForAttribution:(id)attribution type:(unsigned long long)type client:(id)client variant:(id)variant completion:(id /* block */)completion;
- (void)decayIntervalWithCompletion:(id /* block */)completion;
@end

#endif /* PPSocialHighlightServerRequestHandler_h */
