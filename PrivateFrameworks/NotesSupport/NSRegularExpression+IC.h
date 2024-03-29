//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef NSRegularExpression_IC_h
#define NSRegularExpression_IC_h
@import Foundation;

@interface NSRegularExpression (IC)
/* class methods */
+ (id)ic_regexForSearchStrings:(id)strings;
+ (id)ic_regexForSearchStrings:(id)strings matchWordBoundaries:(BOOL)boundaries;
+ (id)ic_patternForTokens:(id)tokens matchWordBoundaries:(BOOL)boundaries;
+ (id)ic_regexForPrefixMatchingTokens:(id)tokens substringMatchingTokens:(id)tokens;
+ (id)ic_uuidRegex;

/* instance methods */
- (BOOL)ic_matchesString:(id)string;
@end

#endif /* NSRegularExpression_IC_h */
