//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFStateMachineTransitionEvent_h
#define WFStateMachineTransitionEvent_h
@import Foundation;

#include "WFState-Protocol.h"

@class NSString;

@interface WFStateMachineTransitionEvent : NSObject

@property (readonly, nonatomic) NSObject<WFState> *state;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL valid;

/* class methods */
+ (id)transitionEventWithState:(id)state reason:(id)reason valid:(BOOL)valid;

/* instance methods */
- (id)initWithState:(id)state reason:(id)reason valid:(BOOL)valid;
- (id)description;
- (BOOL)isValid;
@end

#endif /* WFStateMachineTransitionEvent_h */
