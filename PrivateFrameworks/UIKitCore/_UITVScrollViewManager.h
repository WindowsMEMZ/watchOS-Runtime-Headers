//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITVScrollViewManager_h
#define _UITVScrollViewManager_h
@import Foundation;

#include "UIScrollView.h"
#include "UIView.h"
#include "_UIScrollViewScrollObserver-Protocol.h"
#include "_UITVScrollViewManagerDelegate-Protocol.h"

@class CASpringAnimation, NSString;

@interface _UITVScrollViewManager : NSObject<_UIScrollViewScrollObserver> {
  /* instance variables */
  BOOL _delegateScrollViewManagerDidFinishScrolling;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CASpringAnimation *scrollAnimation;
@property (nonatomic) long long scrollStyle;
@property (retain, nonatomic) UIView *snapshotViewForWindow;
@property (nonatomic) BOOL useCustomMaskForScrolling;
@property (nonatomic) BOOL ignoreScrollAnimationDidEnd;
@property (nonatomic) struct CGPoint { double x0; double x1; } targetOffset;
@property (weak, nonatomic) NSObject<_UITVScrollViewManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScrollView:(id)view scrollStyle:(long long)style;
- (void)dealloc;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset animated:(BOOL)animated;
- (void)_tearDown:(id)down;
- (void)_scrollAnimationDidEnd:(id)end;
- (void)_scroll:(id)_scroll toContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)_removeScreenshotViewIfNeeded;
- (id)_customScrollingMaskForScrollView:(id)view frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_observeScrollViewDidScroll:(id)scroll;
@end

#endif /* _UITVScrollViewManager_h */
