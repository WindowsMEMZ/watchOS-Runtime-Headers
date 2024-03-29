//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSecondaryDevicePairingRequest_h
#define HDSecondaryDevicePairingRequest_h
@import Foundation;

#include "HDTinkerProfile.h"

@class HKDaemonTransaction, HKSecondaryPairedDeviceConfiguration, NSString;

@interface HDSecondaryDevicePairingRequest : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  double _startTime;
  HKDaemonTransaction *_transaction;
  HKSecondaryPairedDeviceConfiguration *_configuration;
  id /* block */ _completion;
  long long _stage;
  HDTinkerProfile *_profile;
  NSString *_guardianAccountIdentifier;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* HDSecondaryDevicePairingRequest_h */
