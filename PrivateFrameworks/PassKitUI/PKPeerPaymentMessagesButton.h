//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentMessagesButton_h
#define PKPeerPaymentMessagesButton_h
@import Foundation;

#include "UIButton.h"

@class UIActivityIndicatorView, UIColor;

@interface PKPeerPaymentMessagesButton : UIButton {
  /* instance variables */
  UIColor *_backgroundColor;
  UIColor *_highlightedBackgroundColor;
  UIActivityIndicatorView *_spinner;
}

@property (nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (nonatomic) BOOL showsActivityIndicator;

/* class methods */
+ (struct CGSize { double x0; double x1; })referenceSize;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame usePlatterColor:(BOOL)color;
- (void)setHighlighted:(BOOL)highlighted;
- (void)layoutSubviews;
@end

#endif /* PKPeerPaymentMessagesButton_h */
