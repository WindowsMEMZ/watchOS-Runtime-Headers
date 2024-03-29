//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITableViewCellContentView_h
#define UITableViewCellContentView_h
@import Foundation;

#include "UIView.h"

@interface UITableViewCellContentView : UIView {
  /* instance variables */
  struct { unsigned int x :4 edgesForOverridingDefaultLayoutMargins; } _contentViewFlags;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } overriddenDefaultLayoutMargins;

/* class methods */
+ (id)classFallbacksForKeyedArchiver;

/* instance methods */
- (void)_tableViewCellContentViewCommonSetup;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)constraints;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_concreteDefaultLayoutMargins;
- (void)_setOverriddenDefaultLayoutMargins:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })_overriddenDefaultLayoutMargins;
@end

#endif /* UITableViewCellContentView_h */
