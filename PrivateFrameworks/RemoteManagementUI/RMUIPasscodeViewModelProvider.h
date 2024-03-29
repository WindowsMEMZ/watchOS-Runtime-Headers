//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMUIPasscodeViewModelProvider_h
#define RMUIPasscodeViewModelProvider_h
@import Foundation;

#include "RMUIPasscodeViewModel.h"

@class NSDictionary, RMObserverStore;

@interface RMUIPasscodeViewModelProvider : NSObject

@property (copy, nonatomic) NSDictionary *passcodeSettings;
@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeViewModel;
@property (retain, nonatomic) RMObserverStore *observerStore;

/* class methods */
+ (void)_applyPasscodeDeclaration:(id)declaration toConglomerate:(id)conglomerate;

/* instance methods */
- (id)init;
- (id)description;
- (void)_updateViewModelsIsManaged:(BOOL)managed passcodeSettings:(id)settings;
- (void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id /* block */)handler;
- (id)_requirePasscode;
- (id)_requireAlphanumericPasscode;
- (id)_requireComplexPasscode;
- (id)_minimumLength;
- (id)_minimumComplexCharacters;
- (id)_maximumFailedAttempts;
- (id)_maximumGracePeriodInMinutes;
- (id)_maximumInactivityInMinutes;
- (id)_maximumPasscodeAgeInDays;
- (id)_passcodeReuseLimit;
@end

#endif /* RMUIPasscodeViewModelProvider_h */
