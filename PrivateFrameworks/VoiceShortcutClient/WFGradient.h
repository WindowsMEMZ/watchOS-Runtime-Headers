//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFGradient_h
#define WFGradient_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "WFColor.h"

@interface WFGradient : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) WFColor *baseColor;
@property (readonly, nonatomic) WFColor *darkBaseColor;
@property (readonly, nonatomic) WFColor *accessibilityBaseColor;
@property (readonly, nonatomic) WFColor *darkAccessibilityBaseColor;
@property (readonly, nonatomic) WFColor *startColor;
@property (readonly, nonatomic) WFColor *endColor;
@property (readonly, nonatomic) long long blendMode;
@property (readonly, nonatomic) struct CGGradient * CGGradient;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithColor:(id)color;
- (id)initWithStartColor:(id)color endColor:(id)color;
- (id)initWithBaseColor:(id)color startColor:(id)color endColor:(id)color blendMode:(long long)mode;
- (id)initWithBaseColor:(id)color darkBaseColor:(id)color accessibilityBaseColor:(id)color darkAccessibilityBaseColor:(id)color startColor:(id)color endColor:(id)color blendMode:(long long)mode;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (id)baseColorForDarkMode:(BOOL)mode highContrast:(BOOL)contrast;
- (BOOL)isDark;
- (double)perceivedBrightness;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WFGradient_h */
