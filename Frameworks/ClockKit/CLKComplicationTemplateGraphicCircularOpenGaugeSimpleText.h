//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText_h
#define CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText_h
@import Foundation;

#include "CLKComplicationTemplateGraphicCircular.h"
#include "CLKGaugeProvider.h"
#include "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider;
@property (copy, nonatomic) CLKTextProvider *bottomTextProvider;
@property (copy, nonatomic) CLKTextProvider *centerTextProvider;

/* class methods */
+ (id)templateWithGaugeProvider:(id)provider bottomTextProvider:(id)provider centerTextProvider:(id)provider;

/* instance methods */
- (id)initWithGaugeProvider:(id)provider bottomTextProvider:(id)provider centerTextProvider:(id)provider;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)block;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)block;
@end

#endif /* CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText_h */
