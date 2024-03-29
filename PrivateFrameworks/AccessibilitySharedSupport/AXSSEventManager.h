//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSEventManager_h
#define AXSSEventManager_h
@import Foundation;

#include "AXSSActionManager.h"
#include "AXSSKeyboardCommandInfo.h"
#include "AXSSKeyboardCommandMap.h"

@class NSDictionary;
@protocol AXSSKeyFilterDelegate;

@interface AXSSEventManager : NSObject

@property (readonly, nonatomic) NSDictionary *_commandInfos;
@property (nonatomic) BOOL _tabKeyPressed;
@property (nonatomic) BOOL _performedActionWhileTabComboPressed;
@property (nonatomic) double _lastTabPressTime;
@property (retain, nonatomic) AXSSKeyboardCommandInfo *_lastDownAndUpCommandInfo;
@property (nonatomic) double minimumDelayUntilRepeat;
@property (retain, nonatomic) AXSSActionManager *actionManager;
@property (nonatomic) unsigned long long searchType;
@property (retain, nonatomic) AXSSKeyboardCommandMap *commandMap;
@property (weak, nonatomic) NSObject<AXSSKeyFilterDelegate> *filterDelegate;
@property (nonatomic) BOOL shouldSuppressCommands;
@property (nonatomic) BOOL passthroughModeEnabled;

/* instance methods */
- (id)initWithActionManager:(id)manager;
- (id)initWithActionManager:(id)manager commandMap:(id)map;
- (BOOL)processKeyboardEvent:(id)event;
- (BOOL)processKeyboardCommand:(id)command;
- (void)_performDownActionForCommand:(id)command info:(id)info;
- (BOOL)_handleEvent:(id)event forCaptureOnly:(BOOL)only;
- (void)handleFKAEvent:(id)fkaevent;
- (BOOL)shouldCaptureEvent:(id)event;
- (void)_handleTabRepeatOrUpWithCommand:(id)command;
- (void)_handleTabEvent:(id)event;
- (id)_tabbedKeyChordForKeyChord:(id)chord;
- (void)_handleTabComboEvent:(id)event;
- (BOOL)_handleCommand:(id)command event:(id)event;
- (BOOL)isPassthroughModeEnabled;
@end

#endif /* AXSSEventManager_h */
