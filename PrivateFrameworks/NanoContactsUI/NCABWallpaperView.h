//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABWallpaperView_h
#define NCABWallpaperView_h
@import Foundation;

#include "UIView.h"
#include "WallpaperBlurView.h"

@class CNContact, NSArray, UIImageView, UIView;

@interface NCABWallpaperView : UIView {
  /* instance variables */
  UIImageView *_wallpaperImageView;
  WallpaperBlurView *_blurView;
  NSArray *constraintsForAvatar;
  NSArray *constraintsForWallpaper;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) UIView *sensitivityBlurView;
@property (nonatomic) BOOL shouldShowCivicBlur;

/* instance methods */
- (void)_applyCivicBlur;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_setupViews;
- (BOOL)_showsWallpaperForContact:(id)contact;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* NCABWallpaperView_h */
