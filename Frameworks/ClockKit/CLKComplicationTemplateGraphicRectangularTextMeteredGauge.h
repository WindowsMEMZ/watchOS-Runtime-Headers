//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateGraphicRectangularTextMeteredGauge_h
#define CLKComplicationTemplateGraphicRectangularTextMeteredGauge_h
@import Foundation;

#include "CLKComplicationTemplate.h"
#include "CLKFullColorImageProvider.h"
#include "CLKGaugeProvider.h"
#include "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicRectangularTextMeteredGauge : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *body1TextProvider;
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;

/* class methods */
+ (id)templateWithHeaderTextProvider:(id)provider body1TextProvider:(id)provider gaugeProvider:(id)provider;
+ (id)templateWithHeaderImageProvider:(id)provider headerTextProvider:(id)provider body1TextProvider:(id)provider gaugeProvider:(id)provider;

/* instance methods */
- (id)initWithHeaderTextProvider:(id)provider body1TextProvider:(id)provider gaugeProvider:(id)provider;
- (id)initWithHeaderImageProvider:(id)provider headerTextProvider:(id)provider body1TextProvider:(id)provider gaugeProvider:(id)provider;
- (long long)compatibleFamily;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)block;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)block;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)block;
@end

#endif /* CLKComplicationTemplateGraphicRectangularTextMeteredGauge_h */
