//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraMetricsLogEvent_h
#define HMDCameraMetricsLogEvent_h
@import Foundation;

#include "HMMHomeLogEvent.h"
#include "HMDAccessory.h"
#include "HMDCameraSessionID.h"

@interface HMDCameraMetricsLogEvent : HMMHomeLogEvent

@property (readonly, nonatomic) HMDCameraSessionID *sessionID;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly) BOOL isLocal;

/* instance methods */
- (id)initWithSessionID:(id)id cameraAccessory:(id)accessory isLocal:(BOOL)local;
@end

#endif /* HMDCameraMetricsLogEvent_h */
