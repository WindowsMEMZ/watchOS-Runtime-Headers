//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKRPOxygenSaturationSettings_h
#define HKRPOxygenSaturationSettings_h
@import Foundation;

#include "HKRPUserDefaultsSyncProviding-Protocol.h"

@class HKObserverSet, NSString, NSUserDefaults;

@interface HKRPOxygenSaturationSettings : NSObject {
  /* instance variables */
  HKObserverSet *_observers;
  NSUserDefaults *_userDefaults;
  NSObject<HKRPUserDefaultsSyncProviding> *_userDefaultsSyncProvider;
}

@property (readonly, copy, nonatomic) NSString *bloodOxygenLocalizedPaneTitle;
@property (readonly, copy, nonatomic) NSString *bloodOxygenSectionTitle;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsHeader;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsWithAgeGatingEnabledHeader;
@property (readonly, copy, nonatomic) NSString *bloodOxygenMeasurementsTitle;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsTitle;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsFooter;
@property (readonly, copy, nonatomic) NSString *featureActiveStatusTitle;
@property (readonly, copy, nonatomic) NSString *featureActiveStatusDescription;
@property (readonly, copy, nonatomic) NSString *featureInactiveStatusTitle;
@property (readonly, copy, nonatomic) NSString *featureInactiveStatusDescription;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsDetailOptionsTitle;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsDetailSleepTitle;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsDetailTheaterTitle;
@property (readonly, copy, nonatomic) NSString *backgroundMeasurementsDetailOptionsFooter;
@property (readonly, copy, nonatomic) NSString *aboutBloodOxygenFooter;
@property (readonly, copy, nonatomic) NSString *aboutBloodOxygenFooterWithLearnMore;
@property (readonly, copy, nonatomic) NSString *learnMoreAboutBloodOxygenURL;
@property (readonly, copy, nonatomic) NSString *howToTakeAMeasurementEducationTitle;
@property (nonatomic) BOOL oxygenSaturationDisabled;
@property (nonatomic) BOOL backgroundMeasurementsEnabled;
@property (nonatomic) BOOL backgroundMeasurementsDuringSleepMode;
@property (nonatomic) BOOL backgroundMeasurementsDuringTheaterMode;
@property (nonatomic) BOOL overrideIsRemoteDisabled;

/* class methods */
+ (id)standardSettings;

/* instance methods */
- (id)initWithUserDefaults:(id)defaults userDefaultsSyncProvider:(id)provider;
- (void)dealloc;
- (void)_setOxygenSaturationDisabled:(BOOL)disabled;
- (void)_setBackgroundMeasurementsEnabled:(BOOL)enabled;
- (void)_setBackgroundMeasurementsDuringSleepMode:(BOOL)mode;
- (void)_setBackgroundMeasurementsDuringTheaterMode:(BOOL)mode;
- (void)activateDefaultValuesIfNeeded;
- (void)reset;
- (void)addObserver:(id)observer queue:(id)queue;
- (void)removeObserver:(id)observer;
- (void)_notifySettingsDidChange;
- (id)_settingsToObserve;
- (void)_startObservingDefaults;
- (void)_stopObservingAllDefaults;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* HKRPOxygenSaturationSettings_h */
