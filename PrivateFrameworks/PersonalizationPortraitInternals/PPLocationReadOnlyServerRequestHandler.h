//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLocationReadOnlyServerRequestHandler_h
#define PPLocationReadOnlyServerRequestHandler_h
@import Foundation;

#include "PPLocationClientProtocol-Protocol.h"
#include "PPLocationReadOnlyServerProtocol-Protocol.h"
#include "PPXPCServerPipelinedBatchQueryManager.h"

@class NSString, _PASBundleIdResolver;

@interface PPLocationReadOnlyServerRequestHandler : NSObject<PPLocationReadOnlyServerProtocol> {
  /* instance variables */
  NSObject<PPLocationClientProtocol> *_clientProxy;
  PPXPCServerPipelinedBatchQueryManager *_queryManager;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

/* instance methods */
- (id)init;
- (void)unblockPendingQueries;
- (void)setRemoteObjectProxy:(id)proxy;
- (void)rankedLocationsWithQuery:(id)query queryId:(unsigned long long)id;
- (void)locationRecordsWithQuery:(id)query queryId:(unsigned long long)id;
- (void)registerFeedback:(id)feedback completion:(id /* block */)completion;
@end

#endif /* PPLocationReadOnlyServerRequestHandler_h */
