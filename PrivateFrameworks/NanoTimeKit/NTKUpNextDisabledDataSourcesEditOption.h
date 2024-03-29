//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKUpNextDisabledDataSourcesEditOption_h
#define NTKUpNextDisabledDataSourcesEditOption_h
@import Foundation;

#include "NTKEditOption.h"

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;

/* class methods */
+ (id)optionWithDisabledDataSourceIdentifiers:(id)identifiers forDevice:(id)device;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDisabledDataSourceIdentifiers:(id)identifiers forDevice:(id)device;
- (id)initWithJSONObjectRepresentation:(id)representation forDevice:(id)device;
- (id)dailySnapshotKey;
- (id)localizedName;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)JSONObjectRepresentation;
- (id)_alphabeticallySortedIdentifiers;
- (BOOL)isValidOption;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* NTKUpNextDisabledDataSourcesEditOption_h */
