//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SANPGetNowPlayingQueueDetailsRemote_h
#define SANPGetNowPlayingQueueDetailsRemote_h
@import Foundation;

#include "SABaseClientBoundCommand.h"
#include "SANPGetNowPlayingQueueDetails.h"

@class NSArray;

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SANPGetNowPlayingQueueDetails *queueDetails;
@property (nonatomic) double routeTimeout;

/* class methods */
+ (id)getNowPlayingQueueDetailsRemote;
+ (id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SANPGetNowPlayingQueueDetailsRemote_h */
