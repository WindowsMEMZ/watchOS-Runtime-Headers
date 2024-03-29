//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISceneHostingSheetActionClientToHost_h
#define _UISceneHostingSheetActionClientToHost_h
@import Foundation;

#include "_UISceneHostingActionClientToHost.h"

@interface _UISceneHostingSheetActionClientToHost : _UISceneHostingActionClientToHost
/* class methods */
+ (id)actionForSheetGrabberDidTriggerPrimaryAction;
+ (id)actionForSheetInteractionDraggingDidBeginWithRubberBandCoefficient:(double)coefficient dismissible:(BOOL)dismissible interruptedOffset:(struct CGPoint { double x0; double x1; })offset;
+ (id)actionForSheetInteractionDraggingDidChangeWithTranslation:(struct CGPoint { double x0; double x1; })translation velocity:(struct CGPoint { double x0; double x1; })velocity animateChange:(BOOL)change dismissible:(BOOL)dismissible;
+ (id)actionForSheetInteractionDraggingDidEnd;

/* instance methods */
- (void)performActionForSceneController:(id)controller;
@end

#endif /* _UISceneHostingSheetActionClientToHost_h */
