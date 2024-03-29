//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLGenericAlertProvider_h
#define CSLGenericAlertProvider_h
@import Foundation;

#include "CSLGenericAlertViewControllerDelegate-Protocol.h"
#include "CSLSUIProvider-Protocol.h"
#include "CUISAlertProvider-Protocol.h"
#include "CUISAlertProviderDelegate-Protocol.h"

@class NSArray, NSMapTable, NSString;

@interface CSLGenericAlertProvider : NSObject<CSLGenericAlertViewControllerDelegate, CSLSUIProvider, CUISAlertProvider> {
  /* instance variables */
  NSMapTable *_presentedItems;
}

@property (weak, nonatomic) NSObject<CUISAlertProviderDelegate> *alertProviderDelegate;
@property (copy, nonatomic) NSArray *presentedAlertItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedGenericAlertProvider;

/* instance methods */
- (id)init;
- (unsigned long long)presentAlertItem:(id)item;
- (unsigned long long)presentAlertItem:(id)item animated:(BOOL)animated;
- (unsigned long long)presentAlertItem:(id)item withServiceName:(id)name animated:(BOOL)animated;
- (void)dismissAlertViewController:(id)controller;
- (void)alertViewControllerDidDeactivate:(id)deactivate;
- (void)_removePresentedItem:(id)item;
- (void)requestUITriggerWithRegistration:(id)registration UITriggerName:(id)name withDictionary:(id)dictionary withReason:(long long)reason withCompletion:(id /* block */)completion;
@end

#endif /* CSLGenericAlertProvider_h */
