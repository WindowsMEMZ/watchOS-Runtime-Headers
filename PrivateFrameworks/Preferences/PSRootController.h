//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSRootController_h
#define PSRootController_h
@import Foundation;

#include "UINavigationController.h"
#include "PSController-Protocol.h"
#include "PSSpecifier.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface PSRootController : UINavigationController<PSController, UINavigationControllerDelegate> {
  /* instance variables */
  PSSpecifier *_specifier;
  NSMutableSet *_tasks;
  BOOL _deallocating;
  unsigned long long _supportedOrientationsOverride;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)writePreference:(id)preference;
+ (void)setPreferenceValue:(id)value specifier:(id)specifier;
+ (id)readPreferenceValue:(id)value;
+ (BOOL)processedBundle:(id)bundle parentController:(id)controller parentSpecifier:(id)specifier bundleControllers:(id *)controllers settings:(id)settings;

/* instance methods */
- (void)setPreferenceValue:(id)value specifier:(id)specifier;
- (id)readPreferenceValue:(id)value;
- (id)initWithCoder:(id)coder;
- (void)commonInit;
- (id)initWithNavigationBarClass:(Class)class toolbarClass:(Class)class;
- (id)initWithRootViewController:(id)controller;
- (id)initWithTitle:(id)title identifier:(id)identifier;
- (id)tasksDescription;
- (BOOL)taskIsRunning:(id)running;
- (void)addTask:(id)task;
- (void)taskFinished:(id)finished;
- (BOOL)busy;
- (id)contentViewForTopController;
- (id)specifiers;
- (void)statusBarWillAnimateByHeight:(double)height;
- (void)setParentController:(id)controller;
- (void)setSpecifier:(id)specifier;
- (id)specifier;
- (void)pushController:(id)controller;
- (void)pushController:(id)controller animate:(BOOL)animate;
- (void)showController:(id)controller;
- (void)showController:(id)controller animate:(BOOL)animate;
- (void)handleURL:(id)url;
- (void)handleURL:(id)url withCompletion:(id /* block */)completion;
- (void)showLeftButton:(id)button withStyle:(long long)style rightButton:(id)button withStyle:(long long)style;
- (void)statusBarWillChangeHeight:(id)height;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)sendWillResignActive;
- (void)sendWillBecomeActive;
- (void)setSupportedInterfaceOrientations:(unsigned long long)orientations;
- (unsigned long long)supportedInterfaceOrientations;
- (void)suspend;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (BOOL)deallocating;
- (void)dealloc;
- (id)parentController;
- (void)setRootController:(id)controller;
- (id)rootController;
- (id)aggregateDictionaryPath;
- (void)logSettingsPath;
- (void)willDismissPopupView;
- (void)didDismissPopupView;
- (void)willDismissFormSheetView;
- (void)didDismissFormSheetView;
- (BOOL)canBeShownFromSuspendedState;
- (void)_delayedControllerReleaseAfterPop:(id)pop;
- (id)popViewControllerAnimated:(BOOL)animated;
- (id)popToViewController:(id)controller animated:(BOOL)animated;
- (id)popToRootViewControllerAnimated:(BOOL)animated;
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;
- (void)navigationController:(id)controller willShowViewController:(id)controller animated:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)disappear;
@end

#endif /* PSRootController_h */
