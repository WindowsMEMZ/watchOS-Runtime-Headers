//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIUCBKBSelectionBackground_h
#define _UIUCBKBSelectionBackground_h
@import Foundation;

#include "UIView.h"
#include "UIView.h"

@interface _UIUCBKBSelectionBackground : UIView {
  /* instance variables */
  UIView *_backgroundProvidingView;
}

@property (nonatomic) BOOL showButtonShape;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_updateBackgroundProvidingView;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* _UIUCBKBSelectionBackground_h */
