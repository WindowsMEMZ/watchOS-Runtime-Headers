//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 331.0.0.0.0
//
#ifndef ACUILinkButton_h
#define ACUILinkButton_h
@import Foundation;

#include "UIButton.h"

@class NSString;

@interface ACUILinkButton : UIButton

@property (retain) NSString *acui_titleString;

/* instance methods */
- (id)initWithText:(id)text target:(id)target action:(SEL)action;
- (id)_highlightedStringAttributes;
- (id)_normalStringAttributes;
- (void)setHighlighted:(BOOL)highlighted;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* ACUILinkButton_h */
