//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFOOPControllerExitingState_h
#define WFOOPControllerExitingState_h
@import Foundation;

#include "WFOOPControllerState.h"
#include "WFState-Protocol.h"

@class NSString;

@interface WFOOPControllerExitingState : WFOOPControllerState<WFState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (unsigned long long)stage;
- (BOOL)canTransitionToState:(id)state;
@end

#endif /* WFOOPControllerExitingState_h */
