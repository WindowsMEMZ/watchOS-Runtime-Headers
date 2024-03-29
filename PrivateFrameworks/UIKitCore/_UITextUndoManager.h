//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextUndoManager_h
#define _UITextUndoManager_h
@import Foundation;

#include "NSUndoManager.h"
#include "UITextInputController.h"

@interface _UITextUndoManager : NSUndoManager

@property (weak, nonatomic) UITextInputController *inputController;

/* instance methods */
- (void)removeAllActions;
- (BOOL)canUndo;
- (BOOL)canRedo;
- (void)undo;
- (void)redo;
@end

#endif /* _UITextUndoManager_h */
