//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTCatchUpOperation_h
#define NTCatchUpOperation_h
@import Foundation;

#include "FCOperation.h"
#include "NTCatchUpOperationForYouFetchInfo.h"
#include "NTCatchUpOperationForYouRequest.h"
#include "NTCatchUpOperationResults.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableSet;
@protocol FCContentContext, FCFeedPersonalizing, FCNewsAppConfiguration;

@interface NTCatchUpOperation : FCOperation

@property (copy, nonatomic) NSDate *fetchDate;
@property (retain, nonatomic) NSMutableSet *articleIDsToExclude;
@property (retain, nonatomic) NSMutableArray *articleListRequests;
@property (retain, nonatomic) NSMutableArray *articleIDsRequests;
@property (copy, nonatomic) NSDictionary *resultsByArticleListID;
@property (copy, nonatomic) NSDictionary *resultsByArticleIDsRequestID;
@property (copy, nonatomic) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (copy, nonatomic) NTCatchUpOperationResults *forYouResults;
@property (copy, nonatomic) NSObject<FCNewsAppConfiguration> *appConfiguration;
@property (retain, nonatomic) NSObject<FCContentContext> *contentContext;
@property (retain, nonatomic) NSObject<FCFeedPersonalizing> *feedPersonalizer;
@property (retain, nonatomic) NSDictionary *todayConfigOperationHeldRecordsByType;
@property (copy, nonatomic) NTCatchUpOperationForYouRequest *forYouRequest;
@property (nonatomic) BOOL forYouEnabled;
@property (copy, nonatomic) id /* block */ catchUpCompletionHandler;

/* instance methods */
- (id)init;
- (void)addArticleListRequest:(id)request;
- (void)addArticleIDsRequest:(id)request;
- (void)addArticleIDsToExclude:(id)exclude;
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
- (void)_fetchForYouResultsIfNeededWithCompletion:(id /* block */)completion;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(id /* block */)completion;
- (BOOL)isForYouEnabled;
@end

#endif /* NTCatchUpOperation_h */
