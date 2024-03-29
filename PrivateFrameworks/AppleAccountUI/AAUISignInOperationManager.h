//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUISignInOperationManager_h
#define AAUISignInOperationManager_h
@import Foundation;

#include "AAUISignInOperationDelegate-Protocol.h"
#include "ACUIAccountOperationsDelegate-Protocol.h"

@class ACUIAccountOperationsHelper, NSString, UIViewController;

@interface AAUISignInOperationManager : NSObject<ACUIAccountOperationsDelegate> {
  /* instance variables */
  ACUIAccountOperationsHelper *_accountOperationsHelper;
}

@property (weak, nonatomic) NSObject<AAUISignInOperationDelegate> *delegate;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPresentingViewController:(id)controller;
- (void)signInAccount:(id)account enablingDataclasses:(BOOL)dataclasses;
- (void)enableDataclasses:(id)dataclasses forAccount:(id)account;
- (void)_refreshEnabledDataclassesForAccount:(id)account;
- (void)_delegate_signInOperationManagerDidSaveAccount:(id)account error:(id)error;
- (void)operationsHelper:(id)helper willSaveAccount:(id)account;
- (void)operationsHelper:(id)helper didSaveAccount:(id)account withSuccess:(BOOL)success error:(id)error;
- (void)operationsHelper:(id)helper willRemoveAccount:(id)account;
- (void)operationsHelper:(id)helper didRemoveAccount:(id)account withSuccess:(BOOL)success error:(id)error;
- (id)operationsHelper:(id)helper desiredDataclassActionFromPicker:(id)picker;
- (id)_dataclassMergeActionPickerFromPicker:(id)picker;
- (void)_mainQueue_dataclassActionsForPicker:(id)picker completion:(id /* block */)completion;
- (id)_alertControllerForPicker:(id)picker completion:(id /* block */)completion;
- (void)_disableDataclasses:(id)dataclasses forAccount:(id)account completion:(id /* block */)completion;
@end

#endif /* AAUISignInOperationManager_h */
