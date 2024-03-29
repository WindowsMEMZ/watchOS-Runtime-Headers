//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIFontPickerViewController_h
#define UIFontPickerViewController_h
@import Foundation;

#include "UIViewController.h"
#include "BSDescriptionProviding-Protocol.h"
#include "UIFontPickerViewControllerConfiguration.h"
#include "UIFontPickerViewControllerDelegate-Protocol.h"
#include "_UIFontPickerViewControllerHost-Protocol.h"
#include "_UIRemoteSheet-Protocol.h"
#include "_UIRemoteSheetContaining-Protocol.h"

@class NSArray, NSString, UIFontDescriptor;

@interface UIFontPickerViewController : UIViewController<_UIRemoteSheetContaining, _UIFontPickerViewControllerHost, BSDescriptionProviding> {
  /* instance variables */
  BOOL _presentingViewController;
}

@property (retain, nonatomic) NSArray *_selectedFontDescriptors;
@property (readonly, nonatomic) BOOL _presentingViewController;
@property (readonly, copy, nonatomic) UIFontPickerViewControllerConfiguration *configuration;
@property (weak, nonatomic) NSObject<UIFontPickerViewControllerDelegate> *delegate;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor;
@property (readonly, nonatomic) NSObject<_UIRemoteSheet> *_remoteSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_useSceneBackedFontPicker;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithConfiguration:(id)configuration;
- (id)_initWithConfiguration:(id)configuration useSceneBackedImplementation:(BOOL)implementation;
- (void)_commonFontPickerViewControllerInitUsingScene:(BOOL)scene;
- (id)init;
- (void)_setSelectedFontDescriptors:(id)descriptors;
- (void)viewWillAppear:(BOOL)appear;
- (void)_viewControllerPresentationDidInitiate;
- (void)dismissViewControllerWithTransition:(int)transition completion:(id /* block */)completion;
- (BOOL)_canShowWhileLocked;
- (void)_pickerDidSelectFont:(id)font;
- (void)_pickerDidCancel;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* UIFontPickerViewController_h */
