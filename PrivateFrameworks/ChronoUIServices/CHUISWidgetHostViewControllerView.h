//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHUISWidgetHostViewControllerView_h
#define CHUISWidgetHostViewControllerView_h
@import Foundation;

#include "UIView.h"
#include "CHUISWidgetHostViewController.h"

@interface CHUISWidgetHostViewControllerView : UIView

@property (weak, nonatomic) CHUISWidgetHostViewController *parentController;

/* instance methods */
- (double)_currentDisplayScale;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)showsLargeContentViewer;
- (id)accessibilityHUDRepresentation;
@end

#endif /* CHUISWidgetHostViewControllerView_h */
