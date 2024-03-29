//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INRideOptionExport_Protocol_h
#define INRideOptionExport_Protocol_h
@import Foundation;

@protocol INRideOptionExport <NSObject, JSExport>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *estimatedPickupDate;
@property (copy, nonatomic) INPriceRange *priceRange;
@property (copy, nonatomic) NSNumber *usesMeteredFare;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *specialPricing;
@property (copy, nonatomic) INImage *specialPricingBadgeImage;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (retain, nonatomic) NSUserActivity *userActivityForBookingInApplication;

/* instance methods */
- (id)init;
@end

#endif /* INRideOptionExport_Protocol_h */
