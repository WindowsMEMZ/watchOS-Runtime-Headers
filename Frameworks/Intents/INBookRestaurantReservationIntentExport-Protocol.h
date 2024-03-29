//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INBookRestaurantReservationIntentExport_Protocol_h
#define INBookRestaurantReservationIntentExport_Protocol_h
@import Foundation;

@protocol INBookRestaurantReservationIntentExport <NSObject, JSExport>

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSDateComponents *bookingDateComponents;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText;

/* instance methods */
- (id)init;
@end

#endif /* INBookRestaurantReservationIntentExport_Protocol_h */
