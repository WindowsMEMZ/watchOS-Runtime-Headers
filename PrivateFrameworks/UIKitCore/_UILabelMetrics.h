//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UILabelMetrics_h
#define _UILabelMetrics_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_UILabelConfiguration.h"
#include "_UILabelScaledMetrics.h"
#include "_UILabelSynthesizedContent.h"

@class NSDictionary, NSStringDrawingContext;

@interface _UILabelMetrics : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSStringDrawingContext *_stringDrawingContext;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
  _UILabelSynthesizedContent *_synthesizedContent;
  _UILabelScaledMetrics *_scaledMetrics;
  double _firstBaselineOffset;
  double _lastBaselineOffset;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _drawingRect;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _idealBounds;
  id _textToUse;
  NSDictionary *_attributesToUse;
  id _layout;
  _UILabelScaledMetrics *_associatedScaledMetrics;
  struct { unsigned int x :1 calculated; unsigned int x :1 contentSynthesized; unsigned int x :1 textToUseIsAttributed; unsigned int x :1 forDrawing; unsigned int x :1 intrinsicMeasurement; } _metricsFlags;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _sourceRect;
@property (readonly, nonatomic) double _lastLineBaselineOffsetFromTop;
@property (readonly, nonatomic) struct { double x0; double x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; long long x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } _intrinsicSizeBaselineInfo;
@property (readonly, nonatomic) NSStringDrawingContext *_stringDrawingContext;
@property (readonly, nonatomic) _UILabelSynthesizedContent *_synthesizedContent;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _intrinsicBaselineSize;
@property (readonly, nonatomic) _UILabelConfiguration *configuration;
@property (readonly, nonatomic) double firstLineBaselineOffsetFromTop;
@property (readonly, nonatomic) double lastLineBaselineOffsetFromBottom;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawingBounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) long long numberOfLines;
@property (readonly, nonatomic) double scaleFactor;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } intrinsicBounds;

/* class methods */
+ (id)metricsWithConfiguration:(id)configuration;
+ (id)intrinsicMetricsWithConfiguration:(id)configuration;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithConfiguration:(id)configuration sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect synthesizedContent:(id)content associatedScaledMetrics:(id)metrics;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)_hyphenationPossiblyDisabledIfURLsDetected;
- (void)_ensureSynthesizedContent;
- (id)_synthesizedAttributedText;
- (id)_synthesizedAttributes;
- (double)_lineSpacing;
- (void)_calculateScaledMetricsUsingSize:(struct CGSize { double x0; double x1; })size;
- (void)_calculatedSynthesizedContentIfNeeded;
- (void)draw;
- (id)description;
@end

#endif /* _UILabelMetrics_h */
