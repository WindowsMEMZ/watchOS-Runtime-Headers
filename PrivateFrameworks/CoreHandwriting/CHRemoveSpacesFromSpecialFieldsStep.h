//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHRemoveSpacesFromSpecialFieldsStep_h
#define CHRemoveSpacesFromSpecialFieldsStep_h
@import Foundation;

#include "CHPostprocessingStepModifyingOriginalTokens.h"
#include "CHPatternNetwork.h"

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStepModifyingOriginalTokens {
  /* instance variables */
  BOOL _capitalizationToSplit;
  BOOL _convertToLowercase;
  CHPatternNetwork *_patternFST;
  long long _patternType;
}

/* instance methods */
- (id)initWithPatternFst:(id)fst patternType:(long long)type capitalizationToSplit:(BOOL)split convertToLowercase:(BOOL)lowercase;
- (id)process:(id)process options:(id)options;
@end

#endif /* CHRemoveSpacesFromSpecialFieldsStep_h */
