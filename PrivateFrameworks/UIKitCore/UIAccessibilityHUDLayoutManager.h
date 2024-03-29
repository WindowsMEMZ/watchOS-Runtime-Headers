//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIAccessibilityHUDLayoutManager_h
#define UIAccessibilityHUDLayoutManager_h
@import Foundation;

@interface UIAccessibilityHUDLayoutManager : NSObject
/* instance methods */
- (struct CGSize { double x0; double x1; })unscaledSizeForHUD:(id)hud containingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })minimumUnscaledSizeForHUD:(id)hud preferredLabelSize:(struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutBoundsForHUD:(id)hud;
- (id)containerViewForHUD:(id)hud;
- (id)itemContainerViewForHUD:(id)hud;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsetsForHUD:(id)hud;
- (struct CGSize { double x0; double x1; })imageViewSizeForHUD:(id)hud preferredSizeForLabel:(struct CGSize { double x0; double x1; })label;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageViewFrameForHUD:(id)hud preferredSizeForLabel:(struct CGSize { double x0; double x1; })label;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelFrameForHUD:(id)hud preferredSize:(struct CGSize { double x0; double x1; })size;
- (id)labelFontForHUD:(id)hud;
- (struct CGSize { double x0; double x1; })preferredSizeForLabelInHUD:(id)hud maximumWidth:(double)width;
- (void)layoutSubviewsOfHUD:(id)hud;
- (unsigned long long)_actualNumberOfLinesForLabelInHUD:(id)hud preferredSize:(struct CGSize { double x0; double x1; })size;
- (double)_imageCenterToTopForHUD:(id)hud preferredSizeForLabel:(struct CGSize { double x0; double x1; })label;
@end

#endif /* UIAccessibilityHUDLayoutManager_h */
