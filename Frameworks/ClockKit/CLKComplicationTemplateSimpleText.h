//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateSimpleText_h
#define CLKComplicationTemplateSimpleText_h
@import Foundation;

#include "CLKComplicationTemplate.h"
#include "CLKTextProvider.h"

@interface CLKComplicationTemplateSimpleText : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *textProvider;

/* class methods */
+ (id)templateWithTextProvider:(id)provider;

/* instance methods */
- (id)initWithTextProvider:(id)provider;
- (long long)compatibleFamily;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)block;
@end

#endif /* CLKComplicationTemplateSimpleText_h */
