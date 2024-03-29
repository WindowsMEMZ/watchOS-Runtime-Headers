//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef HMZone_HMUAdditions_h
#define HMZone_HMUAdditions_h
@import Foundation;

@interface HMZone (HMUAdditions)
/* class methods */
+ (id)hmu_accessoriesInZones:(id)zones;
+ (id)hmu_uniqueIdentifiersFromZones:(id)zones;
+ (id)hmu_roomsInZones:(id)zones;
+ (id)hmu_roomsInZones:(id)zones appendingRooms:(id)rooms;
+ (id)hmu_zonesWithHomePodsFromZones:(id)zones;
+ (id)hmu_zonesWithAnnounceAccessoriesFromZones:(id)zones;

/* instance methods */
- (id)hmu_accessories;
- (id)hmu_homePods;
@end

#endif /* HMZone_HMUAdditions_h */
