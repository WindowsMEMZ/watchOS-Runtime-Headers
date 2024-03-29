//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRIRRoute_h
#define MRIRRoute_h
@import Foundation;

#include "MRRouteRepresentable-Protocol.h"

@class NSSet, NSString;

@interface MRIRRoute : NSObject<MRRouteRepresentable>

@property (retain, nonatomic) NSString *routeIdentifier;
@property (retain, nonatomic) NSSet *nodes;
@property (nonatomic) BOOL donateAsCandidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)routeWithEndpoint:(id)endpoint;
+ (id)routeWithOutputDevices:(id)devices;
+ (id)debugRouteWithDebugIdentifier:(id)identifier;

/* instance methods */
- (BOOL)isEqual:(id)equal;
@end

#endif /* MRIRRoute_h */
