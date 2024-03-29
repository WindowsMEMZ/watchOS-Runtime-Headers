//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUILayerHostView_h
#define CLKUILayerHostView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface CLKUILayerHostView : UIView

@property (weak, nonatomic) UIView *superviewDelegate;

/* instance methods */
- (id)superview;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
@end

#endif /* CLKUILayerHostView_h */
