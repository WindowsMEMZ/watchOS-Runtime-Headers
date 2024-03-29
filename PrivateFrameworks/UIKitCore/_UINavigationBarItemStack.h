//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarItemStack_h
#define _UINavigationBarItemStack_h
@import Foundation;

#include "UINavigationItem.h"
#include "_UINavigationBarTransitionAssistant.h"
#include "_UINavigationItemChangeObserver-Protocol.h"

@class NSArray, NSMutableArray;

@interface _UINavigationBarItemStack : NSObject {
  /* instance variables */
  NSArray *_previousItems;
}

@property (weak, nonatomic) NSObject<_UINavigationItemChangeObserver> *changeObserver;
@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) _UINavigationBarTransitionAssistant *transitionAssistant;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *topEntry;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *backEntry;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousTopEntry;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousBackEntry;
@property (readonly, nonatomic) UINavigationItem *topItem;
@property (readonly, nonatomic) UINavigationItem *backItem;
@property (readonly, nonatomic) UINavigationItem *previousTopItem;
@property (readonly, nonatomic) UINavigationItem *previousBackItem;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, nonatomic) BOOL pushingOrPopping;
@property (readonly, nonatomic) BOOL pushing;
@property (readonly, nonatomic) BOOL popping;

/* instance methods */
- (id)init;
- (id)initWithItems:(id)items;
- (BOOL)isPushingOrPopping;
- (BOOL)isPushing;
- (BOOL)isPopping;
- (void)_updateChangeObserversFor:(id)for;
- (void)_prepareTransitionWithAssistant:(id)assistant;
- (void)pushItem:(id)item withTransitionAssistant:(id)assistant;
- (void)popItemWithTransitionAssistant:(id)assistant;
- (void)setItems:(id)items withTransitionAssistant:(id)assistant;
- (void)_cleanupTransitionAssistant;
- (void)_completeTransition;
- (void)completeOperation;
- (void)cancelOperation;
- (void)beginInteractiveTransition;
- (void)endInteractiveTransition;
- (void)_shim_pushNestedNavigationItem:(id)item;
- (id)_shim_popNestedNavigationItem;
- (BOOL)stackItemsAreEqualTo:(id)to;
- (void)iterateItems:(id /* block */)items;
- (void)iterateEntries:(id /* block */)entries;
- (void)reverseIterateEntries:(id /* block */)entries;
- (long long)_effectiveDisplayModeForItem:(id)item inStack:(id)stack;
- (long long)effectiveDisplayModeForItemInCurrentStack:(id)stack;
- (long long)effectiveDisplayModeForItemInPreviousStack:(id)stack;
- (id)description;
@end

#endif /* _UINavigationBarItemStack_h */
