//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFRideStatusContentItem_h
#define WFRideStatusContentItem_h
@import Foundation;

#include "WFContentItem.h"

@class INRideStatus;

@interface WFRideStatusContentItem : WFContentItem

@property (readonly, nonatomic) INRideStatus *rideStatus;

/* class methods */
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)typeDescription;
+ (id)pluralTypeDescription;
+ (id)countDescription;

/* instance methods */
- (id)vehicleDescription;
- (id)estimatedDropOffDate;
- (id)estimatedPickupDate;
- (id)pickupLocation;
- (id)dropOffLocation;
- (id)minimumPrice;
- (id)maximumPrice;
- (id)rideOptionName;
- (id)disclaimerMessage;
- (id)driver;
@end

#endif /* WFRideStatusContentItem_h */
