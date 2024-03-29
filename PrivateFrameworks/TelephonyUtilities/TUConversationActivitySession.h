//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUConversationActivitySession_h
#define TUConversationActivitySession_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TUConversationActivity.h"
#include "TUHandle.h"

@class NSDate, NSNumber, NSSet, NSString, NSUUID, NSXPCListenerEndpoint;

@interface TUConversationActivitySession : NSObject<NSCopying, NSMutableCopying, NSSecureCoding>

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) TUConversationActivity *activity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) BOOL isLocallyInitiated;
@property (nonatomic) BOOL usingAirplay;
@property (retain, nonatomic) NSDate *localCreationTimestamp;
@property (retain, nonatomic) NSDate *permittedJoinTimestamp;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSNumber *clientAudioSessionID;
@property (nonatomic) BOOL isLightweightPrimaryInitiated;
@property (readonly, nonatomic) BOOL isFirstJoin;
@property (nonatomic) BOOL permittedToJoin;
@property (readonly, nonatomic) BOOL localParticipantActive;
@property (readonly, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) NSString *persistentSceneIdentifier;
@property (nonatomic) unsigned long long distributionCount;
@property (readonly, nonatomic) unsigned long long applicationState;
@property (retain, nonatomic) TUHandle *terminatingHandle;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithActivity:(id)activity state:(unsigned long long)state uuid:(id)uuid endpoint:(id)endpoint locallyInitiated:(BOOL)initiated timestamp:(id)timestamp isFirstJoin:(BOOL)join activeRemoteParticipants:(id)participants isLocalParticipantActive:(BOOL)active applicationState:(unsigned long long)state;
- (id)initWithTUConversationActivitySession:(id)session;
- (id)initWithActivity:(id)activity state:(unsigned long long)state endpoint:(id)endpoint locallyInitiated:(BOOL)initiated timestamp:(id)timestamp isFirstJoin:(BOOL)join;
- (id)initWithActivity:(id)activity uuid:(id)uuid locallyInitiated:(BOOL)initiated timestamp:(id)timestamp isFirstJoin:(BOOL)join;
- (id)initWithActivity:(id)activity locallyInitiated:(BOOL)initiated timestamp:(id)timestamp isFirstJoin:(BOOL)join;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToConversationActivitySession:(id)session;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)launchApplicationWithForcedURL:(id)url completion:(id /* block */)completion;
- (id)publicCopy;
- (BOOL)isPermittedToJoin;
- (BOOL)isLocalParticipantActive;
- (BOOL)isUsingAirplay;
@end

#endif /* TUConversationActivitySession_h */
