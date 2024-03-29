//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKStateMachineDelegate_Protocol_h
#define HKStateMachineDelegate_Protocol_h
@import Foundation;

@protocol HKStateMachineDelegate <NSObject>
@optional
/* instance methods */
- (void)stateMachine:(id)machine persistTransition:(id)transition;
- (void)stateMachine:(id)machine didTransition:(id)transition fromState:(id)state toState:(id)state date:(id)date error:(id)error;
- (void)stateMachine:(id)machine willEnterState:(id)state date:(id)date error:(id)error;
- (void)stateMachine:(id)machine didEnterState:(id)state date:(id)date error:(id)error;
- (void)stateMachine:(id)machine willLeaveState:(id)state date:(id)date error:(id)error;
- (void)stateMachine:(id)machine didLeaveState:(id)state date:(id)date error:(id)error;
- (void)stateMachine:(id)machine didIgnoreEvent:(long long)event state:(id)state;
@end

#endif /* HKStateMachineDelegate_Protocol_h */
