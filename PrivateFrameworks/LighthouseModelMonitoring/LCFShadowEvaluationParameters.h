//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.2.1.0.0
//
#ifndef LCFShadowEvaluationParameters_h
#define LCFShadowEvaluationParameters_h
@import Foundation;

@class NSArray, NSDate, NSString;

@interface LCFShadowEvaluationParameters : NSObject

@property (readonly, nonatomic) NSArray *modelNames;
@property (readonly, nonatomic) NSArray *featureNames;
@property (readonly, nonatomic) NSString *srcLabelName;
@property (readonly, nonatomic) NSString *destLabelName;
@property (readonly, nonatomic) NSString *vectorFeatureName;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) id /* block */ preprocessHandler;
@property (readonly, nonatomic) id /* block */ inferenceHandler;
@property (readonly, nonatomic) id /* block */ metricsHandler;
@property (readonly, nonatomic) NSString *groundTruthLabelFeatureName;
@property (readonly, nonatomic) NSString *predictedLabelFeatureName;

/* instance methods */
- (id)init:(id)init featureNames:(id)names vectorFeatureName:(id)name srcLabelName:(id)name destLabelName:(id)name startDate:(id)date endDate:(id)date;
- (id)init:(id)init featureNames:(id)names vectorFeatureName:(id)name srcLabelName:(id)name destLabelName:(id)name startDate:(id)date endDate:(id)date preprocessHandler:(id /* block */)handler inferenceHandler:(id /* block */)handler metricsHandler:(id /* block */)handler groundTruthLabelFeatureName:(id)name predictedLabelFeatureName:(id)name;
@end

#endif /* LCFShadowEvaluationParameters_h */
