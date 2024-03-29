//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRAFibBurdenControlServer_h
#define HDHRAFibBurdenControlServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDHRAFibBurdenNotificationManaging-Protocol.h"
#include "HKHRAFibBurdenControlServer-Protocol.h"
#include "HKHRAFibBurdenSevenDayAnalysisScheduling-Protocol.h"

@class NSString;

@interface HDHRAFibBurdenControlServer : HDStandardTaskServer<HKHRAFibBurdenControlServer> {
  /* instance variables */
  NSObject<HKHRAFibBurdenSevenDayAnalysisScheduling> *_scheduler;
  NSObject<HDHRAFibBurdenNotificationManaging> *_notificationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createTaskServerWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate error:(id *)error;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;
+ (id)taskIdentifier;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate scheduler:(id)scheduler notificationManager:(id)manager;
- (void)remote_triggerAnalysis;
- (void)remote_determineIfAnalysisCanRunWithFeatureStatus:(id)status completion:(id /* block */)completion;
- (void)remote_addTachogramClassificationForSampleUUID:(id)uuid hasAFib:(BOOL)afib completion:(id /* block */)completion;
- (void)remote_queryAllTachogramClassificationsWithCompletion:(id /* block */)completion;
- (void)remote_queryTachogramClassificationForSampleUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_deleteAllTachogramClassificationsWithCompletion:(id /* block */)completion;
- (void)remote_deleteTachogramClassificationForSampleUUID:(id)uuid completion:(id /* block */)completion;
- (void)remote_determineMajorityTimeZoneForStartDayIndex:(long long)index endDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_queryEligibleTachogramsForStartDayIndex:(long long)index endDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForWeekday:(long long)weekday completion:(id /* block */)completion;
- (void)remote_queryEligibleTachogramsForPreviousSixWeeksForTimeOfDayBucket:(long long)bucket completion:(id /* block */)completion;
- (void)remote_addTachogramsForStartDayIndex:(long long)index endDayIndex:(long long)index chanceOfAFib:(id)afib chanceOfWrite:(id)write minutesBetweenSamples:(id)samples startingHour:(id)hour endingHour:(id)hour completion:(id /* block */)completion;
- (void)_addTachogramsForStartDayIndex:(long long)index endDayIndex:(long long)index chanceOfAFib:(double)afib chanceOfWrite:(double)write minutesBetweenSamples:(long long)samples startingHour:(long long)hour endingHour:(long long)hour completion:(id /* block */)completion;
- (void)remote_performAnalysisForWeekContainingDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_injectBurdenValues:(id)values completion:(id /* block */)completion;
- (void)remote_sendNotificationWithMode:(id)mode completion:(id /* block */)completion;
- (void)remote_fetchSevenDayAnalysisBreadcrumbsWithCompletion:(id /* block */)completion;
- (id)_clientRemoteObjectProxy;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HDHRAFibBurdenControlServer_h */
