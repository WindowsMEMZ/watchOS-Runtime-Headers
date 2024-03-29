//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMedicalIDDataManager_h
#define HDMedicalIDDataManager_h
@import Foundation;

#include "HDAnalyticsSubmissionCoordinatorDelegate-Protocol.h"
#include "HDProfile.h"
#include "HDProfileReadyObserver-Protocol.h"

@class NSString;

@interface HDMedicalIDDataManager : NSObject<HDAnalyticsSubmissionCoordinatorDelegate, HDProfileReadyObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)completion;
- (id)initWithProfile:(id)profile;
- (void)dealloc;
- (id)fetchMedicalIDWithError:(id *)error;
- (id)fetchMedicalIDIfSetUpWithError:(id *)error;
- (id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(id *)error;
- (long long)medicalIDSetupStatusWithError:(id *)error;
- (id)medicalIDEmergencyContactsWithError:(id *)error;
- (id)medicalIDClinicalContactsWithError:(id *)error;
- (BOOL)updateMedicalIDWithSyncedData:(id)data provenance:(id)provenance error:(id *)error;
- (BOOL)updateMedicalIDWithLocalData:(id)data error:(id *)error;
- (BOOL)deleteMedicalIDDataWithError:(id *)error;
- (BOOL)obliterateMedicalIDDataWithReason:(id)reason error:(id *)error;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)completion;
- (id)unitTest_medicalIDData;
- (BOOL)unitTest_persistMedicalIDData:(id)iddata;
- (void)profileDidBecomeReady:(id)ready;
- (void)reportDailyAnalyticsWithCoordinator:(id)coordinator completion:(id /* block */)completion;
@end

#endif /* HDMedicalIDDataManager_h */
