//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef _MLNLPWordTaggingModel_h
#define _MLNLPWordTaggingModel_h
@import Foundation;

#include "MLCustomModel-Protocol.h"
#include "MLModelDescription.h"

@interface _MLNLPWordTaggingModel : NSObject<MLCustomModel> {
  /* instance variables */
  void * _wordTaggingModel;
}

@property (retain) MLModelDescription *modelDescription;

/* instance methods */
- (id)initWithModelDescription:(id)description parameterDictionary:(id)dictionary error:(id *)error;
- (void)dealloc;
- (id)predictionFromFeatures:(id)features options:(id)options error:(id *)error;
@end

#endif /* _MLNLPWordTaggingModel_h */
