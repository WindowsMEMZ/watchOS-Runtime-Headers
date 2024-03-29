//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIAvatarLayoutManager_h
#define CNUIAvatarLayoutManager_h
@import Foundation;

@interface CNUIAvatarLayoutManager : NSObject
/* class methods */
+ (id)avatarViewLayoutConfigurationsDictionaryForType:(unsigned long long)type;
+ (id)layoutConfigurationsForType:(unsigned long long)type withItemCount:(long long)count;
+ (id)avatarViewLayoutConfigurationsForType:(unsigned long long)type;
+ (id)avatarViewLayoutItemConfigurations:(id)configurations;
+ (long long)maxAvatarCountForType:(unsigned long long)type;
+ (id)identifierForLayoutType:(unsigned long long)type;
+ (id)avatarBadgeLayerForAvatarInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect badgeType:(unsigned long long)type isRTL:(BOOL)rtl;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })avatarBadgeRectForAvatarInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect badgeType:(unsigned long long)type isRTL:(BOOL)rtl;
+ (void)applyAvatarBadgeStylingToLayer:(id)layer badgeType:(unsigned long long)type;
+ (void)cropAvatarBadgeLayer:(id)layer withCropStyle:(unsigned long long)style;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForBadgeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame onAvatarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withPosition:(long long)position mediaContextFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame isRTL:(BOOL)rtl;
@end

#endif /* CNUIAvatarLayoutManager_h */
