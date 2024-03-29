//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGMultiHeadEspressoModelCached_h
#define SGMultiHeadEspressoModelCached_h
@import Foundation;

#include "SGMultiHeadEspressoModel.h"

@class NSDictionary, NSString;

@interface SGMultiHeadEspressoModelCached : SGMultiHeadEspressoModel {
  /* instance variables */
  NSString *_espressoModelFile;
  NSString *_inputName;
  NSDictionary *_headDimensionality;
}

/* class methods */
+ (id)classifierWithEspressoModelFile:(id)file inputName:(id)name headDimensionality:(id)dimensionality;

/* instance methods */
- (id)initWithEspressoModelFile:(id)file inputName:(id)name headDimensionality:(id)dimensionality;
- (id)predict:(id)predict heads:(id)heads;
- (id)predict:(id)predict;
- (unsigned long long)inputNumParameters;
- (id)headDimensionality;
@end

#endif /* SGMultiHeadEspressoModelCached_h */
