//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCMyArticlesSearchOperation_h
#define FCMyArticlesSearchOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCCloudContext.h"
#include "FCDateRange.h"
#include "FCFeedItemFeature.h"

@class NSArray, NSDictionary;

@interface FCMyArticlesSearchOperation : FCOperation

@property (retain, nonatomic) NSArray *resultFeedItems;
@property (copy) NSDictionary *resultFeedContextByFeedID;
@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) FCFeedItemFeature *feature;
@property (copy, nonatomic) FCDateRange *dateRange;
@property (nonatomic) BOOL channelsOnly;
@property (nonatomic) BOOL cachedOnly;
@property (nonatomic) unsigned long long filterOptions;
@property (nonatomic) unsigned long long maxFeedItems;
@property (copy, nonatomic) id /* block */ searchCompletionHandler;

/* instance methods */
- (id)init;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
- (void)_generateFeedRequestsForFeedRange:(id)range completionHandler:(id /* block */)handler;
- (id)_cappedFeedItemsFromResponses:(id)responses allFeedItems:(id)items;
@end

#endif /* FCMyArticlesSearchOperation_h */
