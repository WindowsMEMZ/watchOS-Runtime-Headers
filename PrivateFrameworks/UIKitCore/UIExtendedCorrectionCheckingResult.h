//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIExtendedCorrectionCheckingResult_h
#define UIExtendedCorrectionCheckingResult_h
@import Foundation;

#include "NSCorrectionCheckingResult.h"

@class NSDictionary;

@interface UIExtendedCorrectionCheckingResult : NSCorrectionCheckingResult {
  /* instance variables */
  struct _NSRange { unsigned long long location; unsigned long long length; } _sentenceRange;
  NSDictionary *_detail;
}

/* instance methods */
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string sentenceRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range detail:(id)detail;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })sentenceRange;
- (id)detail;
- (BOOL)isPostEditingResult;
@end

#endif /* UIExtendedCorrectionCheckingResult_h */
