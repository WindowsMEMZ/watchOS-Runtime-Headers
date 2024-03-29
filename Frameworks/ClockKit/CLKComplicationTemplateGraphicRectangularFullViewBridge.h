//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationTemplateGraphicRectangularFullViewBridge_h
#define CLKComplicationTemplateGraphicRectangularFullViewBridge_h
@import Foundation;

#include "CLKComplicationTemplate.h"

@class NSData;

@interface CLKComplicationTemplateGraphicRectangularFullViewBridge : CLKComplicationTemplate

@property (retain, nonatomic) NSData *contentData;

/* instance methods */
- (long long)compatibleFamily;
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(id /* block */)block;
- (id)viewDataKeyForSwiftUIViewKey:(id)key;
- (BOOL)usesSwiftUI;
- (BOOL)needsSerializableCopy;
- (id)serializableCopyWithImageProviders:(id)providers;
@end

#endif /* CLKComplicationTemplateGraphicRectangularFullViewBridge_h */
