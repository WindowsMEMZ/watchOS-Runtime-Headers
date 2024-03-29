//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCMathRadicalExpression_h
#define SCRCMathRadicalExpression_h
@import Foundation;

#include "SCRCMathExpression.h"
#include "SCRCMathExpression.h"

@interface SCRCMathRadicalExpression : SCRCMathExpression

@property (retain, nonatomic) SCRCMathExpression *radicand;
@property (retain, nonatomic) SCRCMathExpression *rootIndex;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;
- (id)subExpressions;
- (BOOL)_isSquareRoot;
- (BOOL)_isCubeRoot;
- (unsigned long long)fractionLevel;
- (id)speakableDescriptionWithSpeakingStyle:(long long)style arePausesAllowed:(BOOL)allowed;
- (id)speakableSegmentsWithSpeakingStyle:(long long)style upToDepth:(unsigned long long)depth treePosition:(id)position;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)radicals treePosition:(id)position;
- (id)mathMLString;
- (id)latexMathModeDescription;
@end

#endif /* SCRCMathRadicalExpression_h */
