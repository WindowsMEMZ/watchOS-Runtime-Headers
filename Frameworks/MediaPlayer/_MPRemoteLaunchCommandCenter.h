//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPRemoteLaunchCommandCenter_h
#define _MPRemoteLaunchCommandCenter_h
@import Foundation;

#include "MPRemoteCommandCenter.h"

@interface _MPRemoteLaunchCommandCenter : MPRemoteCommandCenter
/* instance methods */
- (void)dealloc;
- (void)_scheduleSupportedCommandsChanged:(BOOL)changed;
- (void)_startMediaRemoteSync;
- (void)_stopMediaRemoteSync;
@end

#endif /* _MPRemoteLaunchCommandCenter_h */
