//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 112.42.9.28.5
//
#ifndef MapsSyncManagedHistoryRideShareItem_h
#define MapsSyncManagedHistoryRideShareItem_h
@import Foundation;

#include "MapsSyncManagedHistoryItem.h"

@class NSData;

@interface MapsSyncManagedHistoryRideShareItem : MapsSyncManagedHistoryItem // (Swift)

@property (nonatomic, @dynamic, copy) NSData *endWaypoint;
@property (nonatomic, @dynamic, copy) NSData *startWaypoint;

/* class methods */
+ (Class)wrapperClass;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* MapsSyncManagedHistoryRideShareItem_h */
