//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCombinedAssetSearchResult_h
#define PLCombinedAssetSearchResult_h
@import Foundation;

#include "PLAssetSearchResult.h"

@class NSArray, NSMutableArray;

@interface PLCombinedAssetSearchResult : PLAssetSearchResult {
  /* instance variables */
  unsigned long long _assetCount;
  NSArray *_assetUUIDs;
}

@property (retain, nonatomic) NSMutableArray *assetSearchResults;
@property (nonatomic) BOOL resultsCanOverlap;
@property (readonly, nonatomic) NSArray *groupResults;

/* instance methods */
- (id)initWithAssetSearchResults:(id)results canOverlap:(BOOL)overlap;
- (id)initWithAssetSearchResult:(id)result;
- (void)addAssetSearchResult:(id)result isMainSearchResult:(BOOL)result;
- (unsigned long long)categoryMask;
- (id)groupDescription;
- (unsigned long long)assetCount;
- (id)assetUUIDs;
@end

#endif /* PLCombinedAssetSearchResult_h */
