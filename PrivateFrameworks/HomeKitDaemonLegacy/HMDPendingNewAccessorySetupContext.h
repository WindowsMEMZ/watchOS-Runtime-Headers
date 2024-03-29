//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPendingNewAccessorySetupContext_h
#define HMDPendingNewAccessorySetupContext_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAccessory.h"
#include "HMDDevice.h"

@class HMFTimer;

@interface HMDPendingNewAccessorySetupContext : HMFObject

@property (readonly) HMDAccessory *accessory;
@property (readonly) HMDDevice *remoteDevice;
@property (readonly) HMFTimer *timer;

/* instance methods */
- (id)initWithAccessory:(id)accessory remoteDevice:(id)device timer:(id)timer;
@end

#endif /* HMDPendingNewAccessorySetupContext_h */
