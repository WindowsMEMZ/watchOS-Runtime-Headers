//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSHIDEventProximityAttributes_h
#define BKSHIDEventProximityAttributes_h
@import Foundation;

#include "BKSHIDEventBaseAttributes.h"

@interface BKSHIDEventProximityAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int proximityDetectionMode;

/* class methods */
+ (id)protobufSchema;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)appendDescriptionToFormatter:(id)formatter;
@end

#endif /* BKSHIDEventProximityAttributes_h */
