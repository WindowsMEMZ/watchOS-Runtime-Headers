//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLTopAssetsSearchResult_h
#define PLTopAssetsSearchResult_h
@import Foundation;

#include "PSITopAssetsResult.h"

@class NSArray;

@interface PLTopAssetsSearchResult : NSObject

@property (readonly, nonatomic) PSITopAssetsResult *topAssetsResults;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSArray *assetUUIDsV2;

/* instance methods */
- (id)initWithTopAssetsResult:(id)result;
- (id)initWithAssetUUIDs:(id)uuids;
@end

#endif /* PLTopAssetsSearchResult_h */
