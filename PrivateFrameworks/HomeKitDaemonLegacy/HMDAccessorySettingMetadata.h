//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccessorySettingMetadata_h
#define HMDAccessorySettingMetadata_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAccessorySettingMergeStrategy.h"
#include "HMFObject-Protocol.h"

@class NSArray, NSString;

@interface HMDAccessorySettingMetadata : HMFObject<HMFObject>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *keyPath;
@property (readonly) long long type;
@property (readonly) unsigned long long properties;
@property (readonly) HMDAccessorySettingMergeStrategy *mergeStrategy;
@property (readonly, copy) NSArray *constraints;
@property (readonly) id value;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)settingsWithArrayRepresenation:(id)represenation parentKeyPath:(id)path;
+ (id)settingWithDictonaryRepresentation:(id)representation parentKeyPath:(id)path;
+ (id)valueWithType:(long long)type constraints:(id)constraints representation:(id)representation;

/* instance methods */
- (id)initWithName:(id)name type:(long long)type properties:(unsigned long long)properties constraints:(id)constraints mergeStrategy:(id)strategy value:(id)value parentKeyPath:(id)path;
- (id)modelsWithParentIdentifier:(id)identifier;
- (id)modelWithParentIdentifier:(id)identifier;
@end

#endif /* HMDAccessorySettingMetadata_h */
