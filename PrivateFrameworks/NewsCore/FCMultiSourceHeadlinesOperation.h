//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCMultiSourceHeadlinesOperation_h
#define FCMultiSourceHeadlinesOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCCachePolicy.h"
#include "FCContentContext-Protocol.h"
#include "FCCoreConfiguration-Protocol.h"

@class NSArray, NSDictionary, NSSet;

@interface FCMultiSourceHeadlinesOperation : FCOperation

@property (retain, nonatomic) NSDictionary *resultArticleListHeadlinesByArticleListID;
@property (retain, nonatomic) NSDictionary *resultArticleListsByID;
@property (retain, nonatomic) NSDictionary *resultArticleIDHeadlinesByArticleID;
@property (copy, nonatomic) NSArray *networkEvents;
@property (copy, nonatomic) NSObject<FCCoreConfiguration> *configuration;
@property (retain, nonatomic) NSObject<FCContentContext> *context;
@property (copy, nonatomic) NSArray *articleListIDs;
@property (copy, nonatomic) NSSet *articleIDs;
@property (retain, nonatomic) FCCachePolicy *cachePolicyForArticleLists;
@property (nonatomic) BOOL shouldBypassRecordSourcePersistence;
@property (retain, nonatomic) NSDictionary *heldRecordsByType;
@property (copy, nonatomic) id /* block */ headlinesCompletionHandler;

/* instance methods */
- (id)init;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
@end

#endif /* FCMultiSourceHeadlinesOperation_h */
