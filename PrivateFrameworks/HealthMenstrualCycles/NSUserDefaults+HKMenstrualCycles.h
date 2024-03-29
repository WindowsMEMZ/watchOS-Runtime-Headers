//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef NSUserDefaults_HKMenstrualCycles_h
#define NSUserDefaults_HKMenstrualCycles_h
@import Foundation;

@interface NSUserDefaults (HKMenstrualCycles)
/* class methods */
+ (id)hkmc_menstrualCyclesDefaults;

/* instance methods */
- (BOOL)hkmc_analyticsDebugModeEnabled;
- (BOOL)hkmc_calendarLogAdjacentDaysDisabled;
- (BOOL)hkmc_timelineLogAdjacentDaysEnabled;
- (BOOL)hkmc_timelineTapToLogDisabled;
- (long long)hkmc_integerForKey:(id)key defaultValue:(long long)value;
@end

#endif /* NSUserDefaults_HKMenstrualCycles_h */
