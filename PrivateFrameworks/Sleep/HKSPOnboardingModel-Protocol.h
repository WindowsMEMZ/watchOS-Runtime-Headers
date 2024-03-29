//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPOnboardingModel_Protocol_h
#define HKSPOnboardingModel_Protocol_h
@import Foundation;

@protocol HKSPOnboardingModel 

@property (readonly, nonatomic) BOOL isCurrentSleepCoachingOnboardingCompleted;
@property (readonly, nonatomic) BOOL isCurrentSleepTrackingOnboardingCompleted;
@property (readonly, nonatomic) BOOL isCurrentSleepWindDownShortcutsOnboardingCompleted;
@property (readonly, nonatomic) long long sleepCoachingOnboardingCompletedVersion;
@property (readonly, nonatomic) long long sleepTrackingOnboardingCompletedVersion;
@property (readonly, nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion;
@property (readonly, nonatomic) NSDate *sleepCoachingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) NSDate *sleepTrackingOnboardingFirstCompletedDate;
@property (readonly, nonatomic) NSDate *sleepWindDownShortcutsOnboardingFirstCompletedDate;

/* instance methods */
- (BOOL)isEqualToModel:(id)model;
- (id)copy;
@end

#endif /* HKSPOnboardingModel_Protocol_h */
