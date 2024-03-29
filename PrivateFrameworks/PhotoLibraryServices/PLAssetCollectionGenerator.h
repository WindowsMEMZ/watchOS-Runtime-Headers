//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetCollectionGenerator_h
#define PLAssetCollectionGenerator_h
@import Foundation;

#include "PLFrequentLocationManager.h"
#include "PLLibraryClustererDelegate-Protocol.h"
#include "PLLocalCreationDateCreator.h"
#include "PLMomentGenerationDataManagement-Protocol.h"

@class NSDateFormatter, NSMutableArray, NSMutableSet, NSString;

@interface PLAssetCollectionGenerator : NSObject<PLLibraryClustererDelegate>

@property (weak, nonatomic) NSObject<PLMomentGenerationDataManagement> *manager;
@property (retain, nonatomic) PLFrequentLocationManager *frequentLocationManager;
@property (retain, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator;
@property (retain, nonatomic) NSMutableSet *usedMomentObjectIDs;
@property (retain, nonatomic) NSMutableSet *insertedOrUpdatedMoments;
@property (retain, nonatomic) NSMutableArray *momentsFromAssetClusters;
@property (retain, nonatomic) NSDateFormatter *debugDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_createMomentOrUpdateForAssetCluster:(id)cluster existingMomentDataForAssets:(id)assets dataManager:(id)manager usedMomentObjectIDs:(id)ids debugDateFormatter:(id)formatter;
+ (id)createMomentOrUpdateForAssetCluster:(id)cluster affectedMoment:(id)moment dataManager:(id)manager;

/* instance methods */
- (id)initWithDataManager:(id)manager frequentLocationManager:(id)manager localCreationDateCreator:(id)creator;
- (id)processMomentsWithAssets:(id)assets affectedMoments:(id)moments;
- (id)_processMomentsCollectionsYearsWithAssets:(id)assets affectedMoments:(id)moments;
- (id)_createMomentOrUpdateForAssetCluster:(id)cluster existingMomentDataForAssets:(id)assets;
- (void)_cleanUpMoment:(id)moment;
- (id)dataManager;
- (void)logRoutineInformation;
- (id)libraryClusterer:(id)clusterer createMomentClustersForAssetClusters:(id)clusters existingMomentDataForAssets:(id)assets;
@end

#endif /* PLAssetCollectionGenerator_h */
