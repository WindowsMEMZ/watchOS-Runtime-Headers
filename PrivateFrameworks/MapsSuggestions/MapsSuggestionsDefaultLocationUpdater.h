//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsDefaultLocationUpdater_h
#define MapsSuggestionsDefaultLocationUpdater_h
@import Foundation;

#include "MapsSuggestionsBaseLocationUpdater.h"
#include "CLLocationManagerDelegate-Protocol.h"
#include "MapsSuggestionsLocationUpdater-Protocol.h"

@class CLLocationManager, NSString;

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater<CLLocationManagerDelegate, MapsSuggestionsLocationUpdater> {
  /* instance variables */
  CLLocationManager *_locationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

/* instance methods */
- (id)init;
- (void)onStartImplementation;
- (void)onStopImplementation;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
- (void)locationManagerDidChangeAuthorization:(id)authorization;
@end

#endif /* MapsSuggestionsDefaultLocationUpdater_h */
