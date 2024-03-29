//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKLineView_h
#define CKLineView_h
@import Foundation;

#include "UIView.h"

@class CABackdropLayer, CAShapeLayer;

@interface CKLineView : UIView

@property (retain, nonatomic) CABackdropLayer *backdropFilterLayer;
@property (retain, nonatomic) CAShapeLayer *lineShapeLayer;
@property (nonatomic) BOOL shouldUseDarkFSMStrokeColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateReplyLineColor;
- (void)addFilter:(id)filter;
- (void)clearFilters;
@end

#endif /* CKLineView_h */
