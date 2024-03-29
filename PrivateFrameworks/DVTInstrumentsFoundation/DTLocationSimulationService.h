//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTLocationSimulationService_h
#define DTLocationSimulationService_h
@import Foundation;

#include "DTXService.h"
#include "DTLocationSimulationServiceRequests-Protocol.h"

@class NSString;

@interface DTLocationSimulationService : DTXService<DTLocationSimulationServiceRequests>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)registerCapabilities:(id)capabilities;

/* instance methods */
- (id)initWithChannel:(id)channel;
- (void)simulateLocationWithLatitude:(id)latitude longitude:(id)longitude;
- (void)stopLocationSimulation;
@end

#endif /* DTLocationSimulationService_h */
