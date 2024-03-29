//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMCPluginServer_h
#define HDMCPluginServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDDiagnosticObject-Protocol.h"
#include "HDMCProfileExtension.h"
#include "HDMenstrualCyclesPluginServerInterface-Protocol.h"

@class HDHealthStoreClient, HDProfile, NSString;
@protocol OS_dispatch_queue;

@interface HDMCPluginServer : HDStandardTaskServer<HDDiagnosticObject, HDMenstrualCyclesPluginServerInterface> {
  /* instance variables */
  HDProfile *_profile;
  HDMCProfileExtension *_profileExtension;
  HDHealthStoreClient *_client;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createTaskServerWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate error:(id *)error;
+ (id)taskIdentifier;
+ (id)requiredEntitlements;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate profileExtension:(id)extension;
- (void)remote_fetchScheduledNotificationsWithCompletion:(id /* block */)completion;
- (void)remote_saveDaySummaries:(id)summaries canOverrideCreationDate:(BOOL)date completion:(id /* block */)completion;
- (void)remote_saveMenstrualFlow:(long long)flow dayIndex:(long long)index updateAdjacentDays:(BOOL)days completion:(id /* block */)completion;
- (void)remote_saveMenstrualFlowByDayIndex:(id)index completion:(id /* block */)completion;
- (void)remote_confirmAndSaveDeviationWithMenstrualFlowByDayIndex:(id)index intermenstrualBleedingByDayIndex:(id)index addedCycleFactors:(id)factors initialAnalysisWindow:(struct { long long x0; long long x1; })window completion:(id /* block */)completion;
- (void)remote_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })range completion:(id /* block */)completion;
- (void)remote_savePeriodNotYetStartedWithCompletion:(id /* block */)completion;
- (void)remote_savePeriodNotYetEndedWithCompletion:(id /* block */)completion;
- (void)remote_savePeriodStartedOnDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_savePeriodStartedOnDayIndex:(long long)index endedOnDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_savePeriodEndedOnDayIndex:(long long)index completion:(id /* block */)completion;
- (void)remote_triggerAnalysisForDebugReason:(id)reason completion:(id /* block */)completion;
- (BOOL)_queue_reconcileSamplesToDeriveDaySummary:(id)summary analysis:(id)analysis canOverrideCreationDate:(BOOL)date error:(id *)error;
- (BOOL)_queue_updateUnderlyingSamplesToReplaceDaySummary:(id)summary withDaySummary:(id)summary calendarCache:(id)cache canOverrideCreationDate:(BOOL)date error:(id *)error;
- (id)_samplesToInsertForUpdateFromDaySummary:(id)summary toDaySummary:(id)summary typesToDelete:(id *)delete calendarCache:(id)cache;
- (BOOL)_queue_saveMenstrualFlowUpdatingAdjacentDays:(long long)days dayIndex:(long long)index calendarCache:(id)cache error:(id *)error;
- (void)_submitPredictionAccuracyAnalyticWithDayIndex:(long long)index oldMenstrualFlow:(long long)flow newMenstrualFlow:(long long)flow analysis:(id)analysis isLoggingMultipleDays:(BOOL)days;
- (BOOL)_queue_saveMenstrualFlowByDayIndex:(id)index calendarCache:(id)cache error:(id *)error;
- (BOOL)_queue_saveIntermenstrualBleedingByDayIndex:(id)index calendarCache:(id)cache error:(id *)error;
- (BOOL)_queue_saveLastMenstrualPeriodWithDayIndexRange:(struct { long long x0; long long x1; })range calendarCache:(id)cache error:(id *)error;
- (BOOL)_queue_saveMenstrualFlow:(long long)flow forEachDayInRange:(struct { long long x0; long long x1; })range calendarCache:(id)cache error:(id *)error;
- (BOOL)_queue_savePeriodStartedOnDayIndex:(long long)index endedOnDayIndex:(long long)index calendarCache:(id)cache error:(id *)error;
- (id)_queue_mostRecentMenstrualFlowSampleWithError:(id *)error requiringBeforeDay:(long long)day calendarCache:(id)cache;
- (BOOL)_queue_updateStartOfCycleMetadataForModifiedDayIndex:(long long)index calendarCache:(id)cache canOverrideCreationDate:(BOOL)date error:(id *)error;
- (BOOL)_queue_insertSamplesWithClientSource:(id)source error:(id *)error;
- (BOOL)_queue_insertSamplesWithClientSource:(id)source creationDate:(id)date error:(id *)error;
- (void)_queue_updateLastLoggedInExperienceDate;
- (BOOL)_queue_deleteSamplesOfType:(id)type onDayIndex:(long long)index calendarCache:(id)cache error:(id *)error;
- (void)_triggerImmediateSync;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)diagnosticDescription;
@end

#endif /* HDMCPluginServer_h */
