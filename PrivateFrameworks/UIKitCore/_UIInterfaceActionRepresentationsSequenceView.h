//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIInterfaceActionRepresentationsSequenceView_h
#define _UIInterfaceActionRepresentationsSequenceView_h
@import Foundation;

#include "UIScrollView.h"
#include "UIInterfaceActionVisualStyle.h"
#include "UIView.h"
#include "_UIInterfaceActionSeparatableSequenceView.h"

@class NSArray, NSLayoutConstraint;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {
  /* instance variables */
  long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
}

@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint;
@property (readonly, nonatomic) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic) NSArray *arrangedActionRepresentationViews;
@property (nonatomic) long long actionLayoutAxis;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) BOOL visualCornerForcedOverride;

/* instance methods */
- (id)initWithVisualStyle:(id)style;
- (double)fittingWidthForLayoutAxis:(long long)axis;
- (void)reloadDisplayedContentVisualStyle;
- (double)_contentFitCanScrollThreshold;
- (id)_systemDefaultFocusGroupIdentifier;
- (void)layoutSubviews;
- (void)_willUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)didUpdateFocusInContext:(id)context withAnimationCoordinator:(id)coordinator;
- (void)_notifyDidScroll;
- (void)updateConstraints;
- (void)_loadDefaultSizingConstraints;
- (void)_updateMinimumHeightConstraint;
- (double)_minimumNumberOfRowsRequiredVisible;
- (struct CGSize { double x0; double x1; })_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_disableSeparatedContentSequenceViewToFit;
- (void)_enableSeparatedContentSequenceViewToFit;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (BOOL)_isHorizontalLayout;
- (void)_updateBackgroundView;
@end

#endif /* _UIInterfaceActionRepresentationsSequenceView_h */
