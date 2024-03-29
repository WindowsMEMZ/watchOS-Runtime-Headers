//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFWallpaperCompoundDeviceConfiguration_h
#define PFWallpaperCompoundDeviceConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PFParallaxLayoutConfiguration.h"

@interface PFWallpaperCompoundDeviceConfiguration : NSObject<NSSecureCoding>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } deviceSize;
@property (readonly, nonatomic) PFParallaxLayoutConfiguration *portraitConfiguration;
@property (readonly, nonatomic) PFParallaxLayoutConfiguration *landscapeConfiguration;

/* class methods */
+ (id)bestConfigurationForScreenSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale;
+ (id)genericConfiguration;
+ (id)genericPadConfiguration;
+ (id)callServicesConfigurationWithScreenSize:(struct CGSize { double x0; double x1; })size titleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds parallaxPadding:(struct CGSize { double x0; double x1; })padding;
+ (id)genericCallServicesConfigurationWithTitleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
+ (id)deviceCallServicesConfigurationWithTitleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
+ (id)deviceConfiguration;
+ (BOOL)deviceSupportsLandscapeConfiguration;
+ (id)configurationWithDeviceName:(id)name;
+ (id)compoundDeviceConfigurationFromDictionary:(id)dictionary error:(id *)error;
+ (BOOL)supportsSecureCoding;
+ (id)knownDeviceConfigurations;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToLayoutConfiguration:(id)configuration;
- (id)initWithPortraitConfiguration:(id)configuration landscapeConfiguration:(id)configuration;
- (id)dictionaryRepresentation;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PFWallpaperCompoundDeviceConfiguration_h */
