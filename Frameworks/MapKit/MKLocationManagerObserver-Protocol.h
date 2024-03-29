//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKLocationManagerObserver_Protocol_h
#define MKLocationManagerObserver_Protocol_h
@import Foundation;

@protocol MKLocationManagerObserver <NSObject>
/* instance methods */
- (void)locationManagerUpdatedLocation:(id)location;
- (void)locationManagerFailedToUpdateLocation:(id)location withError:(id)error;
- (void)locationManagerDidReset:(id)reset;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)updates;
- (void)locationManagerDidPauseLocationUpdates:(id)updates;
- (void)locationManagerDidResumeLocationUpdates:(id)updates;
- (void)locationManager:(id)manager didUpdateVehicleSpeed:(double)speed timestamp:(id)timestamp;
- (void)locationManager:(id)manager didUpdateVehicleHeading:(double)heading timestamp:(id)timestamp;
@end

#endif /* MKLocationManagerObserver_Protocol_h */
