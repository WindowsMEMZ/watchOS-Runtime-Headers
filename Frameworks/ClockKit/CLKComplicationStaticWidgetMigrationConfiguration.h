//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKComplicationStaticWidgetMigrationConfiguration_h
#define CLKComplicationStaticWidgetMigrationConfiguration_h
@import Foundation;

#include "CLKComplicationWidgetMigrationConfiguration.h"

@class NSString;

@interface CLKComplicationStaticWidgetMigrationConfiguration : CLKComplicationWidgetMigrationConfiguration

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;

/* class methods */
+ (id)staticWidgetMigrationConfigurationWithKind:(id)kind extensionBundleIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithKind:(id)kind extensionBundleIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CLKComplicationStaticWidgetMigrationConfiguration_h */
