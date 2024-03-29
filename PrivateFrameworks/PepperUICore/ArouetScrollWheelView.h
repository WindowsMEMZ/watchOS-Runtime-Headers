//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef ArouetScrollWheelView_h
#define ArouetScrollWheelView_h
@import Foundation;

#include "UIView.h"
#include "ArouetCandidatesScrollView.h"
#include "ArouetCandidatesScrollViewDelegate-Protocol.h"
#include "ArouetScrollWheelViewDataSource-Protocol.h"
#include "ArouetScrollWheelViewDelegate-Protocol.h"
#include "PUICPickerWheelNotchProvider.h"
#include "UIScrollViewDelegate-Protocol.h"

@class CAGradientLayer, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIColor, UIFont;

@interface ArouetScrollWheelView : UIView<ArouetCandidatesScrollViewDelegate, UIScrollViewDelegate> {
  /* instance variables */
  NSMutableArray *_reusableLabelsQueue;
  NSMutableDictionary *_labelsInUse;
  long long _numberOfRows;
  double _scrollWheelLabelHeight;
  CAGradientLayer *_maskLayer;
  BOOL _loaded;
}

@property (retain, nonatomic) ArouetCandidatesScrollView *scrollView;
@property (retain, nonatomic) PUICPickerWheelNotchProvider *notchProvider;
@property (retain, nonatomic) NSTimer *scrollCommitTimer;
@property (nonatomic) unsigned long long currentIndex;
@property (weak, nonatomic) NSObject<ArouetScrollWheelViewDataSource> *dataSource;
@property (weak, nonatomic) NSObject<ArouetScrollWheelViewDelegate> *delegate;
@property (nonatomic) long long itemTitleAligmnent;
@property (nonatomic) double itemTitleMinimumScaleFactor;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL scrollsWithManualEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)setHidden:(BOOL)hidden;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)superview;
- (void)reloadData;
- (void)jumpToNewCurrentIndex:(long long)index;
- (void)scrollToItemAtIndex:(long long)index;
- (void)_wheelChangedWithEvent:(id)event;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setCurrentIndex:(unsigned long long)index;
- (void)_setCurrentIndex:(unsigned long long)index byUserAction:(BOOL)action;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)_scrollingEnded;
- (void)_handleScrollCommitTimer:(id)timer;
- (BOOL)arouetCandidatesScrollViewShouldBecomeFirstResponder:(id)responder;
- (void)_handleTapGesture:(id)gesture;
- (void)_generateOpacityMask;
- (void)_updateMetrics;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visibleLabelsRange;
- (void)_layoutScrollView;
- (void)_reuseLabelsWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range contentOffset:(struct CGPoint { double x0; double x1; })offset;
- (id)_textForLabelAtIndex:(unsigned long long)index;
- (void)_recycleLabel:(id)label forKey:(id)key;
- (void)_recycleAllLabels;
- (id)_dequeueLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForLabelAtIndex:(unsigned long long)index;
- (double)_yPositionForLabelAtIndex:(unsigned long long)index;
- (double)_contentOffsetYForLabelAtIndex:(long long)index;
- (long long)_estimatedItemIndexForContentOffsetY:(double)y;
- (id)_titleForItemAtIndex:(unsigned long long)index;
- (long long)_numberOfRows;
- (void)_alertDelegateDidChangeToCurrentIndex:(unsigned long long)index;
- (BOOL)isActive;
@end

#endif /* ArouetScrollWheelView_h */
