//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAssetAddedDateProperties_h
#define PHAssetAddedDateProperties_h
@import Foundation;

#include "PHBatchFetchedAssetPropertySet.h"

@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

/* class methods */
+ (id)propertiesToFetch;
+ (long long)batchSize;
+ (long long)cacheSize;
+ (BOOL)useNoIndexSelf;
+ (BOOL)useObjectFetchingContext;
+ (id)propertiesToSortBy;
@end

#endif /* PHAssetAddedDateProperties_h */
