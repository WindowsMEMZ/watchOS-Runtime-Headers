//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateGraphicCircularStackViewTextBridge_h
#define CLKComplicationTemplateGraphicCircularStackViewTextBridge_h
@import Foundation;

#include "CLKComplicationTemplateGraphicCircular.h"
#include "CLKTextProvider.h"

@class NSData;

@interface CLKComplicationTemplateGraphicCircularStackViewTextBridge : CLKComplicationTemplateGraphicCircular

@property (retain, nonatomic) NSData *contentData;
@property (copy, nonatomic) CLKTextProvider *textProvider;

/* instance methods */
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)block;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)block;
- (id)viewDataKeyForSwiftUIViewKey:(id)key;
- (BOOL)usesSwiftUI;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)providers;
@end

#endif /* CLKComplicationTemplateGraphicCircularStackViewTextBridge_h */
