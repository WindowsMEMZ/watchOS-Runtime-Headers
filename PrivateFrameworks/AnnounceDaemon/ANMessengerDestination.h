//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANMessengerDestination_h
#define ANMessengerDestination_h
@import Foundation;

@class HMHome, NSArray;

@interface ANMessengerDestination : NSObject

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSArray *accessories;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *devices;

/* class methods */
+ (id)relayDestinationForHome:(id)home rooms:(id)rooms rapportConnection:(id)connection error:(id *)error;
+ (id)destinationForHome:(id)home excludingUsers:(id)users excludingAccessories:(id)accessories rapportConnection:(id)connection;
+ (id)destinationForAccessoriesInHome:(id)home rooms:(id)rooms rapportConnection:(id)connection;
+ (id)_destinationForAppleAccessories:(id)accessories home:(id)home rooms:(id)rooms rapportConnection:(id)connection;
+ (id)_bestRemoteRelayAccessoryFromAccessories:(id)accessories inHome:(id)home;

/* instance methods */
- (id)init;
- (id)idsIdentifiersForService:(id)service;
- (id)participantsWithService:(id)service;
- (BOOL)addDeviceWithID:(id)id rapportConnection:(id)connection;
- (BOOL)addUser:(id)user inHome:(id)home;
- (void)addUser:(id)user inHome:(id)home rapportConnection:(id)connection;
- (BOOL)addAccessory:(id)accessory;
- (void)removeUser:(id)user;
- (void)removeDeviceWithID:(id)id;
- (void)removeUser:(id)user rapportConnection:(id)connection;
@end

#endif /* ANMessengerDestination_h */
