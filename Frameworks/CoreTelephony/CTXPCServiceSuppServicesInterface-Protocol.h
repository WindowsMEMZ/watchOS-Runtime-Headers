//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 11207.0.0.0.0
//
#ifndef CTXPCServiceSuppServicesInterface_Protocol_h
#define CTXPCServiceSuppServicesInterface_Protocol_h
@import Foundation;

@protocol CTXPCServiceSuppServicesInterface 
/* instance methods */
- (void)fetchCallWaitingValue:(id)value callClass:(int)class completion:(id /* block */)completion;
- (void)saveCallWaitingValue:(id)value callClass:(int)class enabled:(BOOL)enabled completion:(id /* block */)completion;
- (void)fetchCallForwardingValue:(id)value reason:(int)reason callClass:(int)class completion:(id /* block */)completion;
- (void)saveCallForwardingValue:(id)value value:(id)value completion:(id /* block */)completion;
- (void)isUnconditionalCallForwardingActive:(id)active completion:(id /* block */)completion;
- (void)fetchCallBarringValue:(id)value facility:(int)facility callClass:(int)class password:(id)password completion:(id /* block */)completion;
- (void)saveCallBarringValue:(id)value facility:(int)facility callClass:(int)class enabled:(BOOL)enabled password:(id)password completion:(id /* block */)completion;
- (void)fetchConnectedLinePresentationValue:(id)value completion:(id /* block */)completion;
- (void)fetchCallingLinePresentationValue:(id)value completion:(id /* block */)completion;
- (void)fetchConnectedLineIdRestrictionValue:(id)value completion:(id /* block */)completion;
- (void)fetchCallingLineIdRestrictionValue:(id)value completion:(id /* block */)completion;
- (void)saveCallingLineIdRestrictionValue:(id)value restrictionValue:(int)value completion:(id /* block */)completion;
@end

#endif /* CTXPCServiceSuppServicesInterface_Protocol_h */
