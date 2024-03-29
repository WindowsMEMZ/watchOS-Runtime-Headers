//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXUIVoiceOverBluetoothPairController_h
#define AXUIVoiceOverBluetoothPairController_h
@import Foundation;

#include "NPRFCompatibilityPreferenceListController.h"
#include "UITextFieldDelegate-Protocol.h"

@class NSString, VOSBluetoothDevice;

@interface AXUIVoiceOverBluetoothPairController : NPRFCompatibilityPreferenceListController<UITextFieldDelegate> {
  /* instance variables */
  VOSBluetoothDevice *_device;
  NSString *_promptFormat;
  BOOL _dismissed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)loadView;
- (id)internalTableView;
- (void)viewWillAppear:(BOOL)appear;
- (void)dealloc;
- (void)updatePrompt:(id)prompt;
- (void)cancelButtonClicked:(id)clicked;
- (void)doneButtonClicked:(id)clicked;
- (void)deviceUpdated:(id)updated;
- (void)keyboardWillShow:(id)show;
- (void)textDidChange:(id)change;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)emptySetter:(id)setter specifier:(id)specifier;
- (id)specifiers;
@end

#endif /* AXUIVoiceOverBluetoothPairController_h */
