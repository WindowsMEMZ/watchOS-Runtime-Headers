//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSCoreMLScoringModel_h
#define _PSCoreMLScoringModel_h
@import Foundation;

@class MLModel, NSArray, NSDictionary, NSString, NSURL;

@interface _PSCoreMLScoringModel : NSObject

@property (nonatomic) struct _opaque_pthread_mutex_t { long long x0; char x1[56] } lock;
@property (retain, nonatomic) MLModel *mlModel;
@property (nonatomic) BOOL mlModelInitialized;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSArray *inputShape;
@property (retain, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSString *inputFeatureName;
@property (retain, nonatomic) NSString *numCandidatesFeatureName;
@property (retain, nonatomic) NSString *outputFeatureName;
@property (nonatomic) long long modelType;

/* instance methods */
- (id)init;
- (void)loadModel;
- (void)unloadModel;
- (id)initWithCoreMLModel:(id)mlmodel;
- (id)loadCoreMLModel:(id)mlmodel config:(id)config;
- (void)loadProductionModel:(id)model;
- (void)loadModelMetadata;
- (id)featureOrderFromMetadata;
- (long long)getModelTypeWithModelMetadata:(id)metadata;
- (id)getModelDescription;
- (id)getModelPath;
- (BOOL)isSetModel;
- (BOOL)isGBDTModel;
- (id)reformatCandidateDictionaryIntoFeatureTensor:(id)tensor candidateList:(id)list error:(id *)error;
- (id)predictWithFeatureProvider:(id)provider;
- (id)scoreCandidatesWithGBDTModel:(id)gbdtmodel;
- (id)scoreCandidatesWithCoreMLModel:(id)mlmodel;
- (id)scoreCandidates:(id /* block */)candidates predictionContext:(id)context;
- (id)batchPredictWithFeatureDictArray:(id)array;
- (id)getSuggestionProxiesForCandidateToFeatureVectorDictGetter:(id /* block */)getter predictionContext:(id)context messageInteractionCache:(id)cache shareInteractionCache:(id)cache;
@end

#endif /* _PSCoreMLScoringModel_h */
