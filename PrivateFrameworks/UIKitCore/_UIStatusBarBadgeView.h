//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIStatusBarBadgeView_h
#define _UIStatusBarBadgeView_h
@import Foundation;

#include "UIView.h"
#include "UIAccessibilityHUDItem.h"
#include "UILabel.h"
#include "_UIStatusBarDisplayable-Protocol.h"

@class NSArray, NSString;

@interface _UIStatusBarBadgeView : UIView<_UIStatusBarDisplayable>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *constraintsWithConstant;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)applyStyleAttributes:(id)attributes;
- (id)viewForLastBaselineLayout;
@end

#endif /* _UIStatusBarBadgeView_h */
