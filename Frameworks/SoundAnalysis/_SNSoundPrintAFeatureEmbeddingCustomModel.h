//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 162.13.0.0.0
//
#ifndef _SNSoundPrintAFeatureEmbeddingCustomModel_h
#define _SNSoundPrintAFeatureEmbeddingCustomModel_h
@import Foundation;

#include "_SNSoundPrintFeatureEmbeddingCustomModel.h"
#include "MLCustomModel-Protocol.h"

@class NSArray, NSString;

@interface _SNSoundPrintAFeatureEmbeddingCustomModel : _SNSoundPrintFeatureEmbeddingCustomModel<MLCustomModel> {
  /* instance variables */
  NSString *_inputFeatureName;
  NSString *_outputFeatureName;
  NSArray *_outputShape;
}

/* instance methods */
- (id)initWithModelDescription:(id)description parameterDictionary:(id)dictionary error:(id *)error;
- (id)predictionFromFeatures:(id)features options:(id)options error:(id *)error;
@end

#endif /* _SNSoundPrintAFeatureEmbeddingCustomModel_h */
