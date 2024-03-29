//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLModel_h
#define MLModel_h
@import Foundation;

#include "MLClassifier-Protocol.h"
#include "MLFairPlayDecryptSession.h"
#include "MLModelConfiguration.h"
#include "MLModelDescription.h"
#include "MLModelMetadata.h"
#include "MLModeling-Protocol.h"
#include "MLNeuralNetwork-Protocol.h"
#include "MLPipeline-Protocol.h"
#include "MLPredictionEvent.h"
#include "MLProgram-Protocol.h"
#include "MLRegressor-Protocol.h"
#include "MLWritable-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue, {atomic<bool>="__a_"{__cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>>="__a_value"AB}}, {atomic<unsigned long long>="__a_"{__cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>>="__a_value"AQ}};

@interface MLModel : NSObject<MLModeling> {
  /* instance variables */
  struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { atomic  __a_value; BOOL x0; } __a_; } _emittedDetailsToInstruments;
  struct atomic<unsigned long long> { struct __cxx_atomic_impl<unsigned long long, std::__cxx_atomic_base_impl<unsigned long long>> { atomic  __a_value; unsigned long long x0; } __a_; } _nextPredictionRequestID;
  NSObject<OS_dispatch_queue> *_asyncPredictionQueue;
}

@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) MLModelConfiguration *configuration;
@property (retain, nonatomic) MLFairPlayDecryptSession *decryptSession;
@property (readonly, nonatomic) NSObject<MLProgram> *program;
@property (readonly, nonatomic) NSObject<MLNeuralNetwork> *neuralNetwork;
@property (readonly, nonatomic) NSObject<MLWritable> *writable;
@property (readonly, nonatomic) NSObject<MLClassifier> *classifier;
@property (readonly, nonatomic) NSObject<MLRegressor> *regressor;
@property (readonly, nonatomic) NSObject<MLPipeline> *pipeline;
@property (readonly, nonatomic) BOOL supportsConcurrentSubmissions;
@property (readonly, nonatomic) unsigned long long predictionTypeForKTrace;
@property (readonly, nonatomic) BOOL recordsPredictionEvent;
@property (readonly) MLModelMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)compileModelWithoutAutoreleaseAtURL:(id)url options:(id)options error:(id *)error;
+ (id)_compileModelAtURL:(id)url options:(id)options error:(id *)error;
+ (id)compileModelAtURL:(id)url error:(id *)error;
+ (void)compileModelAtURL:(id)url completionHandler:(id /* block */)handler;
+ (id)predictionsFromLoopingOverBatch:(id)batch model:(id)model options:(id)options error:(id *)error;
+ (id)predictionsFromSubbatchingBatch:(id)batch maxSubbatchLength:(long long)length predictionBlock:(id /* block */)block options:(id)options error:(id *)error;
+ (long long)maxPredictionsInFlight;
+ (BOOL)serializeInterfaceAndMetadata:(void *)metadata toArchive:(void *)archive error:(id *)error;
+ (id)availableComputeDevices;
+ (unsigned long long)generateSignpostId;
+ (id)modelWithContentsOfURL:(id)url error:(id *)error;
+ (id)modelWithContentsOfURL:(id)url configuration:(id)configuration error:(id *)error;
+ (void)loadContentsOfURL:(id)url configuration:(id)configuration completionHandler:(id /* block */)handler;
+ (void)loadModelAsset:(id)asset configuration:(id)configuration completionHandler:(id /* block */)handler;

/* instance methods */
- (id)vectorizeInput:(id)input error:(id *)error;
- (id)debugQuickLookObject;
- (id)pipelineOfPostVisionFeaturePrintModelsFromPipeline:(id)pipeline;
- (id)visionFeaturePrintInfo;
- (id)initInterfaceAndMetadataWithCompiledArchive:(void *)archive error:(id *)error;
- (id)objectBoundingBoxOutputDescription;
- (id)initDescriptionOnlyWithSpecification:(void *)specification configuration:(id)configuration error:(id *)error;
- (id)initWithDescription:(id)description;
- (id)initWithDescription:(id)description configuration:(id)configuration;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithName:(id)name inputDescription:(id)description outputDescription:(id)description orderedInputFeatureNames:(id)names orderedOutputFeatureNames:(id)names configuration:(id)configuration;
- (id)newRequestForModel:(id)model inputFeatures:(id)features options:(id)options error:(id *)error;
- (void)prepareWithConcurrencyHint:(long long)hint;
- (id)executionSchedule;
- (void)setModelPath:(id)path modelName:(id)name;
- (id)modelPath;
- (void)prepareWithCompletionHandler:(id /* block */)handler;
- (id)predictionFromFeatures:(id)features options:(id)options error:(id *)error;
- (id)predictionFromFeatures:(id)features error:(id *)error;
- (void)submitPredictionRequest:(id)request completionHandler:(id /* block */)handler;
- (void)predictionFromFeatures:(id)features completionHandler:(id /* block */)handler;
- (void)predictionFromFeatures:(id)features options:(id)options completionHandler:(id /* block */)handler;
- (id)predictionsFromBatch:(id)batch error:(id *)error;
- (id)predictionsFromBatch:(id)batch options:(id)options error:(id *)error;
- (id)parameterValueForKey:(id)key error:(id *)error;
- (id)internalEngine;
- (id)updatable;
- (void)enableInstrumentsTracing;
- (void)enableInstrumentsTracingIfNeeded;
- (id)newRequestWithInputFeatures:(id)features options:(id)options error:(id *)error;
- (unsigned long long)nextPredictionRequestID;
- (void)cancelPredictionRequest:(id)request;
@end

#endif /* MLModel_h */
