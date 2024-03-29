//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMovieScrubberTrackView_h
#define UIMovieScrubberTrackView_h
@import Foundation;

#include "UIView.h"
#include "UIMovieScrubberTrackOverlayView.h"
#include "UIMovieScrubberTrackViewDataSource-Protocol.h"
#include "UIMovieScrubberTrackViewDelegate-Protocol.h"
#include "UIView.h"

@class NSArray, NSDictionary, NSMutableDictionary;

@interface UIMovieScrubberTrackView : UIView {
  /* instance variables */
  NSArray *_summaryThumbnailViews;
  NSArray *_summaryThumbnailTimestamps;
  NSArray *_summaryThumbnailChildTimestamps;
  NSDictionary *_thumbnailStartXValues;
  NSDictionary *_childThumbnailViews;
  NSMutableDictionary *_thumbnailViews;
  NSArray *_timestamps;
  UIMovieScrubberTrackOverlayView *_overlayView;
  UIView *_maskContainerView;
  struct CGSize { double width; double height; } _thumbnailSize;
  float _zoomOriginXDelta;
  float _zoomWidthDelta;
  float _unclampedZoomWidthDelta;
  float _zoomAnimationDuration;
  double _duration;
  double _value;
  double _startValue;
  double _endValue;
  struct { unsigned int x :1 delegateSizeOriginDelta; unsigned int x :1 delegateDidExpand; unsigned int x :1 delegateDidCollapse; unsigned int x :1 delegateWillRequestThumbs; unsigned int x :1 delegateDidRequestThumbs; unsigned int x :1 delegateZoomAnimationDuration; unsigned int x :1 delegateZoomAnimationDelay; unsigned int x :1 needsReload; unsigned int x :1 editing; unsigned int editingHandle; unsigned int x :1 zoomIsDisabled; } _trackFlags;
}

@property (weak, nonatomic) NSObject<UIMovieScrubberTrackViewDataSource> *dataSource;
@property (weak, nonatomic) NSObject<UIMovieScrubberTrackViewDelegate> *delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setValue:(double)value;
- (void)setEditing:(BOOL)editing;
- (void)animateFillFramesAway;
- (void)setStartValue:(double)value;
- (void)setEndValue:(double)value;
- (void)setThumbnailImage:(struct CGImage *)image forTimestamp:(id)timestamp;
- (id)_createImageViewForTimestamp:(id)timestamp isSummaryThumbnail:(BOOL)thumbnail;
- (void)clear;
- (void)_reallyReloadData;
- (void)reloadData;
- (void)layoutSubviews;
- (void)setZoomAnimationDuration:(double)duration;
- (double)zoomAnimationDuration;
- (BOOL)zoomAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)_setOverlayViewIsZoomed:(BOOL)zoomed minValue:(float)value maxValue:(float)value;
- (void)unzoom;
- (void)_zoomAnimationDidFinish;
- (void)_unzoomAnimationDidFinish;
@end

#endif /* UIMovieScrubberTrackView_h */
