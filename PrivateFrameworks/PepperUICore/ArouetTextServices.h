//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef ArouetTextServices_h
#define ArouetTextServices_h
@import Foundation;

#include "ArouetLanguageSpec.h"

@interface ArouetTextServices : NSObject

@property (readonly) ArouetLanguageSpec *languageSpec;

/* instance methods */
- (id)init;
- (id)initWithLanguageSpec:(id)spec;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfLastCharacterBeforeCharacterIndex:(long long)index inString:(id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfLastWordBeforeCharacterIndex:(long long)index inString:(id)string;
@end

#endif /* ArouetTextServices_h */
