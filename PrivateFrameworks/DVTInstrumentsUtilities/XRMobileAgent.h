//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRMobileAgent_h
#define XRMobileAgent_h
@import Foundation;

#include "XRMobileAgentItinerary.h"

@class NSString;
@protocol OS_os_log;

@interface XRMobileAgent : NSObject {
  /* instance variables */
  id _ticket;
}

@property (retain, nonatomic) NSString *mode;
@property (readonly, nonatomic) XRMobileAgentItinerary *itinerary;
@property (readonly, nonatomic) int movementType;
@property (readonly, nonatomic) unsigned int desiredQoS;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingHandle;
@property (readonly, nonatomic) NSString *agentDiagnosticsName;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)activateUsingCompletionOperationAtStop:(id)stop activationTicket:(id)ticket;
- (id)ticket;
- (void)hello;
- (void)goodbye;
- (int)nextMovementType;
- (id)init;
- (void)activateAtStop:(id)stop activationTicket:(id)ticket activationQoS:(unsigned int)s finalDestination:(id)destination finalTicket:(id)ticket;
- (void)activateAtStop:(id)stop activationTicket:(id)ticket finalDestination:(id)destination finalTicket:(id)ticket;
- (void)activateWithFinalDestination:(id)destination ticket:(id)ticket;
- (void)__park;
- (void)executeStopOnItinerary:(id)itinerary;
- (void)deactivated;
- (BOOL)holdsItinerary:(id)itinerary;
@end

#endif /* XRMobileAgent_h */
