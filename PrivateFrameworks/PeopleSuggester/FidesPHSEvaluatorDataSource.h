//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef FidesPHSEvaluatorDataSource_h
#define FidesPHSEvaluatorDataSource_h
@import Foundation;

@class NSArray, NSDictionary;

@interface FidesPHSEvaluatorDataSource : NSObject

@property (copy, nonatomic) NSDictionary *recipe;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordInfos;
@property (retain, nonatomic) NSArray *recordDatas;
@property (readonly, nonatomic) NSArray *GBDTQuestions;
@property (readonly, nonatomic) BOOL computeFirstOrderGradients;
@property (readonly, nonatomic) BOOL computeSecondOrderGradients;
@property (readonly, nonatomic) BOOL reportGradientsBothSidesOfSplit;
@property (readonly, nonatomic) BOOL reportNodeSumGradients;
@property (readonly, nonatomic) BOOL reportPerFeatureResultDifference;
@property (readonly, nonatomic) BOOL reportPerNodeResultDifference;
@property (readonly, nonatomic) NSArray *weightVector;
@property (readonly, nonatomic) NSArray *translateVector;
@property (readonly, nonatomic) NSArray *inputVectors;
@property (readonly, nonatomic) NSArray *targetVector;

/* class methods */
+ (void)initialize;
+ (id)defaultRecipeParams;

/* instance methods */
- (id)initWithRecipe:(id)recipe inputVectors:(id)vectors targetVector:(id)vector error:(id *)error;
- (int)numLocalIterations;
- (float)learningRate;
- (float)learningRateDecay;
- (id)layersToTrain;
- (id)labelMap;
- (id)inputSplice;
- (id)classLearningRates;
- (float)gradNormFactor;
- (int)batchSize;
- (float)l2NormBound;
- (id)gradNormType;
- (id)objectiveFunction;
- (id)freezeComponents;
- (int)classThreshold;
@end

#endif /* FidesPHSEvaluatorDataSource_h */
