//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderingContext_h
#define UIKBRenderingContext_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIKBRenderConfig.h"

@interface UIKBRenderingContext : NSObject<NSCopying>

@property (nonatomic) unsigned long long shiftState;
@property (nonatomic) long long keyboardType;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (nonatomic) long long handBias;
@property (nonatomic) BOOL isFloating;

/* class methods */
+ (id)renderingContextForRenderConfig:(id)config;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithRenderConfig:(id)config;
@end

#endif /* UIKBRenderingContext_h */
