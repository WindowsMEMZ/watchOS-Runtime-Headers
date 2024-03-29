//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNNavigationSessionState_h
#define MNNavigationSessionState_h
@import Foundation;

#include "MNActiveRouteInfo.h"
#include "MNLocation.h"
#include "NSCopying-Protocol.h"

@class GEOApplicationAuditToken, GEOComposedRouteLeg, GEOComposedWaypoint, GEOMapServiceTraits, NSArray, NSString;

@interface MNNavigationSessionState : NSObject<NSCopying>

@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOMapServiceTraits *traits;
@property (retain, nonatomic) MNLocation *location;
@property (retain, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (copy, nonatomic) NSArray *alternateRouteInfos;
@property (retain, nonatomic) GEOComposedWaypoint *currentWaypoint;
@property (nonatomic) unsigned long long targetLegIndex;
@property (nonatomic) long long arrivalState;
@property (readonly, nonatomic) GEOComposedRouteLeg *targetLeg;
@property (readonly, nonatomic) GEOComposedRouteLeg *nextLeg;
@property (readonly, nonatomic) BOOL isOnLastLeg;

/* instance methods */
- (id)initWithLocation:(id)location currentRouteInfo:(id)info alternateRouteInfos:(id)infos targetLegIndex:(unsigned long long)index;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)_locationStateAsString:(unsigned long long)string;
@end

#endif /* MNNavigationSessionState_h */
