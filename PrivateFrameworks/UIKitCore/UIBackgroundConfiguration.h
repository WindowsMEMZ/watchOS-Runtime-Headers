//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIBackgroundConfiguration_h
#define UIBackgroundConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UIColor.h"
#include "UIImage.h"
#include "UIView.h"
#include "UIVisualEffect.h"
#include "_UIBackgroundConfigurationInternal-Protocol.h"

@class NSString;

@interface UIBackgroundConfiguration : NSObject<_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding> {
  /* instance variables */
  struct { unsigned int x :1 hasCustomizedCustomView; unsigned int x :1 hasCustomizedCornerRadius; unsigned int x :1 hasCustomizedBackgroundInsets; unsigned int x :1 hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets; unsigned int x :1 hasCustomizedBackgroundColor; unsigned int x :1 hasCustomizedBackgroundColorTransformer; unsigned int x :1 hasCustomizedVisualEffect; unsigned int x :1 hasCustomizedVisualEffectGroupName; unsigned int x :1 hasCustomizedVisualEffectAllowsTransparentBlurring; unsigned int x :1 hasCustomizedImage; unsigned int x :1 hasCustomizedImageContentMode; unsigned int x :1 hasCustomizedStrokeColor; unsigned int x :1 hasCustomizedStrokeColorTransformer; unsigned int x :1 hasCustomizedStrokeWidth; unsigned int x :1 hasCustomizedStrokeOutset; unsigned int x :1 hasCustomizedMaskedCorners; } _configurationFlags;
  BOOL _visualEffectAllowsTransparentBlurring;
  NSString *_visualEffectGroupName;
  unsigned long long _maskedCorners;
  long long _defaultStyle;
  long long _backgroundColorTransformerIdentifier;
  long long _strokeColorTransformerIdentifier;
  long long _shadowType;
}

@property (nonatomic) unsigned long long _maskedCorners;
@property (copy, nonatomic) NSString *_visualEffectGroupName;
@property (nonatomic) BOOL _visualEffectAllowsTransparentBlurring;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;
@property (nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ backgroundColorTransformer;
@property (copy, nonatomic) UIVisualEffect *visualEffect;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageContentMode;
@property (retain, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) id /* block */ strokeColorTransformer;
@property (nonatomic) double strokeWidth;
@property (nonatomic) double strokeOutset;
@property (readonly, nonatomic) BOOL isTintBackgroundColor;
@property (nonatomic) long long strokeLocation;
@property (nonatomic) unsigned long long __maskedCorners;
@property (copy, nonatomic) NSString *__visualEffectGroupName;
@property (nonatomic) double _cornerRadius;
@property (nonatomic) long long _shadowType;
@property (readonly, nonatomic) BOOL hasBackgroundColor;
@property (readonly, nonatomic) BOOL hasStroke;
@property (readonly, nonatomic) BOOL hasBackgroundFill;
@property (nonatomic) BOOL __visualEffectAllowsTransparentBlurring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)clearConfiguration;
+ (id)listPlainCellConfiguration;
+ (id)listPlainHeaderFooterConfiguration;
+ (id)listGroupedCellConfiguration;
+ (id)listGroupedHeaderFooterConfiguration;
+ (id)_listInsetGroupedCellConfiguration;
+ (id)_listInsetGroupedHeaderFooterConfiguration;
+ (id)listSidebarHeaderConfiguration;
+ (id)listSidebarCellConfiguration;
+ (id)listAccompaniedSidebarCellConfiguration;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)updatedConfigurationForState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_hasBackgroundColor;
- (BOOL)_hasStroke;
- (BOOL)_hasBackgroundFill;
- (BOOL)_backgroundFillIsEqual:(id)equal withTintColor:(id)color;
- (void)_setVisualEffectGroupName:(id)name;
- (void)_setVisualEffectAllowsTransparentBlurring:(BOOL)blurring;
- (void)_setMaskedCorners:(unsigned long long)corners;
- (id)resolvedBackgroundColorForTintColor:(id)color;
- (id)resolvedStrokeColorForTintColor:(id)color;
- (id)_updatedConfigurationForState:(id)state;
- (BOOL)_isEqualToInternalConfigurationQuick:(id)quick;
- (void)_setCornerRadius:(double)radius;
- (void)__setVisualEffectGroupName:(id)name;
- (void)__setMaskedCorners:(unsigned long long)corners;
- (void)__setVisualEffectAllowsTransparentBlurring:(BOOL)blurring;
- (long long)_strokeLocation;
- (void)_setStrokeLocation:(long long)location;
- (void)_setShadowType:(long long)type;
@end

#endif /* UIBackgroundConfiguration_h */
