//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef ArouetButton_h
#define ArouetButton_h
@import Foundation;

#include "PUICButton.h"

@class UITapGestureRecognizer, UIView;

@interface ArouetButton : PUICButton {
  /* instance variables */
  UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (weak, nonatomic) UIView *touchDelegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitRectInsets;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setTapGestureTarget:(id)target action:(SEL)action;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)touchesEstimatedPropertiesUpdated:(id)updated;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* ArouetButton_h */
