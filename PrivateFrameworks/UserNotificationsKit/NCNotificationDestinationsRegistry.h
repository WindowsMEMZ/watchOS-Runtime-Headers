//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef NCNotificationDestinationsRegistry_h
#define NCNotificationDestinationsRegistry_h
@import Foundation;

@class NSArray, NSMutableDictionary;

@interface NCNotificationDestinationsRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *destinations;
@property (retain, nonatomic) NSMutableDictionary *activeDestinations;
@property (retain, nonatomic) NSMutableDictionary *readyDestinations;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *registeredDestinations;

/* instance methods */
- (id)init;
- (void)registerDestination:(id)destination;
- (void)registerDestination:(id)destination forIdentifier:(id)identifier;
- (BOOL)isRegisteredDestination:(id)destination;
- (void)unregisterDestination:(id)destination;
- (void)unregisterDestinationForIdentifier:(id)identifier;
- (BOOL)hasActiveDestinationsForRequest:(id)request;
- (id)destinationIdentifiersForRequestDestinations:(id)destinations;
- (id)destinationsForRequestDestinations:(id)destinations;
- (void)setDestination:(id)destination enabled:(BOOL)enabled;
- (void)setDestinationWithIdentifier:(id)identifier enabled:(BOOL)enabled;
- (void)setDestination:(id)destination ready:(BOOL)ready;
- (id)readyDestinationsForRequestDestinations:(id)destinations;
- (id)_destinationsForRequestDestinations:(id)destinations inDestinationDict:(id)dict;
@end

#endif /* NCNotificationDestinationsRegistry_h */
