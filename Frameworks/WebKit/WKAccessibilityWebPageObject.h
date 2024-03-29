//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKAccessibilityWebPageObject_h
#define WKAccessibilityWebPageObject_h
@import Foundation;

#include "WKAccessibilityWebPageObjectBase.h"

@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase

@property (retain, nonatomic) NSData *remoteTokenData;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_accessibilityCategoryInstalled:(id)installed;
- (double)pageScale;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })test;
@end

#endif /* WKAccessibilityWebPageObject_h */
