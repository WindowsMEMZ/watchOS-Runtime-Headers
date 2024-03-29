//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef TUITypedStringCandidate_h
#define TUITypedStringCandidate_h
@import Foundation;

#include "TIKeyboardCandidateSingle.h"

@class NSString;

@interface TUITypedStringCandidate : TIKeyboardCandidateSingle

@property (retain, nonatomic) NSString *displayLabel;

/* class methods */
+ (id)typedStringCandidateWithLocale:(id)locale typedString:(id)string rawTypedString:(id)string;

/* instance methods */
- (id)label;
@end

#endif /* TUITypedStringCandidate_h */
