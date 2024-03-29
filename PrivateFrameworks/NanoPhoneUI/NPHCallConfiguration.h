//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1042.2.11.0.0
//
#ifndef NPHCallConfiguration_h
#define NPHCallConfiguration_h
@import Foundation;

#include "NPHCall.h"
#include "NPHCallConfigurationChangeSource.h"

@class NSArray, TUDialRequest, TUJoinConversationRequest;

@interface NPHCallConfiguration : NSObject

@property (readonly, nonatomic) NPHCall *activeCall;
@property (readonly, nonatomic) NPHCall *sendingCall;
@property (readonly, nonatomic) NPHCall *incomingCall;
@property (readonly, nonatomic) NPHCall *currentCall;
@property (readonly, nonatomic) NPHCall *remoteCall;
@property (readonly, nonatomic) NPHCall *callWithBlockedMembers;
@property (readonly, nonatomic) NSArray *calls;
@property (readonly, nonatomic) NSArray *callsNotDeclined;
@property (readonly, nonatomic) NSArray *callsEnding;
@property (readonly, nonatomic) NSArray *callsEnded;
@property (readonly, nonatomic) NSArray *callsFailed;
@property (readonly, nonatomic) NPHCall *callToAnswerOnPhone;
@property (readonly, nonatomic) NSArray *callsOnDefaultPairedDevice;
@property (retain, nonatomic) TUDialRequest *dialPrompt;
@property (retain, nonatomic) TUDialRequest *redialPrompt;
@property (retain, nonatomic) TUJoinConversationRequest *rejoinPrompt;
@property (retain, nonatomic) NPHCall *blockedCallEndedPrompt;
@property (retain, nonatomic) NSArray *SOSDisambiguationPrompt;
@property (nonatomic) long long sosFlowState;
@property (retain, nonatomic) NPHCall *callEnded;
@property (retain, nonatomic) NPHCall *callHandingOff;
@property (retain, nonatomic) NPHCall *callHandingOffToWatch;
@property (retain, nonatomic) NPHCallConfigurationChangeSource *source;
@property (readonly, nonatomic) BOOL hasEmergencyCall;
@property (readonly, nonatomic) BOOL hasEmergencySOSCall;
@property (readonly, nonatomic) BOOL hasDisconnectedEmergencySOSCall;
@property (readonly, nonatomic) BOOL hasHostedCall;

/* class methods */
+ (id)callConfigurationWithIncomingCallOverrideName:(id)name incomingCallStatus:(int)status activeCallOverrideName:(id)name activeCallStatus:(int)status activeCallDisconnectedReason:(int)reason heldCallOverrideName:(id)name heldCallStatus:(int)status outgoingCallOverrideName:(id)name outgoingCallStatus:(int)status isSOS:(BOOL)sos audioMessageType:(unsigned long long)type isAnsweringOnPhone:(BOOL)phone source:(id)source;
+ (void)log:(id)log withReason:(id)reason;

/* instance methods */
- (id)init;
- (id)initWithCalls:(id)calls andCallsOnDefaultPairedDevice:(id)device source:(id)source;
- (id)description;
- (void)disconnectAllCallsWithSource:(id)source;
- (id)copyWithCallsPassingTest:(id /* block */)test;
- (void)disconnectAllNonEmergencyCallsWithSource:(id)source;
- (void)_log;
@end

#endif /* NPHCallConfiguration_h */
