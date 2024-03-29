//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REMLLinearModel_h
#define REMLLinearModel_h
@import Foundation;

#include "REMLModel.h"
#include "REMLLinearModelProperties-Protocol.h"

@class NSDictionary;

@interface REMLLinearModel : REMLModel<REMLLinearModelProperties>

@property (readonly, nonatomic) NSDictionary *models;

/* instance methods */
- (id)initWithFeatureSet:(id)set interactionDescriptors:(id)descriptors;
- (BOOL)requiresDirectory;
- (void)trainWithFeatures:(id)features positiveEvent:(id)event interaction:(id)interaction;
- (void)_clearCache;
- (void)_trainWithFeatures:(id)features positiveEvent:(id)event;
- (void)_enumerateModelsForFeatureMap:(id)map usingBlock:(id /* block */)block;
- (id)predictionSetWithFeatures:(id)features;
- (id)_predictWithFeatures:(id)features;
- (BOOL)_saveModelToURL:(id)url error:(id *)error;
- (BOOL)_loadModelFromURL:(id)url error:(id *)error;
- (void)_clearModel;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (void)logCoreAnalyticsMetrics;
- (void)setMetricsRecorder:(id)recorder;
@end

#endif /* REMLLinearModel_h */
