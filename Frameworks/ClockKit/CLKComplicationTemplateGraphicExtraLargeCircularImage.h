//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateGraphicExtraLargeCircularImage_h
#define CLKComplicationTemplateGraphicExtraLargeCircularImage_h
@import Foundation;

#include "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#include "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider;

/* class methods */
+ (id)templateWithImageProvider:(id)provider;

/* instance methods */
- (id)initWithImageProvider:(id)provider;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)block;
@end

#endif /* CLKComplicationTemplateGraphicExtraLargeCircularImage_h */
