//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef KeychainSyncAdvancedSecurityCodeController_h
#define KeychainSyncAdvancedSecurityCodeController_h
@import Foundation;

#include "PSKeychainSyncViewController.h"
#include "UIAlertViewDelegate-Protocol.h"

@class NSString, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController : PSKeychainSyncViewController<UIAlertViewDelegate> {
  /* instance variables */
  double _cellTextWidth;
  UIFont *_cellFont;
}

@property (nonatomic) BOOL showsDisableRecoveryOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)viewDidLoad;
- (id)specifiers;
- (void)_finishedWithSpecifier:(id)specifier;
- (void)nextPressed;
- (BOOL)tableView:(id)view shouldDrawTopSeparatorForSection:(long long)section;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
@end

#endif /* KeychainSyncAdvancedSecurityCodeController_h */
