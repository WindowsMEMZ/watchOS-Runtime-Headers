//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STUsage_h
#define STUsage_h
@import Foundation;

#include "NSManagedObject.h"
#include "STCoreDevice.h"
#include "STCoreUser.h"

@class NSDate, NSSet;

@interface STUsage : NSManagedObject

@property (retain, @dynamic, nonatomic) NSDate *lastEventDate;
@property (retain, @dynamic, nonatomic) NSSet *blocks;
@property (retain, @dynamic, nonatomic) NSDate *lastUpdatedDate;
@property (retain, @dynamic, nonatomic) STCoreDevice *device;
@property (retain, @dynamic, nonatomic) STCoreUser *user;

/* class methods */
+ (id)fetchRequestMatchingUser:(id)user device:(id)device;
@end

#endif /* STUsage_h */
