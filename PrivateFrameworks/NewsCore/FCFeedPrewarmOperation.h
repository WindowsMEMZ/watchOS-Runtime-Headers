//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFeedPrewarmOperation_h
#define FCFeedPrewarmOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCContentContext-Protocol.h"
#include "FCFeedPrewarmRequest.h"

@class NFLazy, NSMutableDictionary;

@interface FCFeedPrewarmOperation : FCOperation

@property (readonly, nonatomic) FCFeedPrewarmRequest *prewarmRequest;
@property (readonly, nonatomic) NSObject<FCContentContext> *contentContext;
@property (readonly, nonatomic) NSMutableDictionary *feedIDsByCKFeedID;
@property (readonly, nonatomic) NSMutableDictionary *requestRangeByFeedID;
@property (retain, nonatomic) NFLazy *lazyResultPromise;

/* instance methods */
- (id)initWithPrewarmRequest:(id)request contentContext:(id)context;
- (void)commitResultsOnceWithCompletionHandler:(id /* block */)handler;
- (void)performOperation;
- (id)_commitQueryResult:(id)result;
@end

#endif /* FCFeedPrewarmOperation_h */
