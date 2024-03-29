//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCompactMomentClustering_h
#define PLCompactMomentClustering_h
@import Foundation;

@class NSSet;

@interface PLCompactMomentClustering : NSObject {
  /* instance variables */
  NSSet *_locationsOfInterest;
  NSSet *_frequentLocations;
}

/* instance methods */
- (id)initWithDataManager:(id)manager frequentLocations:(id)locations;
- (void)dealloc;
- (id)newAssetClusterFromAssetsSortedByDate:(id)date;
- (id)assetsByLocationTypeFromAssets:(id)assets;
- (id)createAssetClustersForAssetsInDay:(id)day;
- (id)_runDBSCANClusteringWithAssets:(id)assets;
- (id)_mergeAssetClustersWithLocation:(id)location withAssetClustersWithoutLocation:(id)location;
- (id)_assetClustersFromDataClusters:(id)clusters;
- (id)_processedLocationTypeByAssetUUIDFromAssets:(id)assets;
- (unsigned short)_validLocationTypeForBucketingAssets:(unsigned short)assets;
- (id)_shareStateByAssetUUIDFromAssets:(id)assets momentHasMixedOwnership:(BOOL *)ownership;
- (id)_clusterAssetsWithUsableLocation:(id)location;
- (id)_clusterAssetsWithUnusableLocation:(id)location;
@end

#endif /* PLCompactMomentClustering_h */
