//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXLanguageSpeechBaseController_h
#define AXLanguageSpeechBaseController_h
@import Foundation;

#include "NPRFPreferenceCollectionViewController.h"
#include "AXSpeechSettingsModelController.h"

@class NSString;

@interface AXLanguageSpeechBaseController : NPRFPreferenceCollectionViewController

@property (retain, nonatomic) AXSpeechSettingsModelController *speechModelController;
@property (readonly, nonatomic) NSString *speechSourceKey;
@property (readonly, nonatomic) BOOL showsSelectedVoiceVariantForLanguage;
@property (readonly, nonatomic) BOOL includeLocaleInSelectorDialog;

/* instance methods */
- (id)init;
- (id)specifiersForLanguagesAndAccents;
- (id)_selectedDialect:(id)dialect;
@end

#endif /* AXLanguageSpeechBaseController_h */
