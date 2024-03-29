//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCNewsPersonalizationArticleEmbeddingsFittingConfiguration_h
#define FCNewsPersonalizationArticleEmbeddingsFittingConfiguration_h
@import Foundation;

#include "FCNewsPersonalizationArticleEmbeddingsFittingRequirements.h"
#include "FCNewsPersonalizationLogisticRegressionClassifierConfiguration.h"

@class NSNumber;

@interface FCNewsPersonalizationArticleEmbeddingsFittingConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleReadRequirements;
@property (retain, nonatomic) FCNewsPersonalizationArticleEmbeddingsFittingRequirements *articleSeenRequirements;
@property (nonatomic) long long embeddingType;
@property (retain, nonatomic) FCNewsPersonalizationLogisticRegressionClassifierConfiguration *logisticRegressionClassifierConfiguration;
@property (nonatomic) double earliestAllowedEmbeddingEventTimestamp;
@property (nonatomic) BOOL haltEmbeddingProcessingAfterEncounteringNonMatchingEmbeddingsInSession;
@property (readonly, nonatomic) NSNumber *maximumRatioOfArticleSeenEmbeddingsToArticleReadEmbeddings;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)description;
@end

#endif /* FCNewsPersonalizationArticleEmbeddingsFittingConfiguration_h */
