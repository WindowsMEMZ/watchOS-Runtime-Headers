//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBasicHeaderFooterContentViewConfiguration_h
#define _UIBasicHeaderFooterContentViewConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "_UIContentViewConfiguration-Protocol.h"
#include "_UIContentViewLabelConfiguration.h"

@class NSString;

@interface _UIBasicHeaderFooterContentViewConfiguration : NSObject<_UIContentViewConfiguration, NSSecureCoding> {
  /* instance variables */
  struct { unsigned int x :1 hasCustomizedAxesPreservingSuperviewLayoutMargins; unsigned int x :1 hasCustomizedDirectionalLayoutMargins; } _configurationFlags;
  long long _defaultStyle;
}

@property (readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) BOOL resetsVerticalLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultHeaderConfiguration;
+ (id)defaultFooterConfiguration;
+ (id)defaultGroupedHeaderConfiguration;
+ (id)defaultGroupedFooterConfiguration;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)updatedConfigurationForState:(unsigned long long)state;
- (id)updatedConfigurationForState:(unsigned long long)state traitCollection:(id)collection;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)createContentView;
- (void)applyToContentView:(id)view;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* _UIBasicHeaderFooterContentViewConfiguration_h */
