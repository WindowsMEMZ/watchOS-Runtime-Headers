//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef WFWebPageToFilterText_h
#define WFWebPageToFilterText_h
@import Foundation;

#include "WFWebPageDecorator.h"

@interface WFWebPageToFilterText : WFWebPageDecorator
/* instance methods */
- (id)rawPlainText;
- (BOOL)isWorthAnalyzingWithEvidence:(int *)evidence message:(id *)message;
- (BOOL)selfRestricted;
- (id)URLFuzzyWithWordLength:(int)length;
- (id)URLFuzzyForFilter;
@end

#endif /* WFWebPageToFilterText_h */
