//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISheetPresentationControllerClientRemotePresentationDelegate_Protocol_h
#define _UISheetPresentationControllerClientRemotePresentationDelegate_Protocol_h
@import Foundation;

@protocol _UISheetPresentationControllerClientRemotePresentationDelegate <NSObject>
/* instance methods */
- (void)_sheetPresentationControllerClientConfigurationDidChange:(id)change;
- (void)_sheetGrabberDidTriggerPrimaryAction;
- (void)_sheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)coefficient dismissible:(BOOL)dismissible interruptedOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)_sheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x0; double x1; })translation velocity:(struct CGPoint { double x0; double x1; })velocity animateChange:(BOOL)change dismissible:(BOOL)dismissible;
- (void)_sheetInteractionDraggingDidEnd;
@optional
/* instance methods */
- (void)_sheetPresentationControllerDidChangeContainsFirstResponder:(BOOL)responder firstResponderRequiresKeyboard:(BOOL)keyboard keyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* _UISheetPresentationControllerClientRemotePresentationDelegate_Protocol_h */
