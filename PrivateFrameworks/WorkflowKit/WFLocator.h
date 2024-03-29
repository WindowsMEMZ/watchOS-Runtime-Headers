//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLocator_h
#define WFLocator_h
@import Foundation;

#include "CLLocationManagerDelegate-Protocol.h"

@class CLInUseAssertion, CLLocation, CLLocationManager, NSString;

@interface WFLocator : NSObject<CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (retain, nonatomic) CLLocation *bestEffortLocation;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)determineLocationWithWorkflowEnvironment:(long long)environment completion:(id /* block */)completion;
+ (void)determineLocationWithWorkflowEnvironment:(long long)environment desiredAccuracy:(double)accuracy completion:(id /* block */)completion;
+ (void)determineLocationWithWorkflowEnvironment:(long long)environment desiredAccuracy:(double)accuracy timeout:(double)timeout completion:(id /* block */)completion;

/* instance methods */
- (id)initWithWorkflowEnvironment:(long long)environment;
- (void)dealloc;
- (BOOL)useRequestLocation;
- (void)start;
- (void)requestLocation;
- (void)startUpdatingLocation;
- (void)finishUpdatingLocation;
- (void)locationManager:(id)manager didUpdateLocations:(id)locations;
- (void)locationManager:(id)manager didFailWithError:(id)error;
@end

#endif /* WFLocator_h */
