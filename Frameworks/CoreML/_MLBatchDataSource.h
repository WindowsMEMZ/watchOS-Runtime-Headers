//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef _MLBatchDataSource_h
#define _MLBatchDataSource_h
@import Foundation;

#include "ETDataProvider-Protocol.h"
#include "MLBatchProvider-Protocol.h"
#include "MLNeuralNetworkEngine.h"

@class NSString;

@interface _MLBatchDataSource : NSObject<ETDataProvider>

@property (readonly, nonatomic) NSObject<MLBatchProvider> *batchProvider;
@property (readonly, nonatomic) MLNeuralNetworkEngine *nnEngine;
@property (readonly, nonatomic) BOOL useForPrediction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMLBatchProvider:(id)provider forPrediction:(BOOL)prediction neuralNetworkEngine:(id)engine error:(id *)error;
- (id)dataPointAtIndex:(unsigned long long)index error:(id *)error;
- (unsigned long long)numberOfDataPoints;
@end

#endif /* _MLBatchDataSource_h */
