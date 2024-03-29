//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCSharedListeningEvent_h
#define MPCSharedListeningEvent_h
@import Foundation;

#include "MPCSharedListeningCustomEvent.h"
#include "MPCSharedListeningEventParticipant.h"
#include "MPCSharedListeningPlaybackEvent.h"
#include "MPCSharedListeningQueueEvent.h"
#include "MPCSharedListeningReactionEvent.h"
#include "MPCSharedListeningSessionEvent.h"

@interface MPCSharedListeningEvent : NSObject

@property (readonly, nonatomic) MPCSharedListeningEventParticipant *participant;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) MPCSharedListeningSessionEvent *sessionEvent;
@property (readonly, nonatomic) MPCSharedListeningPlaybackEvent *playbackEvent;
@property (readonly, nonatomic) MPCSharedListeningQueueEvent *queueEvent;
@property (readonly, nonatomic) MPCSharedListeningReactionEvent *reactionEvent;
@property (readonly, nonatomic) MPCSharedListeningCustomEvent *customEvent;

/* class methods */
+ (id)eventWithSessionEvent:(id)event participant:(id)participant;
+ (id)eventWithPlaybackEvent:(id)event participant:(id)participant;
+ (id)eventWithQueueEvent:(id)event participant:(id)participant;
+ (id)eventWithReactionEvent:(id)event participant:(id)participant;
+ (id)eventWithCustomEvent:(id)event participant:(id)participant;

/* instance methods */
- (id)_initWithType:(long long)type participant:(id)participant;
- (id)description;
@end

#endif /* MPCSharedListeningEvent_h */
