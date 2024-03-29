//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBundleComplication_h
#define NTKBundleComplication_h
@import Foundation;

#include "NTKComplication.h"

@class CLKCBundleComplication, CLKComplicationDescriptor;

@interface NTKBundleComplication : NTKComplication

@property (readonly, nonatomic) CLKCBundleComplication *complication;
@property (readonly, nonatomic) CLKComplicationDescriptor *complicationDescriptor;

/* class methods */
+ (id)bundledComplicationWithBundleIdentifier:(id)identifier appBundleIdentifier:(id)identifier;
+ (id)bundledComplicationWithBundleIdentifier:(id)identifier appBundleIdentifier:(id)identifier complicationDescriptor:(id)descriptor;
+ (id)bundledComplicationWithComplication:(id)complication;
+ (BOOL)supportsSecureCoding;
+ (id)_revertedBundleComplicationFromJSONDictionary:(id)jsondictionary;

/* instance methods */
- (id)_migrateToFamily:(long long)family withAllowedComplications:(id)complications;
- (id)ntk_sectionIdentifier;
- (id)_generateUniqueIdentifier;
- (id)analyticsIdentifier;
- (id)powerlogIdentifier;
- (id)appIdentifier;
- (BOOL)supportsComplicationFamily:(long long)family forDevice:(id)device;
- (id)customDailySnapshotKeyForFamily:(long long)family device:(id)device;
- (id)description;
- (id)localizedKeylineLabelText;
- (id)localizedRichKeylineLabelText;
- (id)localizedDetailText;
- (id)localizedRichDetailText;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_initWithComplicationType:(unsigned long long)type JSONDictionary:(id)jsondictionary;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_addKeysToJSONDictionary:(id)jsondictionary;
@end

#endif /* NTKBundleComplication_h */
