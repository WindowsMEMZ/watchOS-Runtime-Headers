//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INGetAvailableRestaurantReservationBookingDefaultsIntent_h
#define INGetAvailableRestaurantReservationBookingDefaultsIntent_h
@import Foundation;

#include "INIntent.h"
#include "INGetAvailableRestaurantReservationBookingDefaultsIntentExport-Protocol.h"
#include "INRestaurant.h"

@class NSString;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntent : INIntent<INGetAvailableRestaurantReservationBookingDefaultsIntentExport>

@property (copy, nonatomic) INRestaurant *restaurant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRestaurant:(id)restaurant;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (id)_dictionaryRepresentation;
@end

#endif /* INGetAvailableRestaurantReservationBookingDefaultsIntent_h */
