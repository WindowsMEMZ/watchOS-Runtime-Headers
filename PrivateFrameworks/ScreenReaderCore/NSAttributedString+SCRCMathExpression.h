//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef NSAttributedString_SCRCMathExpression_h
#define NSAttributedString_SCRCMathExpression_h
@import Foundation;

#include "SCRCMathExpression.h"

@class NSArray, NSString;

@interface NSAttributedString (SCRCMathExpression)
/* class methods */
+ (id)_scrcStringWithFormat:(id)format args:(char *)args;
+ (id)scrcStringWithFormat:(id)format;
+ (id)scrcStringWithString:(id)string;
+ (id)scrcStringWithString:(id)string treePosition:(id)position;
+ (id)scrcStringWithLiteralString:(id)string;
+ (id)scrcStringWithLiteralString:(id)string treePosition:(id)position;
+ (id)scrcStringWithDollarCode:(id)code treePosition:(id)position;
+ (id)scrcString;
+ (id)scrcPauseString;
+ (id)scrcSpaceString;

/* instance methods */
- (id)scrcSplitBasedOnMultipleAttributesWithLimit:(long long)limit;
- (id)scrcSplitBasedOnAttribute:(id)attribute limit:(long long)limit;
- (id)scrcIndexSetForAttributes:(id)attributes limit:(long long)limit;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_scrcRangeOfVanillaFormatSpecifier;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)index;
- (id)scrcStringByAppendingAttributedString:(id)string;
- (id)scrcStringByReplacingOccurrencesOfString:(id)string withString:(id)string;
- (id)scrcStringByAddingAttribute:(id)attribute value:(id)value;
- (BOOL)_scrcHasPauseCommaAtIndex:(unsigned long long)index;
- (BOOL)scrcContainsPause;
@end

#endif /* NSAttributedString_SCRCMathExpression_h */
