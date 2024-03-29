//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 373.8.0.0.0
//
#ifndef _TtC7FMFCore23FMFMyLocationController_FMFCore_h
#define _TtC7FMFCore23FMFMyLocationController_FMFCore_h
@import Foundation;

@interface FMFCore.FMFMyLocationController (FMFCore) <CLLocationManagerDelegate>
/* instance methods */
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
@end

#endif /* _TtC7FMFCore23FMFMyLocationController_FMFCore_h */
