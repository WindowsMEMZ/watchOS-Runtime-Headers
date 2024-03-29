//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHierarchicalStateMachine_h
#define HMDHierarchicalStateMachine_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHierarchicalStateMachineState.h"
#include "HMFLogging-Protocol.h"

@class CUStateEvent, CUStateMachine, NSString;
@protocol OS_dispatch_queue;

@interface HMDHierarchicalStateMachine : HMFObject<HMFLogging>

@property (retain, nonatomic) CUStateMachine *cuStateMachine;
@property (readonly, nonatomic) BOOL allowSelfStateTransitions;
@property (retain, nonatomic) CUStateEvent *eventCausingStateTransition;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak) HMDHierarchicalStateMachineState *currentHSMState;
@property (retain, @dynamic, nonatomic) HMDHierarchicalStateMachineState *initialState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)initWithQueue:(id)queue allowSelfStateTransitions:(BOOL)transitions;
- (void)start;
- (void)invalidate;
- (void)dispatchEvent:(id)event;
- (void)dispatchEvent:(id)event userInfo:(id)info;
- (void)transitionToState:(id)state;
- (void)transitionToState:(id)state withEvent:(id)event;
- (void)setStates:(id)states;
- (void)getCurrentHSMStateWithCompletionHandler:(id /* block */)handler;
- (id)stateWithName:(id)name;
- (void)setHSMInternalCurrentState:(id)state;
@end

#endif /* HMDHierarchicalStateMachine_h */
