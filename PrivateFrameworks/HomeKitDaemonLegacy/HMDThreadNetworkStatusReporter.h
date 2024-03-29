//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDThreadNetworkStatusReporter_h
#define HMDThreadNetworkStatusReporter_h
@import Foundation;

#include "HMDHome.h"
#include "HMFLogging-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface HMDThreadNetworkStatusReporter : NSObject<HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak) HMDHome *home;
@property (nonatomic) unsigned long long threadNetworkPeriodicCheckFrequencyInMins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithHome:(id)home;
- (void)run;
- (void)_scheduleThreadNetworkStatusPeriodicUpdate;
- (void)_runThreadNetworkStatusPeriodicUpdate;
- (void)_checkIfThreadNetworkIsRunningWithCompletion:(id /* block */)completion;
@end

#endif /* HMDThreadNetworkStatusReporter_h */
