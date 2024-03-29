//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostFrameLifetimeInterval_h
#define SignpostFrameLifetimeInterval_h
@import Foundation;

#include "SignpostAnimationSubInterval.h"
#include "SignpostCARenderServerFrameMetadata-Protocol.h"
#include "SignpostContextInfo.h"
#include "SignpostFrameLatencyInterval.h"
#include "SignpostHIDLatencyInterval.h"
#include "SignpostRenderServerRenderInterval.h"
#include "SignpostSupportTimeInterval-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSSet;

@interface SignpostFrameLifetimeInterval : SignpostAnimationSubInterval<SignpostCARenderServerFrameMetadata>

@property (retain, nonatomic) NSArray *commits;
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) unsigned int swapID;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) NSNumber *displayIDNum;
@property (readonly, nonatomic) unsigned long long displayRefreshIntervalDurationMachTime;
@property (readonly, nonatomic) unsigned char bufferCount;
@property (readonly, nonatomic) BOOL frameStallSkipRequest;
@property (readonly, nonatomic) unsigned long long missedVBLCount;
@property (readonly, nonatomic) unsigned long long previousFramePresentationMCT;
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *frameOverrunInterval;
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *frameOverrunInactiveDisplayInterval;
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *userVisibleGlitchInterval;
@property (readonly, nonatomic) NSObject<SignpostSupportTimeInterval> *previousFrameOnScreenInterval;
@property (readonly, nonatomic) NSSet *contributingPIDs;
@property (readonly, nonatomic) NSDictionary *pidToContextInfoArrayDict;
@property (readonly, nonatomic) SignpostHIDLatencyInterval *hidLatencyInterval;
@property (readonly, nonatomic) SignpostRenderServerRenderInterval *renderInterval;
@property (readonly, nonatomic) NSArray *skippedRenders;
@property (readonly, nonatomic) SignpostFrameLatencyInterval *frameLatencyInterval;
@property (readonly, nonatomic) BOOL hidLatencyIsLong;
@property (readonly, nonatomic) BOOL renderIntervalIsLong;
@property (readonly, nonatomic) BOOL frameLatencyIsLong;
@property (readonly, nonatomic) SignpostContextInfo *earliestTimeContextInfo;
@property (readonly, nonatomic) SignpostContextInfo *contextInfoForHIDInput;
@property (readonly, nonatomic) BOOL mayBeFirstFrame;

/* class methods */
+ (id)_frameSeedForLifetimeIntervalBegin:(id)begin;

/* instance methods */
- (id)initWithInterval:(id)interval contextArray:(id)array hidLatencyInterval:(id)interval renderInterval:(id)interval frameLatencyInterval:(id)interval frameSeedToSkippedRenderIntervals:(id)intervals;
- (id)initWithInterval:(id)interval contextArray:(id)array renderInterval:(id)interval frameSeedToSkippedRenderIntervals:(id)intervals;
- (BOOL)_isLongMCT:(unsigned long long)mct expectedFrameLatency:(unsigned char)latency;
- (unsigned int)_displayID;
- (BOOL)_hasDisplayID;
- (unsigned long long)_overrunBeginMCT;
- (id)_glitchIntervalWithRoundingUp:(BOOL)up;
- (id)pidToContextIDtoContextFrameLifetimeDict;
@end

#endif /* SignpostFrameLifetimeInterval_h */
