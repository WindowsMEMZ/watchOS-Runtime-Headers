//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef _VOSProfileCommand_h
#define _VOSProfileCommand_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "VOSCommand.h"
#include "_VOSProfileMode.h"

@class NSMutableSet;

@interface _VOSProfileCommand : NSObject<NSSecureCoding>

@property (retain, nonatomic) VOSCommand *command;
@property (retain, nonatomic) NSMutableSet *gestures;
@property (retain, nonatomic) NSMutableSet *keyboardShortcuts;
@property (retain, nonatomic) NSMutableSet *quickNavShortcuts;
@property (retain, nonatomic) NSMutableSet *secondaryCommands;
@property (weak, nonatomic) _VOSProfileMode *mode;
@property (readonly, nonatomic) BOOL hasSecondaryCommands;

/* class methods */
+ (id)profileCommandWithCommand:(id)command;
+ (id)profileCommandWithStringValue:(id)value;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithCommand:(id)command gestures:(id)gestures keyboardShortcuts:(id)shortcuts quickNavShortcuts:(id)shortcuts secondaryCommands:(id)commands;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)addGesture:(id)gesture;
- (void)removeGesture:(id)gesture;
- (id)profileGestureForGesture:(id)gesture;
- (void)addKeyboardShortcut:(id)shortcut;
- (void)removeKeyboardShortcut:(id)shortcut;
- (id)profileKeyboardShortcutForKeyChord:(id)chord;
- (void)addQuickNavShortcut:(id)shortcut;
- (void)removeQuickNavShortcut:(id)shortcut;
- (id)profileQuickNavShortcutForKeyChord:(id)chord;
- (void)addSecondaryCommand:(id)command;
- (void)removeSecondaryCommand:(id)command;
- (id)secondaryCommandsForPressCount:(long long)count;
@end

#endif /* _VOSProfileCommand_h */
