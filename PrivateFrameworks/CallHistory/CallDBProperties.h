//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CallDBProperties_h
#define CallDBProperties_h
@import Foundation;

#include "NSManagedObject.h"

@class NSNumber;

@interface CallDBProperties : NSManagedObject

@property (retain, @dynamic, nonatomic) NSNumber *timer_outgoing;
@property (retain, @dynamic, nonatomic) NSNumber *timer_incoming;
@property (retain, @dynamic, nonatomic) NSNumber *timer_all;
@property (retain, @dynamic, nonatomic) NSNumber *timer_lifetime;
@property (retain, @dynamic, nonatomic) NSNumber *timer_last;

@end

#endif /* CallDBProperties_h */
