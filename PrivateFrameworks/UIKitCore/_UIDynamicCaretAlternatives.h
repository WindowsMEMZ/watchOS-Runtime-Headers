//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDynamicCaretAlternatives_h
#define _UIDynamicCaretAlternatives_h
@import Foundation;

#include "UIView.h"
#include "UIView.h"

@class NSArray;

@interface _UIDynamicCaretAlternatives : UIView

@property (retain, nonatomic) UIView *verticalDivider;
@property (retain, nonatomic) UIView *horizontalDivider;
@property (retain, nonatomic) NSArray *alternativesButtons;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setButtonLabels:(id)labels;
- (long long)indexOfButtonForPoint:(struct CGPoint { double x0; double x1; })point;
- (void)highlightButtonAtIndex:(long long)index;
@end

#endif /* _UIDynamicCaretAlternatives_h */
