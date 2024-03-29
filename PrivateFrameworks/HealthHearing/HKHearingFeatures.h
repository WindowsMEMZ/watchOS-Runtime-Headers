//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHearingFeatures_h
#define HKHearingFeatures_h
@import Foundation;

@interface HKHearingFeatures : NSObject
/* class methods */
+ (BOOL)isHeadphoneExposureNotificationsEnabled;
+ (BOOL)isHeadphoneExposureMeasureLevelsEnabled;
+ (BOOL)areHeadphoneExposureNotificationsMandatory;
+ (BOOL)isHeadphoneExposureNotificationsSupportedOnActiveWatch;
+ (BOOL)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(id *)error;
+ (BOOL)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(id *)error;
+ (BOOL)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(id *)error;
+ (BOOL)_setHeadphoneExposureNotificationsEnabled:(BOOL)enabled error:(id *)error;
+ (BOOL)_setHeadphoneExposureMeasureLevelsEnabled:(BOOL)enabled error:(id *)error;
+ (BOOL)_isHeadphoneExposureDataTransient;
+ (BOOL)_isMeasureOtherHeadphonesEnabled;
+ (void)startObservingForChanges;
+ (void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)enabled;
+ (BOOL)unitTesting_simulateLocalHeadphonePlayback;
+ (void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)playback;
+ (BOOL)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+ (void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)interval;
+ (id)sharedInstance;
+ (id)_numbersForPreferenceKeys:(id)keys fromActiveWatch:(BOOL)watch;
+ (id)_numbersForPreferenceKeys:(id)keys error:(id *)error;
+ (id)_numbersForPhonePreferenceKeys:(id)keys;
+ (id)_numbersForWatchPreferenceKeys:(id)keys;
+ (BOOL)_boolForPreferenceKey:(id)key defaultValue:(BOOL)value fromValues:(id)values;
+ (BOOL)_setBoolForPreferenceKey:(id)key newValue:(BOOL)value error:(id *)error;
+ (BOOL)_setBoolForPhonePreferenceKey:(id)key newValue:(BOOL)value error:(id *)error;
+ (BOOL)_setBoolForWatchPreferenceKey:(id)key newValue:(BOOL)value error:(id *)error;
+ (id)_sharedAudioDataAnalysisManager;
+ (BOOL)setBoolForPreferenceKey:(id)key newValue:(BOOL)value forPairedWatch:(BOOL)watch error:(id *)error;
+ (id)activePairedDevice;
+ (BOOL)hasActivePairedDevice;

/* instance methods */
- (BOOL)swizzled_isHAENFeatureEnabled;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_startObservingForChanges;
- (void)_startObservingForChangesOnActiveWatch;
- (void)_stopObservingForChanges;
- (void)_adasPreferenceDidChange:(id)change;
@end

#endif /* HKHearingFeatures_h */
