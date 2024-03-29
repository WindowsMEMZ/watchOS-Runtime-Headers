//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationCornerSegmentedGaugeImageView_h
#define NTKRichComplicationCornerSegmentedGaugeImageView_h
@import Foundation;

#include "NTKRichComplicationCornerGaugeImageView.h"

@interface NTKRichComplicationCornerSegmentedGaugeImageView : NTKRichComplicationCornerGaugeImageView
/* class methods */
+ (BOOL)handlesComplicationTemplate:(id)template;
+ (long long)progressFillStyle;

/* instance methods */
- (void)_handleTemplate:(id)template reason:(long long)reason;
- (double)_progressViewHorizontalPaddingInRadius;
@end

#endif /* NTKRichComplicationCornerSegmentedGaugeImageView_h */
