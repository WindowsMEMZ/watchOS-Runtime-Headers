//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKModularSmallSimpleTemplateView_h
#define NTKModularSmallSimpleTemplateView_h
@import Foundation;

#include "NTKModularTemplateView.h"

@class CLKUIColoringLabel;
@protocol UIView<CDComplicationImageView;

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {
  /* instance variables */
  UIView<CDComplicationImageView> *_imageView;
  CLKUIColoringLabel *_label;
  long long _maxDynamicFontSize;
}

/* class methods */
+ (BOOL)handlesComplicationTemplate:(id)template;
+ (BOOL)supportsComplicationFamily:(long long)family;
+ (id)supportedTemplateClasses;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_update;
- (void)_layoutContentView;
- (void)_configureWithTextTemplate:(id)template;
- (void)_configureWithImageTemplate:(id)template;
- (double)_maxTextWidthForDynamicFontSize:(long long)size;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)block;
@end

#endif /* NTKModularSmallSimpleTemplateView_h */
