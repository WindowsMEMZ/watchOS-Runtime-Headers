//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PMLGradientSolver_h
#define PMLGradientSolver_h
@import Foundation;

#include "PMLModelRegressor.h"
#include "PMLModelWeights.h"
#include "PMLSparseMatrix.h"

@interface PMLGradientSolver : NSObject {
  /* instance variables */
  float _learningRate;
  float _stoppingThreshold;
  unsigned long long _minIterations;
  id /* block */ _gradientCalculator;
  id /* block */ _predictionCalculator;
  id /* block */ _batchPredictionCalculator;
}

@property (retain, nonatomic) PMLModelWeights *weights;
@property (retain, nonatomic) PMLSparseMatrix *covariates;
@property (retain, nonatomic) PMLModelRegressor *objective;
@property (nonatomic) BOOL intercept;

/* instance methods */
- (id)initWithLearningRate:(float)rate minIterations:(unsigned long long)iterations stoppingThreshold:(float)threshold weights:(id)weights intercept:(BOOL)intercept gradientCalculator:(id /* block */)calculator predictionCalculator:(id /* block */)calculator batchPredictionCalculator:(id /* block */)calculator;
- (id)init;
- (void)solve;
- (id)computeAvgGradientWithIterations:(unsigned long long)iterations;
- (id)solveWithAvgGradient:(float *)gradient maxNumberOfIterations:(unsigned long long)iterations;
- (float)predict:(id)predict;
- (id)batchPredict:(id)predict;
- (void)solveForCovariates:(id)covariates objectives:(id)objectives;
@end

#endif /* PMLGradientSolver_h */
