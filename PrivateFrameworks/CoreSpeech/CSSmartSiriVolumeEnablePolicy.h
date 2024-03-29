//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSmartSiriVolumeEnablePolicy_h
#define CSSmartSiriVolumeEnablePolicy_h
@import Foundation;

#include "CSPolicy.h"

@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeEnablePolicy : CSPolicy {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addSmartSiriVolumeEnabledConditions;
@end

#endif /* CSSmartSiriVolumeEnablePolicy_h */
