//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PSGInputSuggestionsResponseItem_h
#define PSGInputSuggestionsResponseItem_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PSGStructuredInfoSuggestion.h"
#include "PSGTextualResponseSuggestion.h"

@interface PSGInputSuggestionsResponseItem : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) PSGTextualResponseSuggestion *textualResponseSuggestion;
@property (readonly, nonatomic) PSGStructuredInfoSuggestion *structuredInfoSuggestion;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTextualResponseSuggestion:(id)suggestion structuredInfoSuggestion:(id)suggestion;
- (id)predictedValue;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToItem:(id)item;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* PSGInputSuggestionsResponseItem_h */
