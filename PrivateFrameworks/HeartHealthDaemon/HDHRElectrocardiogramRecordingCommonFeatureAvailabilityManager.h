//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager_h
#define HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager_h
@import Foundation;

#include "HDDatabaseProtectedDataObserver-Protocol.h"
#include "HDFeatureAvailabilityExtension-Protocol.h"
#include "HDHealthDaemonReadyObserver-Protocol.h"
#include "HDPairedDeviceCapabilityProvidingObserver-Protocol.h"
#include "HDPairedFeatureAttributesProviding-Protocol.h"
#include "HDRegionAvailabilityProviding-Protocol.h"

@class HDProfile, HKFeatureAvailabilityRequirementSet, NSString, NSUserDefaults;
@protocol HDFeatureDisableAndExpiryProviding, HKObserverSet<HKFeatureAvailabilityProvidingObserver;

@interface HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager : NSObject<HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDPairedDeviceCapabilityProvidingObserver, HDFeatureAvailabilityExtension> {
  /* instance variables */
  HDProfile *_profile;
  NSObject<HDPairedFeatureAttributesProviding> *_pairedFeatureAttributesProvider;
  NSObject<HDFeatureDisableAndExpiryProviding> *_disableAndExpiryProvider;
  NSObject<HDRegionAvailabilityProviding> *_regionAvailabilityProvider;
  NSUserDefaults *_cacheDefaults;
  HKObserverSet<HKFeatureAvailabilityProvidingObserver> *_observers;
  unsigned long long _onboardingVersion;
  HKFeatureAvailabilityRequirementSet *_availabilityRequirementSet;
  BOOL _isStandalone;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;

/* instance methods */
- (id)initWithProfile:(id)profile featureIdentifier:(id)identifier onboardingVersion:(unsigned long long)version pairedFeatureAttributesProvider:(id)provider disableAndExpiryProvider:(id)provider regionAvailabilityProvider:(id)provider availabilityRequirementSet:(id)set cacheDefaults:(id)defaults isStandalone:(BOOL)standalone;
- (id)pairedDeviceProvider;
- (id)featureOnboardingRecordWithError:(id *)error;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)completion;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)completion;
- (id)isCurrentOnboardingVersionCompletedWithError:(id *)error;
- (id)canCompleteOnboardingForCountryCode:(id)code error:(id *)error;
- (id)onboardingEligibilityForCountryCode:(id)code error:(id *)error;
- (unsigned long long)_ineligibilityReasonsForRescindedStatus:(long long)status;
- (id)onboardedCountryCodeSupportedStateWithError:(id *)error;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id *)error;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id *)error;
- (id)pairedFeatureAttributesWithError:(id *)error;
- (id)featureAvailabilityRequirementsWithError:(id *)error;
- (id)regionAvailabilityWithError:(id *)error;
- (void)_setOnboardingCompletedForCountryCode:(id)code countryCodeProvenance:(long long)provenance onboardingVersion:(unsigned long long)version date:(id)date settings:(id)settings completion:(id /* block */)completion;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)code countryCodeProvenance:(long long)provenance date:(id)date settings:(id)settings completion:(id /* block */)completion;
- (void)saveOnboardingCompletion:(id)completion settings:(id)settings completion:(id /* block */)completion;
- (void)setFeatureSettingData:(id)data forKey:(id)key completion:(id /* block */)completion;
- (void)setFeatureSettingString:(id)string forKey:(id)key completion:(id /* block */)completion;
- (void)setFeatureSettingNumber:(id)number forKey:(id)key completion:(id /* block */)completion;
- (void)removeFeatureSettingValueForKey:(id)key completion:(id /* block */)completion;
- (void)resetOnboardingWithCompletion:(id /* block */)completion;
- (id)countryAvailabilityVersion;
- (void)registerObserver:(id)observer queue:(id)queue;
- (void)unregisterObserver:(id)observer;
- (void)pairedDeviceCapabilitiesDidUpdate:(id)update;
- (void)daemonReady:(id)ready;
- (void)database:(id)database protectedDataDidBecomeAvailable:(BOOL)available;
- (void)_saveFirstOnboardingCompletionDateIfNeeded:(id)needed;
- (id)_onboardingCompletionWithError:(id *)error;
- (BOOL)_isFeatureSupportedOnDevice:(id)device;
- (id)_currentOnboardingHistoryDictionaryWithError:(id *)error;
- (id)_makeOnboardingHistoryWithOnboardingVersion:(long long)version countryCode:(id)code error:(id *)error;
@end

#endif /* HDHRElectrocardiogramRecordingCommonFeatureAvailabilityManager_h */
