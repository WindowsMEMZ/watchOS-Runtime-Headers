//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUILinkLabel_h
#define RUILinkLabel_h
@import Foundation;

#include "UIView.h"

@class NSString, UIButton, UIButtonConfiguration, UIFont, UILabel;

@interface RUILinkLabel : UIView

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (retain, nonatomic) UIButtonConfiguration *buttonConfiguration;
@property (copy, nonatomic) id /* block */ action;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIButton *linkButton;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_resize;
- (void)layoutSubviews;
- (void)_linkPressed;
@end

#endif /* RUILinkLabel_h */
