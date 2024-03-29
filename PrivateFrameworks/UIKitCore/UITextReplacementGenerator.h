//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextReplacementGenerator_h
#define UITextReplacementGenerator_h
@import Foundation;

#include "UITextRange.h"

@class NSString;

@interface UITextReplacementGenerator : NSObject

@property (retain, nonatomic) UITextRange *replacementRange;
@property (copy, nonatomic) NSString *stringToReplace;

/* instance methods */
- (BOOL)shouldAllowString:(id)string intoReplacements:(id)replacements;
- (id)replacementWithText:(id)text;
- (void)addPlaceholderForEmptyReplacements:(id)replacements;
- (id)replacements;
- (BOOL)isStringToReplaceMisspelled;
@end

#endif /* UITextReplacementGenerator_h */
