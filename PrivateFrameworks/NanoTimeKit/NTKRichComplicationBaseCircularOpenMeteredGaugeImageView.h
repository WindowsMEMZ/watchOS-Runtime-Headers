//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationBaseCircularOpenMeteredGaugeImageView_h
#define NTKRichComplicationBaseCircularOpenMeteredGaugeImageView_h
@import Foundation;

#include "NTKRichComplicationCircularBaseView.h"

@class CDRichComplicationCurvedProgressView, CDRichComplicationImageView, CLKUIColoringLabel;

@interface NTKRichComplicationBaseCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CDRichComplicationCurvedProgressView *progressView;
@property (retain, nonatomic) CDRichComplicationImageView *centerImageView;
@property (retain, nonatomic) CLKUIColoringLabel *smallLabel;

/* class methods */
+ (long long)progressFillStyle;
+ (BOOL)supportsComplicationFamily:(long long)family;

/* instance methods */
- (long long)_outerFilterStyle;
- (long long)_innerFilterStyle;
- (id)initWithFamily:(long long)family;
- (void)layoutSubviews;
- (void)setPaused:(BOOL)paused;
- (long long)tritiumUpdateMode;
- (double)_smallLabelFontWeight;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; })_layoutConstraintsWithDevice:(id)device family:(long long)family;
- (void)_enumerateLabelsWithBlock:(id /* block */)block;
- (void)_editingDidEnd;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
@end

#endif /* NTKRichComplicationBaseCircularOpenMeteredGaugeImageView_h */
