//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSMutableRadioConnectionState_h
#define CSLSMutableRadioConnectionState_h
@import Foundation;

#include "CSLSRadioConnectionState.h"

@interface CSLSMutableRadioConnectionState : CSLSRadioConnectionState

@property (@dynamic, nonatomic) BOOL airplaneModeEnabled;
@property (@dynamic, nonatomic) BOOL bluetoothEnabled;
@property (@dynamic, nonatomic) BOOL telephonyEnabled;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLSMutableRadioConnectionState_h */
