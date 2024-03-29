//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISearchBarSearchFieldBackgroundView_h
#define _UISearchBarSearchFieldBackgroundView_h
@import Foundation;

#include "_UITextFieldRoundedRectBackgroundViewNeue.h"

@interface _UISearchBarSearchFieldBackgroundView : _UITextFieldRoundedRectBackgroundViewNeue

@property (nonatomic) long long barStyle;
@property (nonatomic) unsigned long long searchBarStyle;
@property (nonatomic) BOOL showingTouch;
@property (nonatomic) BOOL backgroundContainer;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame active:(BOOL)active;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame active:(BOOL)active updateView:(BOOL)view;
- (void)setCornerRadius:(double)radius;
- (id)_strokeColor:(BOOL)color;
- (id)_fillColor:(BOOL)color;
- (id)_automaticFillColorForActive:(BOOL)active;
- (id)_ultralightFillColorForOverlayFilter:(BOOL)filter active:(BOOL)active;
- (void)layoutSubviews;
@end

#endif /* _UISearchBarSearchFieldBackgroundView_h */
