//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLEcoModeConfirmationAlertManager_h
#define CSLEcoModeConfirmationAlertManager_h
@import Foundation;

#include "CSLEcoModeConfirmationAlertProviderDelegate-Protocol.h"
#include "CSLSUIProvider-Protocol.h"
#include "CUISEcoModeConfirmationAlertManager-Protocol.h"

@class NSString;

@interface CSLEcoModeConfirmationAlertManager : NSObject<CSLEcoModeConfirmationAlertProviderDelegate, CSLSUIProvider, CUISEcoModeConfirmationAlertManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) id /* block */ handler;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)present;
- (void)ecoModeAlertProvider:(id)provider shouldEnterEcoMode:(BOOL)mode;
- (void)requestUITriggerWithRegistration:(id)registration UITriggerName:(id)name withDictionary:(id)dictionary withReason:(long long)reason withCompletion:(id /* block */)completion;
@end

#endif /* CSLEcoModeConfirmationAlertManager_h */
