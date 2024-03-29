//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHAPAccessoryPrimaryResidentOperationTask_h
#define HMDHAPAccessoryPrimaryResidentOperationTask_h
@import Foundation;

#include "HMDHAPAccessoryTask.h"
#include "HMDHAPAccessoryTask-Protocol.h"

@class NSMutableArray;

@interface HMDHAPAccessoryPrimaryResidentOperationTask : HMDHAPAccessoryTask

@property (retain, nonatomic) NSMutableArray *remoteFallbackTasks;
@property (retain, nonatomic) NSObject<HMDHAPAccessoryTask> *localTask;

/* class methods */
+ (void)filterAccessoriesByDevicesFromMap:(id)map currentDeviceAccessories:(id)accessories otherDeviceAccessories:(id)accessories;

/* instance methods */
- (id)initWithContext:(id)context requests:(id)requests completion:(id /* block */)completion;
- (void)execute;
- (void)_fanOutRemoteRequests:(id)requests residentToAccessoriesMap:(id)map responseWaitGroup:(id)group;
- (void)_processLocalRequests:(id)requests responseWaitGroup:(id)group;
- (id)_fallbackTaskForDevice:(id)device;
- (id)_makeRemoteWithFallbackTaskWithRequests:(id)requests delegateDevice:(id)device completion:(id /* block */)completion;
- (id)_makeLocalTaskWithRequests:(id)requests completion:(id /* block */)completion;
@end

#endif /* HMDHAPAccessoryPrimaryResidentOperationTask_h */
