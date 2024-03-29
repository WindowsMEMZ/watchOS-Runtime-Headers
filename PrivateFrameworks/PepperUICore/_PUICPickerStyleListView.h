//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _PUICPickerStyleListView_h
#define _PUICPickerStyleListView_h
@import Foundation;

#include "UIView.h"
#include "PUICCrownInputSequencer.h"
#include "PUICPickerView.h"
#include "PUICPickerWheelNotchProvider.h"
#include "UIContentSizeCategoryAdjusting-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_PUICPickerStyle-Protocol.h"
#include "_PUICPickerStyleListScrollView.h"

@class NSString, UIImageView;

@interface _PUICPickerStyleListView : UIView<UIScrollViewDelegate, _PUICPickerStyle, UIContentSizeCategoryAdjusting> {
  /* instance variables */
  _PUICPickerStyleListScrollView *_scrollView;
  UIImageView *_featheringOverlayView;
  BOOL _shouldRegenerateFeatheringOverlayView;
  double _itemViewHeight;
  PUICPickerWheelNotchProvider *_notchProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) PUICPickerView *pickerView;
@property (nonatomic) long long selectedIndex;
@property (readonly, nonatomic) PUICCrownInputSequencer *crownInputSequencer;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

/* instance methods */
- (id)init;
- (id)initWithFontSizeAdjusting:(BOOL)adjusting;
- (void)dealloc;
- (void)reloadData;
- (void)handleCrownEvent:(id)event;
- (void)_setSelectedIndex:(long long)index relayout:(BOOL)relayout notifyPicker:(BOOL)picker;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_layoutItemViews;
- (void)_layoutItemViewsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range contentOffset:(struct CGPoint { double x0; double x1; })offset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_untransformedFrameForView:(id)view;
- (void)_setUntransformedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame forView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForItemViewAtIndex:(long long)index;
- (double)_initialOriginYForVerticallyCenteredFirstItem;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)_regenerateFeatheringOverlayView;
- (void)_contentSizeCategoryDidChange:(id)change;
- (void)_updateForContentSize;
@end

#endif /* _PUICPickerStyleListView_h */
