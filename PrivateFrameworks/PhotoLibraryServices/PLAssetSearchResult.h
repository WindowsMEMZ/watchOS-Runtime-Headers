//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetSearchResult_h
#define PLAssetSearchResult_h
@import Foundation;

#include "PLSearchResult.h"

@class NSArray, NSDate, NSString;

@interface PLAssetSearchResult : PLSearchResult

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSDate *sortDate;
@property (readonly, nonatomic) NSString *identifier;

/* instance methods */
- (unsigned long long)type;
- (id)keyAssetUUID;
- (unsigned long long)assetCount;
- (id)description;
@end

#endif /* PLAssetSearchResult_h */
