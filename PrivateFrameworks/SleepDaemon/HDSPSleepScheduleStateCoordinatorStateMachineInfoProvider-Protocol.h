//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider_Protocol_h
#define HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider_Protocol_h
@import Foundation;

@protocol HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider <HKSPStateMachineInfoProvider>

@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL sleepFeaturesEnabled;
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) HKSPSleepScheduleOccurrence *previousOccurrence;
@property (readonly, nonatomic) NSDate *currentDate;

@end

#endif /* HDSPSleepScheduleStateCoordinatorStateMachineInfoProvider_Protocol_h */
