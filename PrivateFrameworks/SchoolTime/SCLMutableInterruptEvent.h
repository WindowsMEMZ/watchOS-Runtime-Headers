//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLMutableInterruptEvent_h
#define SCLMutableInterruptEvent_h
@import Foundation;

#include "SCLInterruptEvent.h"
#include "SCLContact.h"

@interface SCLMutableInterruptEvent : SCLInterruptEvent

@property (@dynamic, nonatomic) unsigned long long type;
@property (@dynamic, nonatomic) unsigned long long urgency;
@property (copy, @dynamic, nonatomic) SCLContact *sender;
@property (@dynamic, nonatomic) BOOL shouldAlwaysInterrupt;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SCLMutableInterruptEvent_h */
