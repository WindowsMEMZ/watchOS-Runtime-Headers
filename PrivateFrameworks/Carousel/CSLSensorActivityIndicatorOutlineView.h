//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSensorActivityIndicatorOutlineView_h
#define CSLSensorActivityIndicatorOutlineView_h
@import Foundation;

#include "UIView.h"
#include "CAAnimationDelegate-Protocol.h"
#include "CSLSensorActivityIndicatorOutlineViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIColor;
@protocol CSLSensorActivityIndicatorOutlineViewItem;

@interface CSLSensorActivityIndicatorOutlineView : UIView<CAAnimationDelegate> {
  /* instance variables */
  UIButton *_button;
  NSObject<CSLSensorActivityIndicatorOutlineViewItem> *_currentItem;
}

@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *outlineColor;
@property (nonatomic) BOOL showsItemButton;
@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) NSObject<CSLSensorActivityIndicatorOutlineViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)_shapeLayer;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)buttonTapped:(id)tapped;
- (id)_createFont;
- (void)_cycleToNextItem;
- (void)_setCurrentItem:(id)item;
- (void)startPulseAnimationIfPossible;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
@end

#endif /* CSLSensorActivityIndicatorOutlineView_h */
