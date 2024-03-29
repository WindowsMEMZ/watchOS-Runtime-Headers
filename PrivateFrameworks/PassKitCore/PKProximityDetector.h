//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKProximityDetector_h
#define PKProximityDetector_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"

@class NSUUID, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface PKProximityDetector : NSObject {
  /* instance variables */
  SFDeviceDiscovery *_nearbyInfoDiscovery;
  BOOL _advertisingDeviceNearby;
  NSObject<OS_dispatch_source> *_timer;
  NSObject<OS_dispatch_queue> *_timerQueue;
  NSObject<OS_dispatch_queue> *_discoveryQueue;
  unsigned int _powerAssertionIdentifier;
}

@property (readonly, nonatomic) NSUUID *advertisingDeviceUUID;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) BOOL isDetecting;

/* instance methods */
- (id)initWithAdvertisingDeviceUUID:(id)uuid;
- (void)dealloc;
- (void)startDetectingWithDuration:(double)duration completion:(id /* block */)completion;
- (id /* block */)_createDeviceFoundBlockWithName:(id)name;
- (id /* block */)_createDeviceLostBlockWithName:(id)name;
- (id /* block */)_createDiscoveryActivationBlockWithName:(id)name duration:(double)duration completion:(id /* block */)completion;
- (void)_queue_endDetecting;
- (void)endDetecting;
- (void)_createPowerAssertion;
- (void)_endPowerAssertion;
@end

#endif /* PKProximityDetector_h */
