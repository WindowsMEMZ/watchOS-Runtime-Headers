//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIInterfaceActionSeparatableSequenceView_h
#define _UIInterfaceActionSeparatableSequenceView_h
@import Foundation;

#include "UIView.h"
#include "UIInterfaceActionVisualStyle.h"
#include "UIStackView.h"

@class NSArray;

@interface _UIInterfaceActionSeparatableSequenceView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSArray *arrangedContentSeparatorViews;
@property (readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (retain, nonatomic) NSArray *arrangedContentViews;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) BOOL visualCornerForcedOverride;

/* instance methods */
- (id)initWithVisualStyle:(id)style;
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
- (double)fittingWidthForLayoutAxis:(long long)axis;
- (void)reloadDisplayedContentVisualStyle;
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewBoundsForStackViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stackViewFrameForViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_setLayoutDebuggingIdentifier:(id)identifier;
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(id /* block */)exists;
- (void)updateConstraints;
- (void)layoutSublayersOfLayer:(id)layer;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_systemLayoutSizeFittingStackView:(struct CGSize { double x0; double x1; })view;
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;
- (long long)_dimensionAttributeToConstrainEqual;
- (void)_reloadStackViewArrangement;
- (void)_addSeparatorToStackAndMutableArray:(id)array preferSectionStyle:(BOOL)style;
- (void)_updateActionSpacing;
- (long long)_separatorConstantSizedAxis;
- (void)_updateSeparatorConstantSizedAxis;
- (void)_updateRoundedCornerPositionForActionRepViews;
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)view;
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)view;
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)view;
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)view;
- (void)_setRoundedCornersOfView:(id)view toCornerPosition:(unsigned long long)position;
- (BOOL)_isVerticalLayout;
@end

#endif /* _UIInterfaceActionSeparatableSequenceView_h */
