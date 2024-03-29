//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCheckArticleStatusOperation_h
#define FCCheckArticleStatusOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCCloudContext.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface FCCheckArticleStatusOperation : FCOperation

@property (retain, nonatomic) FCCloudContext *context;
@property (copy, nonatomic) NSString *articleID;
@property (nonatomic) long long resultStatus;
@property (copy) id /* block */ checkStatusCompletion;
@property (retain) NSObject<OS_dispatch_queue> *callbackQueue;

/* instance methods */
- (id)initWithContext:(id)context articleID:(id)id;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
@end

#endif /* FCCheckArticleStatusOperation_h */
