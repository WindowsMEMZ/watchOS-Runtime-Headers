//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSViewController_h
#define PSViewController_h
@import Foundation;

#include "UIViewController.h"
#include "PSController-Protocol.h"
#include "PSRootController.h"
#include "PSSpecifier.h"

@class NSString;
@protocol UIViewController<PSController;

@interface PSViewController : UIViewController<PSController> {
  /* instance variables */
  UIViewController<PSController> *_parentController;
  PSRootController *_rootController;
  PSSpecifier *_specifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setParentController:(id)controller;
- (id)parentController;
- (void)setRootController:(id)controller;
- (id)rootController;
- (void)setSpecifier:(id)specifier;
- (id)specifier;
- (void)setPreferenceValue:(id)value specifier:(id)specifier;
- (id)readPreferenceValue:(id)value;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)suspend;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (void)pushController:(id)controller;
- (void)pushController:(id)controller animate:(BOOL)animate;
- (void)showController:(id)controller;
- (void)showController:(id)controller animate:(BOOL)animate;
- (void)handleURL:(id)url withCompletion:(id /* block */)completion;
- (void)handleURL:(id)url;
- (void)viewDidLoad;
- (void)popupViewWillDisappear;
- (void)popupViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (void)formSheetViewDidDisappear;
- (BOOL)canBeShownFromSuspendedState;
- (void)statusBarWillAnimateByHeight:(double)height;
@end

#endif /* PSViewController_h */
