//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INRideVehicleExport_Protocol_h
#define INRideVehicleExport_Protocol_h
@import Foundation;

@protocol INRideVehicleExport <NSObject, JSExport>

@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *registrationPlate;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) INImage *mapAnnotationImage;

/* instance methods */
- (id)init;
@end

#endif /* INRideVehicleExport_Protocol_h */
