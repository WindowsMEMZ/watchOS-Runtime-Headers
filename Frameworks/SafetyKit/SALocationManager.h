//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 83.0.0.0.0
//
#ifndef SALocationManager_h
#define SALocationManager_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"
#include "SALocationManagerProtocol-Protocol.h"

@class CLLocationManager, NSString;

@interface SALocationManager : NSObject<CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (weak, nonatomic) NSObject<SALocationManagerProtocol> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)notifyLocation:(id)location;
- (void)startMonitoringLocation;
- (void)stopMonitoringLocation;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
@end

#endif /* SALocationManager_h */
