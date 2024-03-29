//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 178.0.0.0.0
//
#ifndef MontrealNNGenerateModel_h
#define MontrealNNGenerateModel_h
@import Foundation;

#include "MontrealNNModelNetwork.h"

@class NSMutableDictionary;

@interface MontrealNNGenerateModel : NSObject

@property (readonly) unsigned long long weightFormat;
@property (readonly) MontrealNNModelNetwork *network;
@property struct MontrealNeuralNetwork * nnObject;
@property (readonly) NSMutableDictionary *inputs;
@property (readonly) NSMutableDictionary *outputs;

/* instance methods */
- (id)initWithWeightFormat:(unsigned long long)format;
- (void)dealloc;
- (void)merge:(id)merge;
- (void *)generateModelContainer;
- (id)modelContainerPath;
- (void)addInputs:(id)inputs;
- (void)removeInput:(id)input;
- (void)addOutputs:(id)outputs;
- (void)removeOutput:(id)output;
- (id)networkInputs;
- (id)networkOutputs;
@end

#endif /* MontrealNNGenerateModel_h */
