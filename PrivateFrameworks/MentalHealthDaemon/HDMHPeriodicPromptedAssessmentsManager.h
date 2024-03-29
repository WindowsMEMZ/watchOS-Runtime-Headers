//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMHPeriodicPromptedAssessmentsManager_h
#define HDMHPeriodicPromptedAssessmentsManager_h
@import Foundation;

#include "HDDataObserver-Protocol.h"

@class HDProfile, HKObserverSet, NSCalendar, NSDate, NSString, NSUserDefaults;

@interface HDMHPeriodicPromptedAssessmentsManager : NSObject<HDDataObserver>

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (copy, nonatomic) NSCalendar *unitTest_gregorianCalendar;
@property (retain, nonatomic) NSUserDefaults *cadenceOverrideDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)dealloc;
- (BOOL)promptedAssessment:(id *)assessment featureStatus:(id)status error:(id *)error;
- (id)_promptedAssessmentEligibilityStartDateWithFeatureStatus:(id)status error:(id *)error;
- (id)_mostRecentAssessmentInteractionDateWithFeatureSettings:(id)settings error:(id *)error;
- (id)_mostRecentAssessmentDateWithError:(id *)error;
- (id)_mostRecentSampleStartDateForSampleType:(id)type error:(id *)error;
- (id)_lastPromptAcknowledgmentDateWithFeatureSettings:(id)settings;
- (id)_currentDate;
- (id)_currentGregorianCalendar;
- (long long)_periodicAssessmentPromptCadenceInDays;
- (void)registerObserver:(id)observer;
- (void)_startObserving;
- (void)unregisterObserver:(id)observer;
- (void)_stopObserving;
- (void)_notifyObserversForPromptedAssessmentUpdate;
- (void)samplesAdded:(id)added anchor:(id)anchor;
- (void)samplesOfTypesWereRemoved:(id)removed anchor:(id)anchor;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* HDMHPeriodicPromptedAssessmentsManager_h */
