//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCFeedItemHeadlinesOperation_h
#define FCFeedItemHeadlinesOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCContentContext-Protocol.h"
#include "FCCoreConfiguration-Protocol.h"
#include "FCFeedItemHeadlinesOperationProperties.h"
#include "FCFeedPersonalizing-Protocol.h"
#include "FCMapTable.h"

@class NSArray, NSDictionary;

@interface FCFeedItemHeadlinesOperation : FCOperation

@property (retain, nonatomic) NSArray *resultHeadlines;
@property (retain, nonatomic) FCFeedItemHeadlinesOperationProperties *properties;
@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration;
@property (retain, nonatomic) NSObject<FCContentContext> *context;
@property (copy, nonatomic) NSArray *feedItems;
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *personalizer;
@property (copy, nonatomic) FCMapTable *feedItemScoreProfiles;
@property (nonatomic) long long feedPersonalizationConfigurationSet;
@property (nonatomic) BOOL shouldFilterHeadlinesWithoutSourceChannels;
@property (nonatomic) BOOL cachedOnly;
@property (copy, nonatomic) id /* block */ rapidUpdateRefreshTest;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;
@property (copy, nonatomic) id /* block */ headlinesMapCompletionHandler;

/* instance methods */
- (id)init;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
- (void)_fetchUnadornedHeadlinesWithCompletionHandler:(id /* block */)handler;
@end

#endif /* FCFeedItemHeadlinesOperation_h */
