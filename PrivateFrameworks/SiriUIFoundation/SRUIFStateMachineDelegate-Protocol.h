//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.13.3.0.0
//
#ifndef SRUIFStateMachineDelegate_Protocol_h
#define SRUIFStateMachineDelegate_Protocol_h
@import Foundation;

@protocol SRUIFStateMachineDelegate <NSObject>
/* instance methods */
- (void)stateMachine:(id)machine didTransitionFromState:(long long)state forEvent:(long long)event;
@optional
/* instance methods */
- (id)stateMachine:(id)machine descriptionForEvent:(long long)event;
- (void)stateMachine:(id)machine didTransitionFromState:(long long)state forEvent:(long long)event eventTimeStamp:(double)stamp;
@end

#endif /* SRUIFStateMachineDelegate_Protocol_h */
