//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _HMCameraAudioControl_h
#define _HMCameraAudioControl_h
@import Foundation;

#include "_HMCameraControl.h"
#include "HMCharacteristic.h"

@interface _HMCameraAudioControl : _HMCameraControl

@property (readonly, nonatomic) HMCharacteristic *mute;
@property (readonly, nonatomic) HMCharacteristic *volume;

/* instance methods */
- (id)initWithCameraProfile:(id)profile profileUniqueIdentifier:(id)identifier service:(id)service;
@end

#endif /* _HMCameraAudioControl_h */
