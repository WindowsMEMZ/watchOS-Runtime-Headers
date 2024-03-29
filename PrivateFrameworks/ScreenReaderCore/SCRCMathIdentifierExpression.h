//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCMathIdentifierExpression_h
#define SCRCMathIdentifierExpression_h
@import Foundation;

#include "SCRCMathSimpleExpression.h"

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression

@property (readonly, nonatomic) long long fontStyle;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;
- (id)speakableDescriptionWithSpeakingStyle:(long long)style arePausesAllowed:(BOOL)allowed;
- (id)speakableDescriptionWithSpeakingStyle:(long long)style arePausesAllowed:(BOOL)allowed isPartOfWord:(BOOL)word;
- (id)mathMLString;
- (BOOL)isNumber;
- (BOOL)_isPrime;
- (BOOL)isNaturalSuperscript;
- (BOOL)canFormWordStartingWithExpression:(id)expression;
@end

#endif /* SCRCMathIdentifierExpression_h */
