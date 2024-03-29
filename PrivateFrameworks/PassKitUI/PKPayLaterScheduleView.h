//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterScheduleView_h
#define PKPayLaterScheduleView_h
@import Foundation;

#include "UIView.h"

@class NSArray, PKPayLaterDynamicContentPageItem;

@interface PKPayLaterScheduleView : UIView {
  /* instance variables */
  NSArray *_horizontalStacks;
  double _minimimLeadingLabelWidth;
}

@property (retain, nonatomic) PKPayLaterDynamicContentPageItem *dynamicContentItem;

/* class methods */
+ (BOOL)canFormScheduleViewForDynamincContentItem:(id)item;

/* instance methods */
- (id)initWithDynamicContentItem:(id)item;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds isTemplateLayout:(BOOL)layout;
- (void)_configureView;
- (double)_minimumRequiredWidthForLeadingLabels;
@end

#endif /* PKPayLaterScheduleView_h */
