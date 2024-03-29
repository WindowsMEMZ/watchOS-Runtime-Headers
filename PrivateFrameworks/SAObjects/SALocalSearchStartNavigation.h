//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SALocalSearchStartNavigation_h
#define SALocalSearchStartNavigation_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SALocation.h"

@class NSString;

@interface SALocalSearchStartNavigation : SABaseClientBoundCommand

@property (retain, nonatomic) SALocation *destination;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) SALocation *origin;

/* class methods */
+ (id)startNavigation;
+ (id)startNavigationWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SALocalSearchStartNavigation_h */
