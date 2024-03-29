//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPNamedEntityReadOnlyServerRequestHandler_h
#define PPNamedEntityReadOnlyServerRequestHandler_h
@import Foundation;

#include "PPNamedEntityClientProtocol-Protocol.h"
#include "PPNamedEntityReadOnlyServerProtocol-Protocol.h"
#include "PPXPCServerPipelinedBatchQueryManager.h"

@class NSString, _PASBundleIdResolver;

@interface PPNamedEntityReadOnlyServerRequestHandler : NSObject<PPNamedEntityReadOnlyServerProtocol> {
  /* instance variables */
  NSObject<PPNamedEntityClientProtocol> *_clientProxy;
  PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

/* instance methods */
- (id)init;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)proxy;
- (void)rankedNamedEntitiesWithQuery:(id)query queryId:(unsigned long long)id;
- (void)namedEntityRecordsWithQuery:(id)query queryId:(unsigned long long)id;
- (void)mapItemForPlaceName:(id)name completion:(id /* block */)completion;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
@end

#endif /* PPNamedEntityReadOnlyServerRequestHandler_h */
