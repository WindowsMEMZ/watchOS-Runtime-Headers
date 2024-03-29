//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STUsageBlock_h
#define STUsageBlock_h
@import Foundation;

#include "NSManagedObject.h"
#include "STUsage.h"

@class NSDate, NSSet;

@interface STUsageBlock : NSManagedObject

@property (retain, @dynamic, nonatomic) NSDate *lastEventDate;
@property (retain, @dynamic, nonatomic) NSDate *longestSessionStartDate;
@property (retain, @dynamic, nonatomic) NSDate *longestSessionEndDate;
@property (@dynamic, nonatomic) long long screenTimeInSeconds;
@property (copy, @dynamic, nonatomic) NSDate *startDate;
@property (@dynamic, nonatomic) long long durationInMinutes;
@property (retain, @dynamic, nonatomic) NSDate *firstPickupDate;
@property (@dynamic, nonatomic) long long numberOfPickupsWithoutApplicationUsage;
@property (retain, @dynamic, nonatomic) NSSet *categories;
@property (retain, @dynamic, nonatomic) NSSet *countedItems;
@property (retain, @dynamic, nonatomic) STUsage *usage;

/* class methods */
+ (id)fetchRequestMatchingUsage:(id)usage dateInterval:(id)interval;
+ (double)totalScreenTimeForUsageBlocks:(id)blocks;
+ (long long)totalPickupsForUsageBlocks:(id)blocks;
+ (long long)totalNotificationsForUsageBlocks:(id)blocks;
+ (id)usageCountedItemsForUsageBlocks:(id)blocks;
+ (id)usageCategoriesForUsageBlocks:(id)blocks;
@end

#endif /* STUsageBlock_h */
