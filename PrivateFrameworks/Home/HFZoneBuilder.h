//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFZoneBuilder_h
#define HFZoneBuilder_h
@import Foundation;

#include "HFItemBuilder.h"
#include "HFMutableSetDiff.h"

@class HMZone, NSSet, NSString;

@interface HFZoneBuilder : HFItemBuilder

@property (retain, nonatomic) HFMutableSetDiff *roomUUIDs;
@property (readonly, nonatomic) HMZone *zone;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSSet *rooms;

/* class methods */
+ (Class)homeKitRepresentationClass;
+ (id)na_identity;

/* instance methods */
- (id)initWithExistingObject:(id)object inHome:(id)home;
- (void)addRoom:(id)room;
- (void)removeRoom:(id)room;
- (id)_performValidation;
- (id)commitItem;
- (id)_createZone;
- (id)_updateName;
- (id)_updateRooms;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFZoneBuilder_h */
