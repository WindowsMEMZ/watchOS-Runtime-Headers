//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicationAnalyticsGenericFieldsProvider_h
#define HKMedicationAnalyticsGenericFieldsProvider_h
@import Foundation;

@protocol HKAnalyticsHealthDataSource;

@interface HKMedicationAnalyticsGenericFieldsProvider : NSObject {
  /* instance variables */
  NSObject<HKAnalyticsHealthDataSource> *_dataSource;
}

/* instance methods */
- (id)initWithDataSource:(id)source;
- (id)activePairedWatchProductType;
- (id)biologicalSex;
- (id)userAgeForCurrentDate:(id)date;
- (BOOL)isOntologySupportedRegion;
- (id)bucketedUserAgeForCurrentDate:(id)date;
@end

#endif /* HKMedicationAnalyticsGenericFieldsProvider_h */
