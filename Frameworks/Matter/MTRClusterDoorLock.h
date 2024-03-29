//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRClusterDoorLock_h
#define MTRClusterDoorLock_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRDevice.h"

@interface MTRClusterDoorLock : MTRCluster

@property (readonly, nonatomic) MTRDevice *device;

/* instance methods */
- (id)initWithDevice:(id)device endpoint:(unsigned short)endpoint queue:(id)queue;
- (void)lockDoorWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)unlockDoorWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)unlockWithTimeoutWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)setWeekDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)getWeekDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)clearWeekDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)setYearDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)getYearDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)clearYearDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)setHolidayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)getHolidayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)clearHolidayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)setUserWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)getUserWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)clearUserWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)setCredentialWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)getCredentialStatusWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)clearCredentialWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (id)initWithDevice:(id)device endpointID:(id)id queue:(id)queue;
- (void)lockDoorWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)unlockDoorWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)unlockWithTimeoutWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)setWeekDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)getWeekDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)clearWeekDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)setYearDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)getYearDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)clearYearDayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)setHolidayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)getHolidayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)clearHolidayScheduleWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)setUserWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)getUserWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)clearUserWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)setCredentialWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)getCredentialStatusWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)clearCredentialWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)unboltDoorWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (id)readAttributeLockStateWithParams:(id)params;
- (id)readAttributeLockTypeWithParams:(id)params;
- (id)readAttributeActuatorEnabledWithParams:(id)params;
- (id)readAttributeDoorStateWithParams:(id)params;
- (id)readAttributeDoorOpenEventsWithParams:(id)params;
- (void)writeAttributeDoorOpenEventsWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeDoorOpenEventsWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeDoorClosedEventsWithParams:(id)params;
- (void)writeAttributeDoorClosedEventsWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeDoorClosedEventsWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeOpenPeriodWithParams:(id)params;
- (void)writeAttributeOpenPeriodWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeOpenPeriodWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeNumberOfTotalUsersSupportedWithParams:(id)params;
- (id)readAttributeNumberOfPINUsersSupportedWithParams:(id)params;
- (id)readAttributeNumberOfRFIDUsersSupportedWithParams:(id)params;
- (id)readAttributeNumberOfWeekDaySchedulesSupportedPerUserWithParams:(id)params;
- (id)readAttributeNumberOfYearDaySchedulesSupportedPerUserWithParams:(id)params;
- (id)readAttributeNumberOfHolidaySchedulesSupportedWithParams:(id)params;
- (id)readAttributeMaxPINCodeLengthWithParams:(id)params;
- (id)readAttributeMinPINCodeLengthWithParams:(id)params;
- (id)readAttributeMaxRFIDCodeLengthWithParams:(id)params;
- (id)readAttributeMinRFIDCodeLengthWithParams:(id)params;
- (id)readAttributeCredentialRulesSupportWithParams:(id)params;
- (id)readAttributeNumberOfCredentialsSupportedPerUserWithParams:(id)params;
- (id)readAttributeLanguageWithParams:(id)params;
- (void)writeAttributeLanguageWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeLanguageWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeLEDSettingsWithParams:(id)params;
- (void)writeAttributeLEDSettingsWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeLEDSettingsWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeAutoRelockTimeWithParams:(id)params;
- (void)writeAttributeAutoRelockTimeWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeAutoRelockTimeWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeSoundVolumeWithParams:(id)params;
- (void)writeAttributeSoundVolumeWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeSoundVolumeWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeOperatingModeWithParams:(id)params;
- (void)writeAttributeOperatingModeWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeOperatingModeWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeSupportedOperatingModesWithParams:(id)params;
- (id)readAttributeDefaultConfigurationRegisterWithParams:(id)params;
- (id)readAttributeEnableLocalProgrammingWithParams:(id)params;
- (void)writeAttributeEnableLocalProgrammingWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeEnableLocalProgrammingWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeEnableOneTouchLockingWithParams:(id)params;
- (void)writeAttributeEnableOneTouchLockingWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeEnableOneTouchLockingWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeEnableInsideStatusLEDWithParams:(id)params;
- (void)writeAttributeEnableInsideStatusLEDWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeEnableInsideStatusLEDWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeEnablePrivacyModeButtonWithParams:(id)params;
- (void)writeAttributeEnablePrivacyModeButtonWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeEnablePrivacyModeButtonWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeLocalProgrammingFeaturesWithParams:(id)params;
- (void)writeAttributeLocalProgrammingFeaturesWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeLocalProgrammingFeaturesWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeWrongCodeEntryLimitWithParams:(id)params;
- (void)writeAttributeWrongCodeEntryLimitWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeWrongCodeEntryLimitWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeUserCodeTemporaryDisableTimeWithParams:(id)params;
- (void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeSendPINOverTheAirWithParams:(id)params;
- (void)writeAttributeSendPINOverTheAirWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeSendPINOverTheAirWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeRequirePINforRemoteOperationWithParams:(id)params;
- (void)writeAttributeRequirePINforRemoteOperationWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeRequirePINforRemoteOperationWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeExpiringUserTimeoutWithParams:(id)params;
- (void)writeAttributeExpiringUserTimeoutWithValue:(id)value expectedValueInterval:(id)interval;
- (void)writeAttributeExpiringUserTimeoutWithValue:(id)value expectedValueInterval:(id)interval params:(id)params;
- (id)readAttributeGeneratedCommandListWithParams:(id)params;
- (id)readAttributeAcceptedCommandListWithParams:(id)params;
- (id)readAttributeEventListWithParams:(id)params;
- (id)readAttributeAttributeListWithParams:(id)params;
- (id)readAttributeFeatureMapWithParams:(id)params;
- (id)readAttributeClusterRevisionWithParams:(id)params;
@end

#endif /* MTRClusterDoorLock_h */
