//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKPopulationNormsAbstractViewModel_h
#define HKPopulationNormsAbstractViewModel_h
@import Foundation;

#include "HKPopulationNormsViewModelDataSource-Protocol.h"

@class HKHealthStore, NSNumber;
@protocol OS_dispatch_queue;

@interface HKPopulationNormsAbstractViewModel : NSObject<HKPopulationNormsViewModelDataSource>

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleQueryQueue;
@property (retain, nonatomic) NSNumber *cacheBiologicalSexSegmentIndex;
@property (retain, nonatomic) NSNumber *cacheClassificationIndex;
@property (retain, nonatomic) NSNumber *cacheAgeInYears;
@property (retain, nonatomic) NSNumber *cacheLatestSampleValue;
@property (retain, nonatomic) NSNumber *userHasDataPointAvailable;

/* instance methods */
- (id)initWithHealthStore:(id)store;
- (void)_requireConcreteImplementationOfSelector:(SEL)selector;
- (id)associatedSampleType;
- (id)classificationIndexForSampleValue:(double)value age:(long long)age sex:(long long)sex;
- (id)footerText;
- (unsigned long long)numberOfBiologicalSexSegments;
- (id)localizedBiologicalSexTitles;
- (id)currentLocalizedClassificationDescription;
- (id)currentLocalizedClassificationTitle;
- (id)currentLocalizedClassificationName;
- (long long)_biologicalSexForSexSegmentIndex:(unsigned long long)index;
- (unsigned long long)_biologicalSexSegmentIndexForSex:(long long)sex;
- (long long)currentBiologicalSex;
- (unsigned long long)currentBiologicalSexSegmentIndex;
- (void)setBiologicalSexSegmentIndex:(unsigned long long)index;
- (BOOL)isCurrentClassificationAvailable;
- (unsigned long long)currentClassificationIndex;
- (void)setClassificationIndex:(unsigned long long)index;
- (unsigned long long)classificationIndexForLevelIndex:(unsigned long long)index;
- (id)currentAgeInYears;
- (id)userAgeBucketIndex;
- (id)userLatestSampleValue;
- (void)clearUserCharacteristicCache;
- (void)prepareUserCharacteristicCacheWithHandler:(id /* block */)handler;
- (id)viewTitle;
- (id)chartTitle;
- (id)levelsTitle;
- (id)quantityUnitTitle;
- (id)ageBucketsTitle;
- (id)seriesHighlightedColor;
- (id)seriesHighlightedSegmentColor;
- (unsigned long long)numberOfClassifications;
- (BOOL)shouldShowClassificationTitle;
- (id)localizedClassificationTitleForIndex:(unsigned long long)index;
- (id)classificationIdentifierForIndex:(unsigned long long)index;
- (id)localizedClassificationNameForIndex:(unsigned long long)index;
- (id)localizedClassificationDescriptionForIndex:(unsigned long long)index;
- (id)currentDataForBiologicalSex;
- (unsigned long long)maximumUserAgeBucketIndex;
- (double)maximumSampleValueQuantity;
- (double)minimumSampleValueQuantity;
- (id)hk_UIAutomationIdentifier;
@end

#endif /* HKPopulationNormsAbstractViewModel_h */
