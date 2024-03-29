//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef MUPagingScrollControlsView_h
#define MUPagingScrollControlsView_h
@import Foundation;

#include "UIView.h"

@class UIButton;
@protocol UIView<MUScrollViewProtocol;

@interface MUPagingScrollControlsView : UIView {
  /* instance variables */
  UIButton *_previousPageButton;
  UIButton *_nextPageButton;
  UIView<MUScrollViewProtocol> *_scrollView;
}

@property (readonly, nonatomic) BOOL shouldFlipPagingDirection;
@property (readonly, nonatomic) BOOL hoverActive;
@property (nonatomic) BOOL automaticallyFlipsForRTL;

/* instance methods */
- (id)initWithHorizontalScrollView:(id)view;
- (void)_setupSubviews;
- (void)_setupConstraints;
- (void)_updateChevronVisibility;
- (void)_scrollPrevious;
- (void)_scrollNext;
- (void)_adjustScrollIndexByOffset:(long long)offset;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
@end

#endif /* MUPagingScrollControlsView_h */
