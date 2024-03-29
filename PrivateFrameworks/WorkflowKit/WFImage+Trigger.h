//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFImage_Trigger_h
#define WFImage_Trigger_h
@import Foundation;

@interface WFImage (Trigger)
/* class methods */
+ (id)workflowKitImageNamed:(id)named;
+ (id)triggerDisplaySymbolNamed:(id)named renderingMode:(unsigned long long)mode;
+ (id)triggerDisplaySymbolNamed:(id)named hierarchicalColors:(id)colors;
+ (id)triggerConfigurationSymbolNamed:(id)named renderingMode:(unsigned long long)mode;
+ (id)triggerConfigurationSymbolNamed:(id)named renderingMode:(unsigned long long)mode pointSize:(double)size;
+ (id)triggerConfigurationSymbolNamed:(id)named hierarchicalColors:(id)colors;
@end

#endif /* WFImage_Trigger_h */
