//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCMathArrayExpression_h
#define SCRCMathArrayExpression_h
@import Foundation;

#include "SCRCMathExpression.h"

@class NSArray, NSString;

@interface SCRCMathArrayExpression : SCRCMathExpression {
  /* instance variables */
  NSArray *_children;
}

@property (readonly, nonatomic) NSString *mathMLTag;
@property (readonly, nonatomic) NSArray *mathMLAttributes;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)description;
- (id)subExpressions;
- (id)children;
- (id)speakableDescriptionWithSpeakingStyle:(long long)style arePausesAllowed:(BOOL)allowed;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)style upToDepth:(unsigned long long)depth parentTreePosition:(id)position childIndex:(unsigned long long *)index;
- (id)speakableSegmentsWithSpeakingStyle:(long long)style upToDepth:(unsigned long long)depth treePosition:(id)position;
- (id)mathMLString;
- (BOOL)hasSimpleArrayOfChildren;
- (id)localizablePrefixForChildAtIndex:(unsigned long long)index;
- (id)localizableSuffixForChildAtIndex:(unsigned long long)index;
- (id)prefixForChildAtIndex:(unsigned long long)index;
- (id)suffixForChildAtIndex:(unsigned long long)index;
@end

#endif /* SCRCMathArrayExpression_h */
