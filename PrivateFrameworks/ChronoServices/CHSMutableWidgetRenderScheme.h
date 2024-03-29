//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSMutableWidgetRenderScheme_h
#define CHSMutableWidgetRenderScheme_h
@import Foundation;

#include "CHSWidgetRenderScheme.h"

@interface CHSMutableWidgetRenderScheme : CHSWidgetRenderScheme

@property (@dynamic, nonatomic) unsigned long long renderingMode;
@property (@dynamic, nonatomic) unsigned long long backgroundViewPolicy;

/* instance methods */
- (void)setRenderingModes:(unsigned long long)modes;
- (void)setOpaque:(BOOL)opaque;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CHSMutableWidgetRenderScheme_h */
