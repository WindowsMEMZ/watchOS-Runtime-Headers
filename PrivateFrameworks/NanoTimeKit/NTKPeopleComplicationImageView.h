//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKPeopleComplicationImageView_h
#define NTKPeopleComplicationImageView_h
@import Foundation;

#include "UIView.h"
#include "CDComplicationImageView-Protocol.h"
#include "CLKFullColorImageView-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"

@class CLKImageProvider, CLKSymbolImageProvider, NSNumber, NSString, UIColor, UIFontDescriptor, UIImageView, UILabel, UIView;

@interface NTKPeopleComplicationImageView : UIView<CDComplicationImageView, CLKFullColorImageView> {
  /* instance variables */
  UILabel *_nameLabel;
  UIImageView *_profileImageView;
  UIView *_ringView;
  double _monochromeTintAmount;
  BOOL _usingPersonSymbol;
  CLKSymbolImageProvider *_personSymbolImageProvider;
}

@property (retain, nonatomic) CLKImageProvider *imageProvider;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) double fontSizeFactor;
@property (readonly, nonatomic) NSNumber *tritium_updateMode;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (id)initFullColorImageViewWithDevice:(id)device;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)configureWithImageProvider:(id)provider reason:(long long)reason;
- (long long)_profileImageFilterStyle;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
@end

#endif /* NTKPeopleComplicationImageView_h */
