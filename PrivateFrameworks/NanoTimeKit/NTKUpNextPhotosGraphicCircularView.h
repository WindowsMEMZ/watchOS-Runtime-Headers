//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextPhotosGraphicCircularView_h
#define NTKUpNextPhotosGraphicCircularView_h
@import Foundation;

#include "UIView.h"
#include "CLKFullColorImageView-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"

@class NSNumber, NSString, UIFontDescriptor, UIImageView;

@interface NTKUpNextPhotosGraphicCircularView : UIView<CLKFullColorImageView>

@property (readonly, nonatomic) UIImageView *imageView;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly, nonatomic) NSNumber *tritium_updateMode;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initFullColorImageViewWithDevice:(id)device;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)provider reason:(long long)reason;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
@end

#endif /* NTKUpNextPhotosGraphicCircularView_h */
