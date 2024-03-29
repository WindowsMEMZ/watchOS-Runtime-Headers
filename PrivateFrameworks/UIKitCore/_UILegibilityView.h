//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UILegibilityView_h
#define _UILegibilityView_h
@import Foundation;

#include "UIView.h"
#include "UIImage.h"
#include "UIImageView.h"
#include "_UILegibilitySettings.h"

@interface _UILegibilityView : UIView

@property (retain, nonatomic) _UILegibilitySettings *settings;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *shadowImageView;
@property (nonatomic) long long options;
@property (readonly, @dynamic, nonatomic) long long style;
@property (nonatomic) double strength;
@property (nonatomic) BOOL hidesImage;
@property (readonly, nonatomic) BOOL usesColorFilters;

/* instance methods */
- (id)initWithStyle:(long long)style image:(id)image;
- (id)initWithStyle:(long long)style image:(id)image shadowImage:(id)image;
- (id)initWithSettings:(id)settings strength:(double)strength image:(id)image;
- (id)initWithSettings:(id)settings strength:(double)strength image:(id)image shadowImage:(id)image;
- (id)initWithSettings:(id)settings strength:(double)strength image:(id)image shadowImage:(id)image options:(long long)options;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setImage:(id)image shadowImage:(id)image;
- (void)setStyle:(long long)style image:(id)image shadowImage:(id)image;
- (void)setSettings:(id)settings image:(id)image shadowImage:(id)image;
- (void)updateForChangedSettings:(id)settings;
- (void)updateImage;
- (void)layoutSubviews;
- (BOOL)usesSecondaryColor;
- (id)drawingColor;
- (void)_updateFilters;
@end

#endif /* _UILegibilityView_h */
