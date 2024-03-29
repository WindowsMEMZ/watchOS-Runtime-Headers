//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISQuickLongLookStateMachineDelegate_Protocol_h
#define CUISQuickLongLookStateMachineDelegate_Protocol_h
@import Foundation;

@protocol CUISQuickLongLookStateMachineDelegate <NSObject>
/* instance methods */
- (void)beginQuickLookWithQuickLongLookStateMachine:(id)machine completion:(id /* block */)completion;
- (void)beginQuickLookToLongLookWithQuickLongLookStateMachine:(id)machine completion:(id /* block */)completion;
- (void)beginLongLookWithQuickLongLookStateMachine:(id)machine completion:(id /* block */)completion;
- (void)completeLongLookWithQuickLongLookStateMachine:(id)machine;
- (void)awaitingUserInteractionBeforeLongLookForQuickLongLookStateMachine:(id)machine;
- (void)awaitingUnlockBeforeLongLookForQuickLongLookStateMachine:(id)machine;
- (void)beginListeningToBacklightForQuickLongLookStateMachine:(id)machine;
- (void)dismissForQuickLongLookStateMachine:(id)machine;
- (id)presentationPolicyForQuickLongLookStateMachine:(id)machine;
- (void)beginQuickLookTimerForQuickLongLookStateMachine:(id)machine;
- (void)cancelQuickLookTimerForQuickLongLookStateMachine:(id)machine;
- (void)beginScreenOffTimerForQuickLongLookStateMachine:(id)machine;
- (void)cancelScreenOffTimerForQuickLongLookStateMachine:(id)machine;
@end

#endif /* CUISQuickLongLookStateMachineDelegate_Protocol_h */
