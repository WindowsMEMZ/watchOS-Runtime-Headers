//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHRecurrentNeuralNetworkCoreML_h
#define CHRecurrentNeuralNetworkCoreML_h
@import Foundation;

#include "CHRecurrentNeuralNetwork.h"
#include "CHSingletonMLModel.h"

@class NSArray, NSDictionary, NSString;

@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork

@property (readonly, nonatomic) CHSingletonMLModel *model;
@property (readonly, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) NSArray *inputNames;
@property (readonly, nonatomic) NSDictionary *featureCounts;
@property (readonly, nonatomic) NSArray *outputNames;
@property (readonly, nonatomic) NSDictionary *classCounts;

/* instance methods */
- (id)initWithModelName:(id)name;
- (void)dealloc;
@end

#endif /* CHRecurrentNeuralNetworkCoreML_h */
