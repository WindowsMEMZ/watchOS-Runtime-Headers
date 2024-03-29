//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHeadphoneAudioExposureStatisticsBucket_h
#define HDHeadphoneAudioExposureStatisticsBucket_h
@import Foundation;

@class HDStatisticsCollectionCalculator, HDStatisticsCollectionCalculatorDefaultDataSource, HKStatistics, NSDate, NSDateInterval, NSNumber;
@protocol HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDHeadphoneAudioExposureStatisticsBucket : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  HDStatisticsCollectionCalculatorDefaultDataSource *_dataSource;
  NSObject<HDStatisticsCollectionCalculatorSourceOrderProvider> *_sourceOrderProvider;
}

@property (readonly, nonatomic) HDStatisticsCollectionCalculator *primaryCalculator;
@property (readonly, nonatomic) HDStatisticsCollectionCalculator *journaledCalculator;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *earliestStartDate;
@property (readonly, nonatomic) BOOL boundedInterval;
@property (readonly, nonatomic) NSNumber *anchor;
@property (retain, nonatomic) HKStatistics *previousStatistics;
@property (nonatomic) BOOL includesPrunableData;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL includesJournaledSamples;
@property (readonly, nonatomic) BOOL hasPreviousStatistics;

/* class methods */
+ (id)makeBucketsForProfile:(id)profile earliestStartDate:(id)date;
+ (id)_makeBucketsForNowDate:(id)date earliestStartDate:(id)date profile:(id)profile;
+ (id)_currentDoseStringForEndDate:(id)date earliestStartDate:(id)date profile:(id)profile;
+ (id)_makePrimaryCalculator;
+ (id)_makeJournaledCalculator;
+ (id)_makeDataSourceWithProfile:(id)profile;
+ (id)_makeSourceOrderProviderWithProfile:(id)profile;
+ (id)bucketForArchivedRepresentation:(id)representation profile:(id)profile error:(id *)error;

/* instance methods */
- (id)_initWithProfile:(id)profile startDate:(id)date earliestStartDate:(id)date boundedInterval:(BOOL)interval;
- (id)_initWithProfile:(id)profile primaryCalculator:(id)calculator journaledCalculator:(id)calculator startDate:(id)date earliestStartDate:(id)date boundedInterval:(BOOL)interval anchor:(id)anchor previousStatistics:(id)statistics includesPrunableData:(BOOL)data;
- (id)copyWithEarliestStartDate:(id)date resetDoseToZero:(BOOL)zero error:(id *)error;
- (id)_lock_copyWithEarliestStartDate:(id)date resetDoseToZero:(BOOL)zero error:(id *)error;
- (id)archivedRepresentationWithError:(id *)error;
- (id)_lock_archivedRepresentationWithError:(id *)error;
- (id)snapshotStatisticsWithError:(id *)error;
- (id)_lock_currentStatisticsWithError:(id *)error;
- (BOOL)isExpiredForNowDate:(id)date;
- (id)queryForInitialStatisticsWithError:(id *)error;
- (id)updateWithSampleBatch:(id)batch error:(id *)error;
- (void)unitTesting_setPreviousStatistics:(id)statistics;
- (void)unitTesting_setIncludesPrunableData:(BOOL)data;
- (id)_lock_dateInterval;
- (id)_lock_journalQuantitySamples:(id)samples error:(id *)error;
- (id)_lock_addQuantitySamples:(id)samples anchor:(id)anchor error:(id *)error;
- (void)_enableOverlappingProcessingInPrimaryCalculator:(BOOL)calculator;
- (id)_lock_queryForInitialStatisticsWithError:(id *)error;
- (id)_lock_fetchIncludesPrunableDataWithError:(id *)error;
@end

#endif /* HDHeadphoneAudioExposureStatisticsBucket_h */
