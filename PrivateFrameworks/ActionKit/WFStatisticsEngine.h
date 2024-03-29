//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStatisticsEngine_h
#define WFStatisticsEngine_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface WFStatisticsEngine : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsQueue;

/* instance methods */
- (id)init;
- (void)applyOperation:(long long)operation onNumbers:(id)numbers completion:(id /* block */)completion;
- (void)applyOperation:(long long)operation onStatisticsSampleProviders:(id)providers completion:(id /* block */)completion;
- (void)asyncApplyNSExpressionFunction:(id)function data:(id)data completion:(id /* block */)completion;
- (void)averageOfValues:(id)values completion:(id /* block */)completion;
- (void)minimumOfValues:(id)values completion:(id /* block */)completion;
- (void)maximumOfValues:(id)values completion:(id /* block */)completion;
- (void)sumOfValues:(id)values completion:(id /* block */)completion;
- (void)medianOfValues:(id)values completion:(id /* block */)completion;
- (void)modeOfValues:(id)values completion:(id /* block */)completion;
- (void)rangeOfValues:(id)values completion:(id /* block */)completion;
- (void)standardDeviationOfValues:(id)values completion:(id /* block */)completion;
@end

#endif /* WFStatisticsEngine_h */
