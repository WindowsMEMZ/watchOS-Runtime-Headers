//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCArticleSearchOperationResult_h
#define FCArticleSearchOperationResult_h
@import Foundation;

#include "FCArticleSearchOperationFeedbackResult.h"
#include "FCArticleStreamingResults.h"

@interface FCArticleSearchOperationResult : NSObject

@property (retain, nonatomic) FCArticleStreamingResults *articles;
@property (retain, nonatomic) FCArticleSearchOperationFeedbackResult *feedBack;

/* instance methods */
@end

#endif /* FCArticleSearchOperationResult_h */
