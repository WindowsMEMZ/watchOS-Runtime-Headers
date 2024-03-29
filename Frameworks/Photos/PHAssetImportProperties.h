//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAssetImportProperties_h
#define PHAssetImportProperties_h
@import Foundation;

#include "PHAssetPropertySet.h"

@interface PHAssetImportProperties : PHAssetPropertySet

@property (readonly, nonatomic) long long importedBy;

/* class methods */
+ (id)propertySetName;
+ (id)propertiesToFetch;

/* instance methods */
- (id)initWithFetchDictionary:(id)dictionary asset:(id)asset prefetched:(BOOL)prefetched;
@end

#endif /* PHAssetImportProperties_h */
