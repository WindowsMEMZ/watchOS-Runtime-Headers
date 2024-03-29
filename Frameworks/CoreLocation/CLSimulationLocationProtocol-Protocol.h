//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLSimulationLocationProtocol_Protocol_h
#define CLSimulationLocationProtocol_Protocol_h
@import Foundation;

@protocol CLSimulationLocationProtocol 
/* instance methods */
- (void)startLocationSimulation;
- (void)stopLocationSimulation;
- (void)setSimulationScenario:(id)scenario;
- (void)appendSimulatedLocations:(id)locations;
- (void)clearSimulatedLocations;
- (void)setLocationDeliveryBehavior:(unsigned char)behavior;
- (void)setLocationRepeatBehavior:(unsigned char)behavior;
- (void)setIntermediateLocationDistance:(double)distance;
- (void)setLocationInterval:(double)interval;
- (void)setLocationTravellingSpeed:(double)speed;
- (void)simulateVisit:(id)visit;
- (void)simulateSignificantLocationChange:(id)change;
- (void)getFencesForBundleID:(id)id withReply:(id /* block */)reply;
- (void)simulateFenceWithBundleID:(id)id andFenceID:(id)id eventType:(unsigned char)type atLocation:(id)location;
- (void)simulateBeaconWithProximityUUID:(id)uuid major:(long long)major minor:(long long)minor eventType:(unsigned char)type;
@end

#endif /* CLSimulationLocationProtocol_Protocol_h */
