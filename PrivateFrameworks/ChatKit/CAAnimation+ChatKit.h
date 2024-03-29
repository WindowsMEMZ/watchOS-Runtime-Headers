//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CAAnimation_ChatKit_h
#define CAAnimation_ChatKit_h
@import Foundation;

@interface CAAnimation (ChatKit)
/* class methods */
+ (id)ck_springAnimationForRevealingSticker:(BOOL)sticker;
+ (id)ck_springAnimationForRevealingReactWithASticker;
+ (id)ck_opacityAnimationForRevealingSticker:(BOOL)sticker;
+ (id)ck_stickerFlyInMoveAnimationFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (id)ck_stickerFlyInSpringAnimation;
+ (id)ck_stickerFlyInScaleAnimation;
+ (id)ck_stickerFlyInBoundsAnimationFromSize:(struct CGSize { double x0; double x1; })size toSize:(struct CGSize { double x0; double x1; })size;
+ (id)ck_stickerFlyInTransformAnimationTo:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })to;
@end

#endif /* CAAnimation_ChatKit_h */
