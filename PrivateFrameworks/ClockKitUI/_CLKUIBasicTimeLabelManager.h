//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _CLKUIBasicTimeLabelManager_h
#define _CLKUIBasicTimeLabelManager_h
@import Foundation;

#include "CLKUITimeLabelStyle.h"
#include "_CLKUITimeLabelManager-Protocol.h"

@class CLKDevice, CLKTimeFormatter, NSAttributedString, NSString, UIColor, UILabel, UIView;

@interface _CLKUIBasicTimeLabelManager : NSObject<_CLKUITimeLabelManager> {
  /* instance variables */
  CLKDevice *_device;
  UILabel *_label;
  CLKTimeFormatter *_timeFormatter;
  NSString *_timeText;
  CLKUITimeLabelStyle *_style;
  double _maxWidth;
  NSAttributedString *_correctAttributedText;
  BOOL _showsDesignator;
  BOOL _showSubstringToSeparator;
  BOOL _showSubstringFromSeparator;
  BOOL _hideMinutesIfZero;
  BOOL _primary;
  struct CGSize { double width; double height; } _cachedIntrinsicSize;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _cachedOpticalEdgeInsets;
  BOOL _cachedOpticalEdgeInsetsIsValid;
  NSAttributedString *_minutesBlinkerAttributedText;
  NSAttributedString *_secondsBlinkerAttributedText;
  struct _NSRange { unsigned long long location; unsigned long long length; } _minutesBlinkerRange;
  struct _NSRange { unsigned long long location; unsigned long long length; } _secondsBlinkerRange;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingRectOfMinutesBlinkerAttributedText;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingRectOfSecondsBlinkerAttributedText;
}

@property (nonatomic) BOOL showsBlinker;
@property (nonatomic) BOOL showsNumbers;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } intrinsicSize;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) BOOL animationsPaused;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } opticalInsets;
@property (nonatomic) BOOL showSeconds;

/* instance methods */
- (id)initWithForDevice:(id)device timeFormatter:(id)formatter options:(unsigned long long)options timer:(id)timer labelFactory:(id /* block */)factory;
- (id)_initForDevice:(id)device primary:(BOOL)primary withTimeFormatter:(id)formatter options:(unsigned long long)options labelFactory:(id /* block */)factory;
- (void)setStyle:(id)style;
- (void)setShowsDesignator:(BOOL)designator;
- (void)setMaxWidth:(double)width;
- (double)_lastLineBaseline;
- (id)viewForLastBaselineLayout;
- (id)effectiveFont;
- (id)effectiveAttributedText;
- (void)updateTimeText;
- (struct CGSize { double x0; double x1; })sizeThatFits;
- (void)sizeViewToFit;
- (void)traitCollectionDidChange:(id)change;
- (void)enumerateUnderlyingLabelsWithBlock:(id /* block */)block;
- (void)_updateAttributedText;
- (id)minutesDesignatorAttributedText;
- (id)secondsDesignatorAttributedText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectOfBlinkerAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectOfMinutesBlinker;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectOfSecondsBlinker;
- (id)_attributedTextShowingBlinker:(BOOL)blinker numbers:(BOOL)numbers;
@end

#endif /* _CLKUIBasicTimeLabelManager_h */
