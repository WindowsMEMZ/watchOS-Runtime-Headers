//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDTargetControllerCommandEvent_h
#define HMDTargetControllerCommandEvent_h
@import Foundation;

#include "HMMLogEvent.h"
#include "HMDHAPAccessory.h"

@interface HMDTargetControllerCommandEvent : HMMLogEvent

@property (readonly, nonatomic) unsigned long long commandType;
@property (readonly, weak, nonatomic) HMDHAPAccessory *accessory;

/* class methods */
+ (id)commandEventWithCommandType:(unsigned long long)type accessory:(id)accessory;

/* instance methods */
- (id)initWithCommandType:(unsigned long long)type accessory:(id)accessory;
@end

#endif /* HMDTargetControllerCommandEvent_h */
