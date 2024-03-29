//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef WFWebPageToTrainingText_h
#define WFWebPageToTrainingText_h
@import Foundation;

#include "WFWebPageDecorator.h"

@class NSString;

@interface WFWebPageToTrainingText : WFWebPageDecorator {
  /* instance variables */
  NSString *categorySignature;
}

/* class methods */
+ (id)documentSignature;
+ (id)signatureForCategory:(unsigned long long)category;

/* instance methods */
- (id)categorySignature;
- (void)setCategorySignature:(id)signature;
- (id)rawPlainText;
- (void)dealloc;
@end

#endif /* WFWebPageToTrainingText_h */
