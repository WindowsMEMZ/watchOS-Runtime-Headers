//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBackgroundViewConfiguration_h
#define _UIBackgroundViewConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UIColor.h"
#include "UIImage.h"
#include "UIView.h"
#include "UIVisualEffect.h"
#include "_UIBackgroundConfigurationInternal-Protocol.h"

@class NSString;

@interface _UIBackgroundViewConfiguration : NSObject<_UIBackgroundConfigurationInternal, NSCopying, NSSecureCoding> {
  /* instance variables */
  struct { unsigned int x :1 hasCustomizedCustomView; unsigned int x :1 hasCustomizedCornerRadius; unsigned int x :1 hasCustomizedBackgroundInsets; unsigned int x :1 hasCustomizedEdgesAddingLayoutMarginsToBackgroundInsets; unsigned int x :1 hasCustomizedBackgroundColorOrMode; unsigned int x :1 hasCustomizedVisualEffect; unsigned int x :1 hasCustomizedStrokeColorOrMode; unsigned int x :1 hasCustomizedStrokeWidth; unsigned int x :1 hasCustomizedStrokeOutset; } _configurationFlags;
  BOOL _visualEffectAllowsTransparentBlurring;
  long long _defaultStyle;
  unsigned long long _maskedCorners;
  NSString *_visualEffectGroupName;
  long long _shadowType;
}

@property (retain, nonatomic) UIView *customView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } backgroundInsets;
@property (nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets;
@property (nonatomic) long long backgroundColorMode;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIVisualEffect *visualEffect;
@property (nonatomic) long long strokeColorMode;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (nonatomic) double strokeOutset;
@property (readonly, nonatomic) BOOL isTintBackgroundColor;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long imageContentMode;
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
+ (id)plainListCellConfiguration;
+ (id)plainListHeaderFooterConfiguration;
+ (id)groupedListCellConfiguration;
+ (id)groupedListHeaderFooterConfiguration;
+ (id)insetGroupedListCellConfiguration;
+ (id)insetGroupedListHeaderFooterConfiguration;
+ (id)outlineRootParentCellConfiguration;
+ (id)outlineCellConfiguration;
+ (id)defaultPlainListCellConfigurationForState:(unsigned long long)state;
+ (id)defaultPlainListHeaderFooterConfigurationForState:(unsigned long long)state;
+ (id)defaultGroupedListCellConfigurationForState:(unsigned long long)state;
+ (id)defaultInsetGroupedListCellConfigurationForState:(unsigned long long)state;
+ (id)defaultInsetGroupedListHeaderFooterConfigurationForState:(unsigned long long)state;
+ (id)defaultGroupedListHeaderFooterConfigurationForState:(unsigned long long)state;
+ (id)defaultOutlineParentCellConfigurationForState:(unsigned long long)state;
+ (id)defaultOutlineCellConfigurationForState:(unsigned long long)state;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)updatedConfigurationForState:(unsigned long long)state;
- (id)updatedConfigurationForState:(unsigned long long)state traitCollection:(id)collection;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_hasBackgroundColor;
- (BOOL)_hasStroke;
- (BOOL)_hasBackgroundFill;
- (BOOL)_backgroundFillIsEqual:(id)equal withTintColor:(id)color;
- (id)_updatedConfigurationForState:(id)state;
- (id)resolvedBackgroundColorForTintColor:(id)color;
- (id)resolvedStrokeColorForTintColor:(id)color;
- (BOOL)_isEqualToInternalConfigurationQuick:(id)quick;
- (void)_setCornerRadius:(double)radius;
- (long long)_strokeLocation;
- (void)_setStrokeLocation:(long long)location;
- (void)__setMaskedCorners:(unsigned long long)corners;
- (void)__setVisualEffectGroupName:(id)name;
- (void)__setVisualEffectAllowsTransparentBlurring:(BOOL)blurring;
- (void)_setShadowType:(long long)type;
@end

#endif /* _UIBackgroundViewConfiguration_h */
