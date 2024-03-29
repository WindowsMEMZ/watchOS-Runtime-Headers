//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCMathOperatorExpression_h
#define SCRCMathOperatorExpression_h
@import Foundation;

#include "SCRCMathSimpleExpression.h"

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) unsigned short operatorChar;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;
- (BOOL)_isIntegral;
- (BOOL)_isUnionOrIntersection;
- (BOOL)_isSummation;
- (BOOL)canBeUsedWithRange;
- (BOOL)_isRingOperator;
- (BOOL)_isInvisibleCharacter;
- (BOOL)_isMinusSign;
- (BOOL)isNaturalSuperscript;
- (BOOL)isEllipsis;
- (BOOL)isTermSeparator;
- (BOOL)isOperationSymbol;
- (BOOL)isFenceDelimiter;
- (id)latexFormatStringAsOver;
- (id)speakableDescriptionWithSpeakingStyle:(long long)style arePausesAllowed:(BOOL)allowed;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)radicals treePosition:(id)position;
- (id)mathMLString;
@end

#endif /* SCRCMathOperatorExpression_h */
