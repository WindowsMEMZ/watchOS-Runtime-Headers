//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKTTRMultiplayerParticipant_h
#define GKTTRMultiplayerParticipant_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSData, NSString;

@interface GKTTRMultiplayerParticipant : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSData *pushToken;

/* class methods */
+ (id)secureCodedPropertyKeys;

/* instance methods */
- (id)initWithPlayerID:(id)id pushToken:(id)token;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)serverRepresentation;
@end

#endif /* GKTTRMultiplayerParticipant_h */
