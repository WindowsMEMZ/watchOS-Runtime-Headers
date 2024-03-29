//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFImageConvertAction_h
#define WFImageConvertAction_h
@import Foundation;

#include "WFAction.h"

@interface WFImageConvertAction : WFAction
/* class methods */
+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

/* instance methods */
- (id)typeFromImageFormatString:(id)string;
- (id)imageQualityWithQuality:(id)quality imageFormat:(id)format;
- (BOOL)preserveMetadataWithPreserveMetadata:(BOOL)metadata imageFormat:(id)format;
- (void)runAsynchronouslyWithInput:(id)input;
@end

#endif /* WFImageConvertAction_h */
