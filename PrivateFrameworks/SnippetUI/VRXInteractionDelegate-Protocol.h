//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.11.3.0.0
//
#ifndef VRXInteractionDelegate_Protocol_h
#define VRXInteractionDelegate_Protocol_h
@import Foundation;

@protocol VRXInteractionDelegate <NSObject>
@optional
/* instance methods */
- (void)informHostOfViewResize:(struct CGSize { double x0; double x1; })resize;
- (id)presentingViewController;
- (void)performAceCommand:(id)command;
- (void)performSFCommand:(id)sfcommand;
- (void)reportSFFeedback:(id)sffeedback;
- (void)performShowResponse:(id)response;
- (void)navigateWithResponseData:(id)data;
- (void)navigateWithPluginModelData:(id)data bundleName:(id)name;
- (void)navigateWithAceCommand:(id)command;
- (void)navigateWithSFCommand:(id)sfcommand;
- (void)performNextSnippetWithResponseData:(id)data;
- (void)performNextSnippetWithMachineUtterance:(id)utterance;
- (void)sharedStateDidUpdate:(id)update;
- (void)createButtons:(id)buttons;
- (void)recalculateLeadingInsetSeparator:(double)separator;
- (void)willBeginEditing;
- (void)didEndEditing;
- (void)emitInstrumentationEvent:(id)event requiresNewTurn:(BOOL)turn;
- (void)emitInstrumentationEvent:(id)event;
- (void)cancelSpeechSynthesis;
- (void)restartSpeechSynthesis;
- (void)closeButtonTapped;
- (void)requestsKeyWindow;
- (void)containsComponentWithAction;
- (void)hideBackgroundBehindSiri;
- (void)informHostListItemCount:(long long)count;
- (void)snippetFocusDidChange:(long long)change;
@end

#endif /* VRXInteractionDelegate_Protocol_h */
