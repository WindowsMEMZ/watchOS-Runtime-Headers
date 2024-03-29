//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBarTapGestureRecognizer_h
#define _UIBarTapGestureRecognizer_h
@import Foundation;

#include "UITapGestureRecognizer.h"

@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer

@property (readonly, nonatomic) long long tapCategory;
@property (nonatomic) BOOL failWhenTappingInBars;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
- (void)setDelegate:(id)delegate;
- (void)_setDelegate:(id)delegate;
- (long long)_categoryForTapLocation:(struct CGPoint { double x0; double x1; })location;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (id)description;
@end

#endif /* _UIBarTapGestureRecognizer_h */
