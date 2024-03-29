//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 112.42.9.28.5
//
#ifndef MapsSyncManagedHistoryPlaceItem_h
#define MapsSyncManagedHistoryPlaceItem_h
@import Foundation;

#include "MapsSyncManagedHistoryItem.h"
#include "MapsSyncManagedMixinMapItem.h"

@class NSNumber, NSUUID;

@interface MapsSyncManagedHistoryPlaceItem : MapsSyncManagedHistoryItem // (Swift)

@property (nonatomic, @dynamic, copy) NSUUID *supersededSearchId;
@property (nonatomic, @dynamic, retain) NSNumber *muid;
@property (nonatomic, @dynamic, retain) NSNumber *longitude;
@property (nonatomic, @dynamic, retain) NSNumber *latitude;
@property (nonatomic, @dynamic, retain) MapsSyncManagedMixinMapItem *mapItem;

/* class methods */
+ (Class)wrapperClass;

/* instance methods */
- (id)initWithEntity:(id)entity insertIntoManagedObjectContext:(id)context;
@end

#endif /* MapsSyncManagedHistoryPlaceItem_h */
