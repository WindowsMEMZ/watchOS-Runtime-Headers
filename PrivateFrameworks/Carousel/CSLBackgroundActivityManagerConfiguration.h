//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBackgroundActivityManagerConfiguration_h
#define CSLBackgroundActivityManagerConfiguration_h
@import Foundation;

#include "CSLDuetBackgroundBudgetController.h"
#include "CSLDuetHealthKitQueryBudgetController.h"
#include "CSLDuetLaunchManager.h"
#include "_DASActivityGroup.h"
#include "_DASActivityGroupScheduler-Protocol.h"

@protocol OS_dispatch_queue;

@interface CSLBackgroundActivityManagerConfiguration : NSObject

@property (retain, nonatomic) NSObject<_DASActivityGroupScheduler> *scheduler;
@property (retain, nonatomic) CSLDuetBackgroundBudgetController *backgroundBudgetController;
@property (retain, nonatomic) CSLDuetHealthKitQueryBudgetController *healthKitBudgetController;
@property (retain, nonatomic) CSLDuetLaunchManager *duetLaunchManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _DASActivityGroup *activityGroup;

/* class methods */
+ (id)defaultConfiguration;

/* instance methods */
@end

#endif /* CSLBackgroundActivityManagerConfiguration_h */
