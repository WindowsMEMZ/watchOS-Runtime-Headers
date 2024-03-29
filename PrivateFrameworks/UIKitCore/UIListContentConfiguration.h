//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIListContentConfiguration_h
#define UIListContentConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "UIContentConfiguration-Protocol.h"
#include "UIImage.h"
#include "UIListContentImageProperties.h"
#include "UIListContentTextProperties.h"

@class NSAttributedString, NSString;

@interface UIListContentConfiguration : NSObject<UIContentConfiguration, NSSecureCoding> {
  /* instance variables */
  struct { unsigned int x :1 hasCustomizedAxesPreservingSuperviewLayoutMargins; unsigned int x :1 hasCustomizedDirectionalLayoutMargins; unsigned int x :1 hasCustomizedPrefersSideBySideTextAndSecondaryText; unsigned int x :1 hasCustomizedImageToTextPadding; unsigned int x :1 hasCustomizedTextToSecondaryTextHorizontalPadding; unsigned int x :1 hasCustomizedTextToSecondaryTextVerticalPadding; unsigned int x :1 hasCustomizedEnforcesMinimumHeight; } _configurationFlags;
  BOOL _enforcesMinimumHeight;
  long long _defaultStyle;
}

@property (nonatomic) BOOL _enforcesMinimumHeight;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIListContentImageProperties *imageProperties;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UIListContentTextProperties *textProperties;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *secondaryAttributedText;
@property (readonly, nonatomic) UIListContentTextProperties *secondaryTextProperties;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) BOOL prefersSideBySideTextAndSecondaryText;
@property (nonatomic) double imageToTextPadding;
@property (nonatomic) double textToSecondaryTextHorizontalPadding;
@property (nonatomic) double textToSecondaryTextVerticalPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)cellConfiguration;
+ (id)subtitleCellConfiguration;
+ (id)valueCellConfiguration;
+ (id)_defaultInsetGroupedCellConfiguration;
+ (id)plainHeaderConfiguration;
+ (id)plainFooterConfiguration;
+ (id)groupedHeaderConfiguration;
+ (id)groupedFooterConfiguration;
+ (id)sidebarCellConfiguration;
+ (id)accompaniedSidebarCellConfiguration;
+ (id)sidebarSubtitleCellConfiguration;
+ (id)accompaniedSidebarSubtitleCellConfiguration;
+ (id)sidebarHeaderConfiguration;
+ (id)_interactiveInsetGroupedHeaderConfiguration;
+ (id)_prominentInsetGroupedHeaderConfiguration;
+ (id)prominentInsetGroupedHeaderConfiguration;
+ (id)extraProminentInsetGroupedHeaderConfiguration;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)updatedConfigurationForState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)makeContentView;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)_setEnforcesMinimumHeight:(BOOL)height;
- (double)_minimumHeightForTraitCollection:(id)collection;
- (void)_setSwiftBridgingImageProperties:(id)properties;
- (void)_setSwiftBridgingTextProperties:(id)properties;
- (void)_setSwiftBridgingSecondaryTextProperties:(id)properties;
@end

#endif /* UIListContentConfiguration_h */
