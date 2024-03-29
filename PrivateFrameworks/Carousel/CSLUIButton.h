//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIButton_h
#define CSLUIButton_h
@import Foundation;

#include "CSLAppSwitcherAccessoryView.h"

@interface CSLUIButton : CSLAppSwitcherAccessoryView

@property (nonatomic) float mostlyInsideInset;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setDefaultCornerRadius;
- (BOOL)pointMostlyInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* CSLUIButton_h */
