//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSMutableHIDEventDiscreteDispatchingPredicate_h
#define BKSMutableHIDEventDiscreteDispatchingPredicate_h
@import Foundation;

#include "BKSHIDEventDiscreteDispatchingPredicate.h"

@class NSSet;

@interface BKSMutableHIDEventDiscreteDispatchingPredicate : BKSHIDEventDiscreteDispatchingPredicate

@property (copy, @dynamic, nonatomic) NSSet *senderDescriptors;
@property (copy, @dynamic, nonatomic) NSSet *descriptors;
@property (copy, @dynamic, nonatomic) NSSet *displays;

/* class methods */
+ (id)new;
+ (id)defaultSystemPredicate;
+ (id)defaultFocusPredicate;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* BKSMutableHIDEventDiscreteDispatchingPredicate_h */
