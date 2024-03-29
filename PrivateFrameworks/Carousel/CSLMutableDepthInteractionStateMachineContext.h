//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLMutableDepthInteractionStateMachineContext_h
#define CSLMutableDepthInteractionStateMachineContext_h
@import Foundation;

#include "CSLDepthInteractionStateMachineContext.h"
#include "CSLDepthInteractionStateMachineForegroundState.h"

@class CSLPRFDepthAutoLaunchSettings, CSLSModalAppSession, NSError, NSSet;

@interface CSLMutableDepthInteractionStateMachineContext : CSLDepthInteractionStateMachineContext

@property (copy, @dynamic, nonatomic) NSSet *depthSessions;
@property (copy, @dynamic, nonatomic) NSSet *otherSessions;
@property (@dynamic, nonatomic) long long autoLaunchState;
@property (copy, @dynamic, nonatomic) CSLPRFDepthAutoLaunchSettings *autoLaunchSettings;
@property (retain, @dynamic, nonatomic) NSError *autoLaunchError;
@property (@dynamic, nonatomic) long long submersionState;
@property (@dynamic, nonatomic) long long modalAppState;
@property (retain, @dynamic, nonatomic) CSLSModalAppSession *modalAppSession;
@property (retain, @dynamic, nonatomic) NSError *modalAppError;
@property (copy, @dynamic, nonatomic) CSLDepthInteractionStateMachineForegroundState *foregroundState;
@property (@dynamic, nonatomic) long long autoStartSessionOperationState;
@property (@dynamic, nonatomic) long long shallowActiveApplicationState;
@property (@dynamic, nonatomic) BOOL waterLockEnabled;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLMutableDepthInteractionStateMachineContext_h */
