//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STUIStatusBarLockItem_h
#define STUIStatusBarLockItem_h
@import Foundation;

#include "STUIStatusBarItem.h"
#include "STUIStatusBarLockView.h"
#include "_UIBasicAnimationFactory-Protocol.h"

@class NSString, NSTimer, _UIExpandingGlyphsView;

@interface STUIStatusBarLockItem : STUIStatusBarItem<_UIBasicAnimationFactory>

@property (retain, nonatomic) STUIStatusBarLockView *lockView;
@property (retain, nonatomic) _UIExpandingGlyphsView *stringView;
@property (retain, nonatomic) NSTimer *lockDisappearanceTimer;
@property (nonatomic) BOOL showsLock;
@property (nonatomic) long long unlockFailureCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)textDisplayIdentifier;

/* instance methods */
- (id)dependentEntryKeys;
- (BOOL)canEnableDisplayItem:(id)item fromData:(id)data;
- (id)applyUpdate:(id)update toDisplayItem:(id)item;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)identifier;
- (id)_basicAnimationForView:(id)view withKeyPath:(id)path;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)identifier;
- (void)_create_lockView;
- (void)_create_stringView;
- (id)viewForIdentifier:(id)identifier;
@end

#endif /* STUIStatusBarLockItem_h */
