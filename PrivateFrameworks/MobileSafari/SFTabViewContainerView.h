//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFTabViewContainerView_h
#define SFTabViewContainerView_h
@import Foundation;

#include "UIView.h"

@class NSIndexSet, NSMutableDictionary;
@protocol SFTabViewContainerViewDataSource;

@interface SFTabViewContainerView : UIView {
  /* instance variables */
  long long _childCount;
  NSMutableDictionary *_childIndexToViewMap;
  struct _NSRange { unsigned long long location; unsigned long long length; } _visibleRange;
}

@property (nonatomic) double contentOffset;
@property (weak, nonatomic) NSObject<SFTabViewContainerViewDataSource> *dataSource;
@property (readonly, nonatomic) NSIndexSet *visibleChildIndexes;
@property (nonatomic) BOOL extendsVisibleRange;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)reloadData;
- (void)reloadDataWithPostUpdateActions:(id /* block */)actions;
- (void)reloadViewsAtIndexes:(id)indexes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForChildAtIndex:(long long)index;
- (long long)convertIndex:(long long)index;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleRangeForContentOffset:(double)offset nearestIndex:(long long *)index;
- (void)revealChildAtIndex:(long long)index;
- (void)revealChildAtFractionalIndex:(double)index;
@end

#endif /* SFTabViewContainerView_h */
