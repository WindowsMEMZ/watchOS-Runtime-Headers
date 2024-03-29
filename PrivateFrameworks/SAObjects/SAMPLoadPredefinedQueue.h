//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMPLoadPredefinedQueue_h
#define SAMPLoadPredefinedQueue_h
@import Foundation;

#include "SADomainCommand.h"

@class NSArray, NSNumber, NSString;

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) BOOL dryRun;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSNumber *startPlaying;

/* class methods */
+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SAMPLoadPredefinedQueue_h */
