//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSMutableTelephonyConnectionState_h
#define CSLSMutableTelephonyConnectionState_h
@import Foundation;

#include "CSLSTelephonyConnectionState.h"

@interface CSLSMutableTelephonyConnectionState : CSLSTelephonyConnectionState

@property (@dynamic, nonatomic) BOOL supportsLTE;
@property (@dynamic, nonatomic) BOOL simActive;
@property (@dynamic, nonatomic) unsigned long long signalStrengthBars;
@property (@dynamic, nonatomic) unsigned long long maxSignalStrengthBars;
@property (@dynamic, nonatomic) unsigned long long serviceState;
@property (@dynamic, nonatomic) unsigned long long dataNetworkType;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLSMutableTelephonyConnectionState_h */
