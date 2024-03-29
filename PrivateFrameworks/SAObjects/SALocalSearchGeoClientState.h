//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SALocalSearchGeoClientState_h
#define SALocalSearchGeoClientState_h
@import Foundation;

#include "SAAceClientState.h"

@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSString *environment;

/* class methods */
+ (id)deliveryDeadline;
+ (id)persistencePolicy;
+ (id)syncKey;
+ (id)uniqueObjectIdentifier;
+ (id)geoClientState;
+ (id)geoClientStateWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SALocalSearchGeoClientState_h */
