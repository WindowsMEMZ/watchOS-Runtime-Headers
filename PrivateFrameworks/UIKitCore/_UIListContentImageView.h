//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIListContentImageView_h
#define _UIListContentImageView_h
@import Foundation;

#include "UIImageView.h"
#include "UIColor.h"

@interface _UIListContentImageView : UIImageView {
  /* instance variables */
  BOOL _hadStroke;
  UIColor *_strokeColor;
  double _strokeWidth;
}

@property (retain, nonatomic) UIColor *_strokeColor;
@property (nonatomic) double _strokeWidth;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithImage:(id)image;
- (id)initWithImage:(id)image highlightedImage:(id)image;
- (id)initWithCoder:(id)coder;
- (void)_registerTraitChanges;
- (void)_setStrokeColor:(id)color;
- (void)_setStrokeWidth:(double)width;
- (void)_updateStroke;
@end

#endif /* _UIListContentImageView_h */
