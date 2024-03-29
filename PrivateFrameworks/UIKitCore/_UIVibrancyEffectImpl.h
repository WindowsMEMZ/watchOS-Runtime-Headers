//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIVibrancyEffectImpl_h
#define _UIVibrancyEffectImpl_h
@import Foundation;

@interface _UIVibrancyEffectImpl : NSObject
/* class methods */
+ (id)implementationFromCoder:(id)coder;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)setEffect:(id)effect;
- (long long)style;
- (long long)vibrancyStyle;
- (BOOL)invertAutomaticStyle;
- (id)implementationForUserInterfaceStyle:(long long)style;
- (id)implementationReplacingTintColor:(id)color;
- (void)_updateEffectDescriptor:(id)descriptor forEnvironment:(id)environment usage:(long long)usage;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)environment toEnvironment:(id)environment usage:(long long)usage;
- (void)appendDescriptionTo:(id)to;
@end

#endif /* _UIVibrancyEffectImpl_h */
