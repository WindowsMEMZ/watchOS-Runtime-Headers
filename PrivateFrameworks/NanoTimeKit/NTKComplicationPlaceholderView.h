//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationPlaceholderView_h
#define NTKComplicationPlaceholderView_h
@import Foundation;

#include "UIView.h"
#include "CLKFullColorImageView-Protocol.h"
#include "CLKMonochromeFilterProvider-Protocol.h"
#include "NTKComplicationVariant.h"

@class CALayer, CLKDevice, NSNumber, NSString, UIFontDescriptor;

@interface NTKComplicationPlaceholderView : UIView<CLKFullColorImageView> {
  /* instance variables */
  CLKDevice *_device;
  NSString *_complicationAppIdentifier;
  NTKComplicationVariant *_complicationVariant;
  CALayer *_strokesLayer;
}

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
- (void)configureWithImageProvider:(id)provider reason:(long long)reason;
- (void)pauseLiveFullColorImageView;
- (void)resumeLiveFullColorImageView;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
- (void)layoutSubviews;
- (void)_updateLayers;
- (id)_createCircularLayer;
- (id)_createRectangularLayer;
- (id)_createCircularLayersWithDiameter:(double)diameter;
- (id)_createDownloadMaskLayer;
- (double)_circleDiameter;
- (id)_createDownloadProgressMaskWithDiameter:(double)diameter progress:(double)progress contained:(BOOL)contained;
@end

#endif /* NTKComplicationPlaceholderView_h */
