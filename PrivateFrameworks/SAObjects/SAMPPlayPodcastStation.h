//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMPPlayPodcastStation_h
#define SAMPPlayPodcastStation_h
@import Foundation;

#include "SADomainCommand.h"
#include "SAMPPodcastStation.h"

@class NSArray, NSString;

@interface SAMPPlayPodcastStation : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) BOOL startPlaying;
@property (retain, nonatomic) SAMPPodcastStation *station;

/* class methods */
+ (id)playPodcastStation;
+ (id)playPodcastStationWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SAMPPlayPodcastStation_h */
