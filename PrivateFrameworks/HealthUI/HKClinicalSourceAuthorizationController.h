//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKClinicalSourceAuthorizationController_h
#define HKClinicalSourceAuthorizationController_h
@import Foundation;

@class HKAuthorizationStore, HKHealthRecordsStore, HKHealthStore, HKSource, NSArray, NSDate, NSError, NSMutableSet, NSSet;

@interface HKClinicalSourceAuthorizationController : NSObject

@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKAuthorizationStore *authorizationStore;
@property (copy, nonatomic) NSSet *typesForReading;
@property (copy, nonatomic) NSError *fetchError;
@property (readonly, copy, nonatomic) NSSet *typesRequestedForReading;
@property (readonly, nonatomic) NSMutableSet *typesEnabledForReading;
@property (nonatomic) BOOL anyDeterminedTypeAllowsReading;
@property (nonatomic) long long authorizationModeForSource;
@property (copy, nonatomic) NSDate *displayReadAuthorizationAnchorDate;
@property (copy, nonatomic) id /* block */ _unitTesting_reminderRegistryCompletion;
@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, copy, nonatomic) NSArray *orderedTypesForReading;
@property (readonly, nonatomic) BOOL anyTypeRequested;

/* instance methods */
- (id)initWithHealthStore:(id)store healthRecordsStore:(id)store source:(id)source typesRequestedForReading:(id)reading;
- (id)_fetchAllClinicalAuthorizationRecordsWithError:(id *)error;
- (void)reload;
- (id)_orderTypes:(id)types;
- (BOOL)isTypeEnabled:(id)enabled;
- (void)setEnabled:(BOOL)enabled forType:(id)type commit:(BOOL)commit;
- (void)setEnabledForAllTypes:(BOOL)types;
- (void)commitAllTypesAndUpdateAuthorizationAnchorWithMode:(long long)mode;
- (BOOL)_shouldUpdateDisplayReadAuthorizationAnchorDateWhenCommittingWithMode:(long long)mode;
- (void)_updateDisplayReadAuthorizationAnchorDateIfNeededForCommittingModes:(id)modes;
- (void)_updateReminderRegistrationIfNeededForCommittingModes:(id)modes anyTypeEnabled:(BOOL)enabled;
- (void)_commitModeConfirmationAlertRegistrationShouldDisplay:(BOOL)display;
- (BOOL)allTypesEnabled;
- (BOOL)anyTypeEnabled;
- (long long)_authorizationStatusWithType:(id)type;
- (id)_authorizationModesWithMode:(long long)mode types:(id)types;
- (id)_authorizationStatusesWithTypes:(id)types;
- (void)_setAuthorizationStatuses:(id)statuses modes:(id)modes shouldUpdateAnchor:(BOOL)anchor;
- (void)_unitTesting_setReminderRegistryCompletion:(id /* block */)completion;
@end

#endif /* HKClinicalSourceAuthorizationController_h */
