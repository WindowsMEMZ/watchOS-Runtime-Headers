//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyCommand_h
#define UIKeyCommand_h
@import Foundation;

#include "UICommand.h"
#include "UIEvent.h"
#include "UIImage.h"
#include "UIResponder.h"

@class BKSHIDEventDeferringEnvironment, NSArray, NSIndexSet, NSString;

@interface UIKeyCommand : UICommand {
  /* instance variables */
  NSString *_lastLayout;
  NSIndexSet *_keyCodes;
  NSIndexSet *_layoutAwareKeyCodes;
  unsigned int _lastKeyboardType;
  UIEvent *_triggeringEvent;
  unsigned int x :32 _layoutAwareModifierFlags;
  unsigned int x :32 _buttonType;
  unsigned int x :1 _handleAfterKeyEvent;
  unsigned int x :1 _isInputSpecialkey;
  NSString *_layoutAwareInput;
  NSString *_layoutAwareDisplayInputOverride;
}

@property (readonly, nonatomic) NSString *_layoutAwareInput;
@property (readonly, nonatomic) long long _layoutAwareModifierFlags;
@property (retain, nonatomic) NSString *_layoutAwareDisplayInputOverride;
@property (readonly, nonatomic) NSIndexSet *_layoutAwareKeyCodes;
@property (readonly, nonatomic) NSString *discoverabilityInput;
@property (readonly, nonatomic) SEL upAction;
@property (readonly, nonatomic) BOOL repeatable;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL allowGlobeModifier;
@property (readonly, nonatomic) NSIndexSet *_keyCodes;
@property (readonly, nonatomic) long long _buttonType;
@property (readonly, nonatomic) UIEvent *_triggeringEvent;
@property (readonly, nonatomic) BOOL _handleAfterKeyEvent;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *_eventDeferringEnvironment;
@property (weak, nonatomic) UIResponder *_originatingResponder;
@property (nonatomic) long long _enumerationPriority;
@property (copy, @dynamic, nonatomic) NSString *title;
@property (copy, @dynamic, nonatomic) UIImage *image;
@property (copy, @dynamic, nonatomic) NSString *discoverabilityTitle;
@property (readonly, @dynamic, nonatomic) SEL action;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, @dynamic, nonatomic) id propertyList;
@property (@dynamic, nonatomic) unsigned long long attributes;
@property (@dynamic, nonatomic) long long state;
@property (readonly, @dynamic, nonatomic) NSArray *alternates;
@property (nonatomic) BOOL wantsPriorityOverSystemBehavior;
@property (nonatomic) BOOL allowsAutomaticLocalization;
@property (nonatomic) BOOL allowsAutomaticMirroring;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)commandWithTitle:(id)title imageName:(id)name action:(SEL)action input:(id)input modifierFlags:(long long)flags;
+ (id)commandWithTitle:(id)title image:(id)image action:(SEL)action input:(id)input modifierFlags:(long long)flags propertyList:(id)list;
+ (id)commandWithTitle:(id)title image:(id)image action:(SEL)action input:(id)input modifierFlags:(long long)flags propertyList:(id)list alternates:(id)alternates;
+ (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action;
+ (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action discoverabilityTitle:(id)title;
+ (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action upAction:(SEL)action;
+ (id)keyCommandWithCompactInput:(id)input action:(SEL)action upAction:(SEL)action;
+ (id)keyCommandWithKeyCode:(long long)code modifierFlags:(long long)flags action:(SEL)action;
+ (id)keyCommandWithKeyCode:(long long)code modifierFlags:(long long)flags action:(SEL)action discoverabilityTitle:(id)title;
+ (id)keyCommandWithKeyCodes:(id)codes modifierFlags:(long long)flags action:(SEL)action;
+ (id)keyCommandWithKeyCodes:(id)codes modifierFlags:(long long)flags buttonType:(long long)type;
+ (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags buttonType:(long long)type;
+ (id)keyCommandWithInput:(id)input modifierFlags:(long long)flags action:(SEL)action upAction:(SEL)action discoverabilityTitle:(id)title;

/* instance methods */
- (BOOL)_isDirectlyReachableWithTranslator:(id)translator;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithTitle:(id)title image:(id)image imageName:(id)name action:(SEL)action propertyList:(id)list alternates:(id)alternates discoverabilityTitle:(id)title attributes:(unsigned long long)attributes state:(long long)state;
- (id)initWithCommand:(id)command;
- (id)initWithTitle:(id)title image:(id)image imageName:(id)name action:(SEL)action input:(id)input modifierFlags:(long long)flags propertyList:(id)list alternates:(id)alternates discoverabilityTitle:(id)title attributes:(unsigned long long)attributes state:(long long)state;
- (id)_initWithInput:(id)input modifierFlags:(long long)flags keyCodes:(id)codes action:(SEL)action upAction:(SEL)action discoverabilityTitle:(id)title buttonType:(long long)type;
- (id)initWithKeyCommand:(id)command;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)_defaultEnumerationPriority;
- (void)_localizeWithGSKeyboard:(struct __GSKeyboard *)gskeyboard automatically:(BOOL)automatically force:(BOOL)force;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)_nonRepeatableKeyCommand;
- (id)_placeholderKeyCommand;
- (id)_allowGlobeModifierKeyCommand;
- (id)_keyCommandUsingAlternate:(id)alternate;
- (void)_setTriggeringEvent:(id)event;
- (BOOL)_isKeyCommandLocalized;
- (BOOL)_isKeyCommandLikelyMirrored;
- (void)_setEnumerationPriority:(long long)priority;
- (struct __GSKeyboard *)_currentGSKeyboard;
- (id)nextResponder;
- (BOOL)_allowsCommandKeyModifierElision;
- (void)_markHandleAfterKeyEvent;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (id)_immutableCopy;
- (id)_mutableCopyIfNeeded;
- (BOOL)_isLikelyToConflictWithTextInputForResponder:(id)responder;
- (id)description;
- (id)_readableStringForModifierFlagsUsingWords:(BOOL)words forHUD:(BOOL)hud;
- (id)_readableStringForInputUsingWords:(BOOL)words forHUD:(BOOL)hud outIsSingleCharacterOrKeySymbol:(BOOL *)symbol;
- (void)_setEventDeferringEnvironment:(id)environment;
- (void)_setOriginatingResponder:(id)responder;
@end

#endif /* UIKeyCommand_h */
